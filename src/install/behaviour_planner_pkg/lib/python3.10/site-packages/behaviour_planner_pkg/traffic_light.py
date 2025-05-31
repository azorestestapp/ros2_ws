from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence, Selector
from py_trees import timers
from autodrive_msgs.msg import TrafficLight, SpeedLimit, Direction
from behaviour_planner_pkg.utilities import (
    Placeholder,
    WithinProximityCondition,
    StoppedCondition,
    SetSpeed,
    ResetSpeed,
    Creep,
    ProceedThroughLanelet,
    ResetYieldStatus,
    ShouldStopCondition)
from diagnostic_msgs.msg import KeyValue

# Static parameters
MAX_TRACK_SPEED = 20.0  # in MPS
# IDM_MIN_GAP = 2.0
# IDM_TIME_HEADWAY = 2.0 # Safe time headway in seconds
# IDM_MAX_ACCEL = 4.0 # Maximum acceleration in m/s^2
# IDM_MAX_DECCEL = 3.0 # Comfortable braking deceleration in m/s^2
# IDM_POS_OFFSET = 5.5
EPSILON = 1e-3  # a very small positive value
FOLLOWER_MIN_GAP = 2.0  # Minimum spacing in meters
FOLLOWER_MAX_ACCEL = 2.0  # TODO - This should be set to the LP setting
FOLLOWER_MIN_ACCEL = FOLLOWER_MAX_ACCEL * 0.5  # The minimum aceleration used for the gradient to bring the car to target speed
VEHICLE_SIZE_X = 2.395890 * 2
VEHICLE_SIZE_Y = 1.081725 * 2
VEHICLE_SIZE_Z = 0.743830 * 2


class LightCondition(Behaviour):
    def __init__(self, name: str, bt_instance, target_light_conditions):
        super(LightCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.target_light_conditions = target_light_conditions

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        detection_input = self.bt_instance.detection.main_bulb
        flashing = self.bt_instance.detection.flashing

        # Check if the detection input is in our list of valid conditions
        if detection_input in self.target_light_conditions:
            if len(self.target_light_conditions) > 1:  # if the light might be flashing
                if flashing:  # if the light is flashing
                    return Status.SUCCESS
                else:
                    return Status.FAILURE
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


def get_off_tree(bt_instance):
    off_sequence = Sequence(name="off_sequence", memory=True)
    off_sequence.add_children([
        LightCondition("light_is_off", bt_instance, target_light_conditions=[
            TrafficLight.OFF
        ]),
        # Placeholder("off_sequence_actions", Status.FAILURE)
        # reset speed
        ResetSpeed("Reset speed", bt_instance),
        # set speed to zero 
        SetSpeed("Set speed to zero", bt_instance, 0.0, SpeedLimit.MPH, 15, num_points=5, start_ahead_distance=15), # params
        # check that we stop
        StoppedCondition("is_stopped", bt_instance),
        # creep
        timers.Timer("time_to_wait", 2.0),
        Creep("creep", bt_instance, 5, 3), # params  
        # reset speed
        ResetSpeed("Reset speed", bt_instance),
        # proceed
        ProceedThroughLanelet("proceed_through_off_light", bt_instance, bt_instance.detection.corresponding_lane)
    ])
    return off_sequence


class NotTurningCondition(Behaviour):
    def __init__(self, name, bt_instance, target_direction):
        super(NotTurningCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.target_direction = target_direction

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        for point in self.bt_instance.path.points:
            match point.direction.type:
                case Direction.DEFAULT:
                    continue
                case self.target_direction:
                    return Status.FAILURE
                case _:
                    return Status.SUCCESS
        if self.target_direction == Direction.LEFT_TURN:  # Perform unprotected left when unsure
            return Status.FAILURE
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class CreepRightOnRed(Creep):
    def __init__(self, name, bt_instance, num_points, num_points_grace):
        super(CreepRightOnRed, self).__init__(name, bt_instance, num_points, num_points_grace)
        self.is_red = LightCondition('light_changed_color', bt_instance, [TrafficLight.RED])
        self.bt_instance.yield_status = True
        self.creep_end_index = -1
        self.num_points = num_points

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        if self.is_red.update() == Status.FAILURE:  # if the light is not red
            return Status.SUCCESS

        # Determines the point to creep until
        if self.creep_end_index == -1:
            self.original_points = self.bt_instance.path.points
            for i in range(len(self.original_points)):
                if self.original_points[i].lanelet_id in self.bt_instance.detection.corresponding_lane or self.original_points[i].lanelet_id in self.bt_instance.cached_lanelets:
                    self.creep_end_index = i + self.num_points
                    break
        if self.creep_end_index == -1:
            return Status.FAILURE
        self.updated_points = self.bt_instance.path.points
        creep_diag = KeyValue()
        creep_diag.key = "Creep End Index"
        creep_diag.value = f"{self.creep_end_index}"
        self.bt_instance.custom_diag['creep_end_index'] = creep_diag
        points_until_diag = KeyValue()
        points_until_diag.key = "Points Until End"

        # Return running while we have not reached the end of the creep zone
        for i in range(len(self.updated_points)):
            if self.updated_points[i].east == self.original_points[self.creep_end_index].east and self.updated_points[i].north == self.original_points[self.creep_end_index].north:
                points_until_diag.value = f"{i}"
                self.bt_instance.custom_diag['points_until'] = points_until_diag
                # Often car doesn't stop right at the end of the creep zone so give a little grace zone where we consider ourselves "at the end"
                if i < self.num_points_grace:
                    self.bt_instance.custom_diag.pop('points_until', None)
                    self.bt_instance.custom_diag.pop('creep_end_index', None)
                    return Status.SUCCESS
                else:
                    return Status.RUNNING
        return Status.SUCCESS


class HasAdvancedCondition(Behaviour):
    def __init__(self, name, has_advanced):
        super(HasAdvancedCondition, self).__init__(name)
        self.has_advanced = has_advanced

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the car has an advanced green
        if self.has_advanced:
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class FourWayFlashingRedCondition(Behaviour):
    def __init__(self, name, bt_instance):
        super(FourWayFlashingRedCondition, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self): # note that I just realized light condition already checks colour and if flashing so I am dumb but I'm keeping the check 
        self.logger.debug(f"Action::update {self.name}")
        # get the colour of the main bulb
        detection = self.bt_instance.detection.main_bulb
        # check if its flashing 
        flashing = self.bt_instance.detection.flashing
        # see how many traffic lights their are 
        count = len(self.bt_instance.detection.associated_light)
        
        # check if the main bulb is red and flashing and how many are in the set
        if count > 0 and flashing and detection == TrafficLight.RED : 
            return Status.SUCCESS
        return Status.FAILURE


def get_solid_red_tree(bt_instance):
    solid_red_sequence = Sequence(name="solid_red_sequence", memory=True)

    def get_right_on_red_tree():
        right_on_red_selector = Selector(name="right_on_red_selector", memory=True)

        creeping_right_sequence = Sequence(
            name="creeping_right_sequence", memory=True)
        creeping_right_sequence.add_children([
            WithinProximityCondition("is_within_proximity", bt_instance, bt_instance.detection.corresponding_lane, 30),
            StoppedCondition("is_stopped", bt_instance),
            timers.Timer("time_to_wait", 2.0),
            SetSpeed("set_speed", bt_instance, 3.0, SpeedLimit.MPS, 15, 20),
            CreepRightOnRed("creep", bt_instance, 20, 3),
            ResetSpeed("reset_speed", bt_instance),
            ProceedThroughLanelet("turn_through_red_light", bt_instance, bt_instance.detection.corresponding_lane),
            ResetYieldStatus("reset_yield_status", bt_instance)
        ])

        right_on_red_selector.add_children([
            NotTurningCondition("not_turning_right_condition", bt_instance, Direction.RIGHT_TURN),
            creeping_right_sequence
        ])
        return right_on_red_selector

    solid_red_sequence.add_children([
        LightCondition("light_is_solid_red", bt_instance, target_light_conditions=[
            TrafficLight.RED
        ]),
        SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 15, start_ahead_distance=3),
        get_right_on_red_tree(),
        Placeholder('prevent_red_removal', Status.FAILURE)
    ])
    return solid_red_sequence


def get_solid_yellow_tree(bt_instance):
    solid_yellow_sequence = Sequence(name="solid_yellow_sequence", memory=True)

    def get_solid_yellow_tree():
        solid_yellow_selector = Selector(name="solid_yellow_selector", memory=True)

        solid_yellow_stopping_sequence = Sequence(name="solid_yellow_stopping_sequence", memory=True)
        solid_yellow_stopping_sequence.add_children([
            ShouldStopCondition("should_stop", bt_instance, 5, 15),
            SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 15, start_ahead_distance=3)
        ])

        solid_yellow_proceeding_sequence = Sequence(name="solid_yellow_proceeding_sequence", memory=True)
        solid_yellow_proceeding_sequence.add_children([
            ResetSpeed("reset_speed", bt_instance),
            ProceedThroughLanelet("proceed_through_yellow", bt_instance, bt_instance.detection.corresponding_lane)
        ])

        solid_yellow_selector.add_children([
            solid_yellow_stopping_sequence,
            solid_yellow_proceeding_sequence
        ])
        return solid_yellow_selector

    solid_yellow_sequence.add_children([
        LightCondition("light_is_solid_yellow", bt_instance, target_light_conditions=[
            TrafficLight.YELLOW
        ]),
        get_solid_yellow_tree(),
        Placeholder('prevent_yellow_removal', Status.FAILURE)
    ])
    return solid_yellow_sequence


def get_solid_green_tree(bt_instance):
    solid_green_sequence = Sequence(name="solid_green_sequence", memory=True)

    def get_advanced_green_tree():
        advanced_green_selector = Selector("advanced_green_selector", memory=True)

        creeping_left_sequence = Sequence(name="creeping_left_sequence", memory=True)
        creeping_left_sequence.add_children([
            SetSpeed("set_speed", bt_instance, 3.0, SpeedLimit.MPS, 25, start_ahead_distance=3),
            Creep("creep", bt_instance, 20, 3),
            ResetSpeed("reset_speed", bt_instance),
            ProceedThroughLanelet("proceed_through_advanced_left", bt_instance, bt_instance.detection.corresponding_lane),
            ResetYieldStatus("reset_yield_status", bt_instance)
        ])

        advanced_green_selector.add_children([
            NotTurningCondition("not_turning_left_condition", bt_instance, Direction.LEFT_TURN),
            HasAdvancedCondition("has_advanced_condition", False),
            creeping_left_sequence
        ])
        return advanced_green_selector

    solid_green_sequence.add_children([
        LightCondition("light_is_green", bt_instance, target_light_conditions=[
            TrafficLight.GREEN
        ]),
        get_advanced_green_tree(),
        ResetSpeed("reset_speed", bt_instance)
    ])
    return solid_green_sequence


def get_flashing_red_tree(bt_instance):
    flashing_red_sequence = Sequence(name="flashing_red_sequence", memory=True)

    creep_selector = Selector(name="creep_selector", memory=True)
    creep_selector.add_children([
        FourWayFlashingRedCondition("four_way_flashing_red_condition", bt_instance),
        Creep("creep", bt_instance, 20, 3),
        ResetYieldStatus("reset_yield_status", bt_instance)
    ])

    flashing_red_sequence.add_children([
        LightCondition("light_is_flashing_red", bt_instance, target_light_conditions=[
            TrafficLight.RED,
            TrafficLight.flashing
        ]),
        SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 15, start_ahead_distance=3),
        WithinProximityCondition("is_within_proximity", bt_instance, bt_instance.detection.corresponding_lane, 15),
        StoppedCondition("is_stopped", bt_instance),
        timers.Timer("time_to_wait", 2.0),
        SetSpeed("set_speed", bt_instance, 3.0, SpeedLimit.MPS, 15, 25, start_ahead_distance=3),
        creep_selector,
        ResetSpeed("reset_speed", bt_instance),
        ProceedThroughLanelet("proceed_through_flashing_red", bt_instance, bt_instance.detection.corresponding_lane)
    ])
    return flashing_red_sequence


def get_flashing_yellow_tree(bt_instance):
    flashing_yellow_sequence = Sequence(name="flashing_yellow_sequence", memory=True)
    flashing_yellow_sequence.add_children([
        LightCondition("light_is_flashing_yellow", bt_instance, target_light_conditions=[
            TrafficLight.YELLOW,
            TrafficLight.flashing
        ]),
        SetSpeed("set_speed", bt_instance, 3.0, SpeedLimit.MPS, 15, 25, start_ahead_distance=3),
        Creep("creep", bt_instance, 20, 3),
        ResetSpeed("reset_speed", bt_instance),
        ProceedThroughLanelet("proceed_through_yield", bt_instance, bt_instance.detection.corresponding_lane),
        ResetYieldStatus("reset_yield_status", bt_instance)
    ])
    return flashing_yellow_sequence


def get_traffic_light_tree(bt_instance):
    light_selector = Selector(name="light_selector", memory=True)
    light_selector.add_children([
        get_off_tree(bt_instance),
        get_solid_red_tree(bt_instance),
        get_solid_yellow_tree(bt_instance),
        get_solid_green_tree(bt_instance),
        get_flashing_red_tree(bt_instance),
        get_flashing_yellow_tree(bt_instance)
    ])
    return light_selector
