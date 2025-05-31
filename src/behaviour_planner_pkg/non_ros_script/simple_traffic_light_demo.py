import functools
from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence, Selector, Parallel
from py_trees import display, common, idioms, timers
from py_trees.trees import BehaviourTree, visitors
from enum import IntEnum

#from autodrive_msgs.msg import Trajectory, Detection

class TrafficLightState(IntEnum):
    OFF = 0
    RED = 1
    YELLOW = 2
    GREEN = 3
    RED_BLINK = 4
    YELLOW_BLINK = 5
    GREEN_BLINK = 6
    LEFT_ADVANCE = True

class TrafficSignState(IntEnum):
    STOP = 0
    YIELD = 1
    DO_NOT_ENTER = 2
    NO_LEFT = 3
    NO_STRAIGHT = 4
    NO_U_TURN = 5
    NO_RIGHT_ON_RED = 6
    RAILWAY_CROSSING = 7
    ONE_WAY = 8
    ROAD_CLOSED = 9
    NO_RIGHT = 10

class DynamicObstacleState(IntEnum):
    VEHICLE = 0
    BIKES = 1
    PEDESTRIAN = 2
    DEER = 3
    MISC = 4

class StaticObstacleState(IntEnum):
    TRAFFIC_CONE = 0
    BARRIER = 1
    BIKE_LANE_PROTECTOR = 2
    SPEED_BUMP = 3
    MISC = 4

class SpeedLimitState(IntEnum):
    MPS = 0
    KPH = 1
    MPH = 2

class SetMaxSpeed(Behaviour):
    def __init__(self, name:str, target_velocity, target_velocity_units=SpeedLimitState.MPS):
        super(SetMaxSpeed, self).__init__(name)
        self.target_velocity = target_velocity
        self.target_velocity_units = target_velocity_units

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

        # conversion to MPH
        if self.target_velocity_units == SpeedLimitState.MPH:
            self.target_velocity *= 0.44704
        elif self.target_velocity_units == SpeedLimitState.KPH:
            self.target_velocity *= 0.277778
        SimulatedInputs.current_velocity = self.target_velocity

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")

class Action(Behaviour):
    def __init__(self, name):
        super(Action, self).__init__(name)

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")

class StoppedCondition(Behaviour):
    def __init__(self, name:str, current_velocity):
        super(StoppedCondition, self).__init__(name)
        self.current_velocity = current_velocity

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the car is stopped
        if self.current_velocity <= 0.1:
                return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")

class LightCondition(Behaviour):
    def __init__(self, name:str, target_light_conditions, detection_input):
        super(LightCondition, self).__init__(name)
        self.target_light_conditions = target_light_conditions
        self.detection_input = detection_input

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the detection input is in our list of valid conditions
        for light in self.detection_input:
            if light in self.target_light_conditions:
                return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")

class SignCondition(Behaviour):
    def __init__(self, name:str, target_sign_conditions, detection_input):
        super(SignCondition, self).__init__(name)
        self.target_sign_conditions = target_sign_conditions
        self.detection_input = detection_input

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the detection input is in our list of valid conditions
        for sign in self.detection_input:
            if sign in self.target_sign_conditions:
                return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")

class StaticObstacleCondition(Behaviour):
    def __init__(self, name:str, target_static_obstacle_conditions, detection_input):
        super(StaticObstacleCondition, self).__init__(name)
        self.target_static_obstacle_conditions = target_static_obstacle_conditions
        self.detection_input = detection_input

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the detection input is in our list of valid conditions
        for static_obstacle in self.detection_input:
            if static_obstacle in self.target_static_obstacle_conditions:
                return Status.SUCCESS
        return Status.FAILURE

class DynamicObstacleCondition(Behaviour):
    def __init__(self, name:str, target_dynamic_obstacle_conditions, detection_input):
        super(DynamicObstacleCondition, self).__init__(name)
        self.target_dynamic_obstacle_conditions = target_dynamic_obstacle_conditions
        self.detection_input = detection_input

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        # Check if the detection input is in our list of valid conditions
        for dynamic_obstacle in self.detection_input:
            if dynamic_obstacle in self.target_dynamic_obstacle_conditions:
                return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")

class SimulatedInputs():
    # Simulated inputs to test the code
    traffic_lights = []
    traffic_signs = [TrafficSignState.STOP]
    dynamic_obstacles = []
    static_obstacles = []
    current_velocity = 0
    max_speed = 10 # speed limit based on sign
    max_speed_unit = SpeedLimitState.MPS
    MAX_TRACK_SPEED = 10 # speed limit based on how fast we are willing to let the car go


def make_bt(path:Trajectory, detection:Detection):
    # Selector for root
    root = Selector(name="detections", memory=True)

    # Selector for light condition
    light_selector = Selector(name="light_selector", memory=True)

    # Selector for sign condition
    sign_selector = Selector(name="sign_selector", memory=True)

    # Selector for dynamic obstacle condition
    dynamic_obstacle_selector = Selector(name="dynamic_obstacle_selector", memory=True)

    # Selector for static obstacle condition
    static_obstacle_selector = Selector(name="static_obstacle_selector", memory=True)

    # Conditions for traffic lights
    light_is_off = LightCondition("light_is_off", target_light_conditions=[TrafficLightState.OFF], detection_input=SimulatedInputs.traffic_lights)
    light_is_solid_red = LightCondition("light_is_solid_red", target_light_conditions=[TrafficLightState.RED], detection_input=SimulatedInputs.traffic_lights)
    light_is_solid_yellow = LightCondition("light_is_solid_yellow", target_light_conditions=[TrafficLightState.YELLOW], detection_input=SimulatedInputs.traffic_lights)
    light_is_green = LightCondition("light_is_green", target_light_conditions=[TrafficLightState.GREEN, TrafficLightState.GREEN_BLINK], detection_input=SimulatedInputs.traffic_lights)
    light_is_flashing_red = LightCondition("light_is_flashing_red", target_light_conditions=[TrafficLightState.RED_BLINK], detection_input=SimulatedInputs.traffic_lights)
    light_is_flashing_yellow = LightCondition("light_is_flashing_yellow", target_light_conditions=[TrafficLightState.YELLOW_BLINK], detection_input=SimulatedInputs.traffic_lights)

    # Conditions for traffic signs
    sign_is_stop = SignCondition("sign_is_stop", target_sign_conditions=[TrafficSignState.STOP], detection_input=SimulatedInputs.traffic_signs)
    # We need to add a custom sequence of behaviors here for stop signs.
    # We need to implement timer nodes anyway for other behaviors, I'm thinking this is how we do this.
    sign_is_yield = SignCondition("sign_is_yield", target_sign_conditions=[TrafficSignState.YIELD], detection_input=SimulatedInputs.traffic_signs)
    sign_is_do_not_enter = SignCondition("sign_is_do_not_enter", target_sign_conditions=[TrafficSignState.DO_NOT_ENTER], detection_input=SimulatedInputs.traffic_signs)
    sign_is_no_left = SignCondition("sign_is_no_left", target_sign_conditions=[TrafficSignState.NO_LEFT], detection_input=SimulatedInputs.traffic_signs)
    sign_is_no_straight = SignCondition("sign_is_no_straight", target_sign_conditions=[TrafficSignState.NO_STRAIGHT], detection_input=SimulatedInputs.traffic_signs)
    sign_is_no_u_turn = SignCondition("sign_is_no_u_turn", target_sign_conditions=[TrafficSignState.NO_U_TURN], detection_input=SimulatedInputs.traffic_signs)
    sign_is_no_right_on_red = SignCondition("sign_is_no_right_on_red", target_sign_conditions=[TrafficSignState.NO_RIGHT_ON_RED], detection_input=SimulatedInputs.traffic_signs)
    sign_is_railway_crossing = SignCondition("sign_is_railway_crossing", target_sign_conditions=[TrafficSignState.RAILWAY_CROSSING], detection_input=SimulatedInputs.traffic_signs)
    sign_is_one_way = SignCondition("sign_is_one_way", target_sign_conditions=[TrafficSignState.ONE_WAY], detection_input=SimulatedInputs.traffic_signs)
    sign_is_road_closed = SignCondition("sign_is_road_closed", target_sign_conditions=[TrafficSignState.ROAD_CLOSED], detection_input=SimulatedInputs.traffic_signs)
    sign_is_no_right = SignCondition("sign_is_no_right", target_sign_conditions=[TrafficSignState.NO_RIGHT], detection_input=SimulatedInputs.traffic_signs)

    # Conditions for dynamic obstacles
    dynamic_obstacle_is_vehicle = DynamicObstacleCondition("dynamic_obstacle_is_vehicle", target_dynamic_obstacle_conditions=[DynamicObstacleState.VEHICLE], detection_input=SimulatedInputs.dynamic_obstacles)
    dynamic_obstacle_is_bike = DynamicObstacleCondition("dynamic_obstacle_is_bike", target_dynamic_obstacle_conditions=[DynamicObstacleState.BIKES], detection_input=SimulatedInputs.dynamic_obstacles)
    dynamic_obstacle_is_pedestrian = DynamicObstacleCondition("dynamic_obstacle_is_pedestrian", target_dynamic_obstacle_conditions=[DynamicObstacleState.PEDESTRIAN], detection_input=SimulatedInputs.dynamic_obstacles)
    dynamic_obstacle_is_deer = DynamicObstacleCondition("dynamic_obstacle_is_deer", target_dynamic_obstacle_conditions=[DynamicObstacleState.DEER], detection_input=SimulatedInputs.dynamic_obstacles)
    dynamic_obstacle_is_misc = DynamicObstacleCondition("dynamic_obstacle_is_misc", target_dynamic_obstacle_conditions=[DynamicObstacleState.MISC], detection_input=SimulatedInputs.dynamic_obstacles)

    # Conditions for static obstacles
    static_obstacle_is_traffic_cone = StaticObstacleCondition("static_obstacle_is_traffic_cone", target_static_obstacle_conditions=[StaticObstacleState.TRAFFIC_CONE], detection_input=SimulatedInputs.static_obstacles)
    static_obstacle_is_barrier = StaticObstacleCondition("static_obstacle_is_barrier", target_static_obstacle_conditions=[StaticObstacleState.BARRIER], detection_input=SimulatedInputs.static_obstacles)
    static_obstacle_is_bike_lane_protector = StaticObstacleCondition("static_obstacle_is_bike_lane_protector", target_static_obstacle_conditions=[StaticObstacleState.BIKE_LANE_PROTECTOR], detection_input=SimulatedInputs.static_obstacles)
    static_obstacle_is_speed_bump = StaticObstacleCondition("static_obstacle_is_speed_bump", target_static_obstacle_conditions=[StaticObstacleState.SPEED_BUMP], detection_input=SimulatedInputs.static_obstacles)
    static_obstacle_is_misc = StaticObstacleCondition("static_obstacle_is_misc", target_static_obstacle_conditions=[StaticObstacleState.MISC], detection_input=SimulatedInputs.static_obstacles)

    # Traffic light sequences
    off_sequence = Sequence(name="off_sequence", memory=True)
    off_sequence.add_children([light_is_off, Action("four_way_stop")])

    solid_red_sequence = Sequence(name="solid_red_sequence", memory=True)
    solid_red_sequence.add_children([light_is_solid_red, SetMaxSpeed("set_max_speed", target_velocity=0)])

    solid_yellow_sequence = Sequence(name="solid_yellow_sequence", memory=True)
    solid_yellow_sequence.add_children([light_is_solid_yellow, Action("stop_if_necessary")])

    solid_green_sequence = Sequence(name="solid_green_sequence", memory=True)
    solid_green_sequence.add_children([light_is_green, SetMaxSpeed("set_max_speed", target_velocity=SimulatedInputs.MAX_TRACK_SPEED)])

    flashing_red_sequence = Sequence(name="flashing_red_sequence", memory=True)
    flashing_red_sequence.add_children([light_is_flashing_red, SetMaxSpeed("set_max_speed", target_velocity=0), StoppedCondition("is_stopped", SimulatedInputs.current_velocity), timers.Timer("time_to_wait", 1.0), SetMaxSpeed("set_max_speed", target_velocity=SimulatedInputs.MAX_TRACK_SPEED)])
    
    flashing_yellow_sequence = Sequence(name="flashing_yellow_sequence", memory=True)
    flashing_yellow_sequence.add_children([light_is_flashing_yellow, Action("caution")])

    # Traffic sign sequences
    stop_sequence = Sequence(name="stop_sequence", memory=True)
    stop_sequence.add_children([sign_is_stop, SetMaxSpeed("set_max_speed", target_velocity=0), StoppedCondition("is_stopped", SimulatedInputs.current_velocity), timers.Timer("time_to_wait", 1.0), SetMaxSpeed("set_max_speed", target_velocity=SimulatedInputs.MAX_TRACK_SPEED)])

    yield_sequence = Sequence(name="yield_sequence", memory=True)
    yield_sequence.add_children([sign_is_yield, Action("caution")])

    do_not_enter_sequence = Sequence(name="do_not_enter_sequence", memory=True)
    do_not_enter_sequence.add_children([sign_is_do_not_enter, Action("reroute")])

    no_left_sequence = Sequence(name="no_left_sequence", memory=True)
    no_left_sequence.add_children([sign_is_no_left, Action("reroute")])

    no_straight_sequence = Sequence(name="no_straight_sequence", memory=True)
    no_straight_sequence.add_children([sign_is_no_straight, Action("reroute")])

    no_u_turn_sequence = Sequence(name="no_u_turn_sequence", memory=True)
    no_u_turn_sequence.add_children([sign_is_no_u_turn, Action("reroute")])

    no_right_on_red_sequence = Sequence(name="no_right_on_red_sequence", memory=True)
    no_right_on_red_sequence.add_children([sign_is_no_right_on_red, Action("reroute")])

    railway_crossing_sequence = Sequence(name="railway_crossing_sequence", memory=True)
    railway_crossing_sequence.add_children([sign_is_railway_crossing, Action("caution")])

    one_way_sequence = Sequence(name="one_way_sequence", memory=True)
    one_way_sequence.add_children([sign_is_one_way, Action("reroute")])

    road_closed_sequence = Sequence(name="road_closed_sequence", memory=True)
    road_closed_sequence.add_children([sign_is_road_closed, Action("reroute")])

    no_right_sequence = Sequence(name="no_right_sequence", memory=True)
    no_right_sequence.add_children([sign_is_no_right, SetMaxSpeed("set_max_speed", target_velocity=0)])

    # Dynamic obstacle sequences
    dynamic_obstacle_vehicle_sequence = Sequence(name="dynamic_obstacle_vehicle_sequence", memory=True)
    dynamic_obstacle_vehicle_sequence.add_children([dynamic_obstacle_is_vehicle, SetMaxSpeed("set_max_speed", target_velocity=0)])

    dynamic_obstacle_bike_sequence = Sequence(name="dynamic_obstacle_bike_sequence", memory=True)
    dynamic_obstacle_bike_sequence.add_children([dynamic_obstacle_is_bike, SetMaxSpeed("set_max_speed", target_velocity=0)])

    dynamic_obstacle_pedestrian_sequence = Sequence(name="dynamic_obstacle_pedestrian_sequence", memory=True)
    dynamic_obstacle_pedestrian_sequence.add_children([dynamic_obstacle_is_pedestrian, SetMaxSpeed("set_max_speed", target_velocity=0)])

    dynamic_obstacle_deer_sequence = Sequence(name="dynamic_obstacle_deer_sequence", memory=True)
    dynamic_obstacle_deer_sequence.add_children([dynamic_obstacle_is_deer, SetMaxSpeed("set_max_speed", target_velocity=0)])

    dynamic_obstacle_misc_sequence = Sequence(name="dynamic_obstacle_misc_sequence", memory=True)
    dynamic_obstacle_misc_sequence.add_children([dynamic_obstacle_is_misc, SetMaxSpeed("set_max_speed", target_velocity=0)])

    # Static obstacle sequences
    static_obstacle_traffic_cone_sequence = Sequence(name="static_obstacle_traffic_cone_sequence", memory=True)
    static_obstacle_traffic_cone_sequence.add_children([static_obstacle_is_traffic_cone, SetMaxSpeed("set_max_speed", target_velocity=0)])
    
    static_obstacle_barrier_sequence = Sequence(name="static_obstacle_barrier_sequence", memory=True)
    static_obstacle_barrier_sequence.add_children([static_obstacle_is_barrier, SetMaxSpeed("set_max_speed", target_velocity=0)])
    
    static_obstacle_bike_lane_protector_sequence = Sequence(name="static_obstacle_bike_lane_protector_sequence", memory=True)
    static_obstacle_bike_lane_protector_sequence.add_children([static_obstacle_is_bike_lane_protector, SetMaxSpeed("set_max_speed", target_velocity=0)])
    
    static_obstacle_speed_bump_sequence = Sequence(name="static_obstacle_speed_bump_sequence", memory=True)
    static_obstacle_speed_bump_sequence.add_children([static_obstacle_is_speed_bump, SetMaxSpeed("set_max_speed", target_velocity=0)])
    
    static_obstacle_misc_sequence = Sequence(name="static_obstacle_misc_sequence", memory=True)
    static_obstacle_misc_sequence.add_children([static_obstacle_is_misc, SetMaxSpeed("set_max_speed", target_velocity=0)])

    # Add sequences to selectors
    light_selector.add_children([off_sequence, solid_red_sequence, solid_yellow_sequence, solid_green_sequence, flashing_red_sequence, flashing_yellow_sequence])
    light_selector = idioms.oneshot(light_selector, "light_selector", "light_selector", common.OneShotPolicy.ON_COMPLETION) # this requires everything below it in the tree to return either SUCCESS or FAILURE before the selector returns anything itself
    sign_selector.add_children([SetMaxSpeed("set_max_speed", target_velocity=SimulatedInputs.max_speed, target_velocity_units = SimulatedInputs.max_speed_unit), stop_sequence, yield_sequence, do_not_enter_sequence, no_left_sequence, no_straight_sequence, no_u_turn_sequence, no_right_on_red_sequence, railway_crossing_sequence, one_way_sequence, road_closed_sequence, no_right_sequence])
    sign_selector = idioms.oneshot(sign_selector, "sign_selector", "sign_selector", common.OneShotPolicy.ON_COMPLETION) # this requires everything below it in the tree to return either SUCCESS or FAILURE before the selector returns anything itself
    dynamic_obstacle_selector.add_children([dynamic_obstacle_vehicle_sequence, dynamic_obstacle_bike_sequence, dynamic_obstacle_pedestrian_sequence, dynamic_obstacle_deer_sequence, dynamic_obstacle_misc_sequence])
    dynamic_obstacle_selector = idioms.oneshot(dynamic_obstacle_selector, "dynamic_obstacle_selector", "dynamic_obstacle_selector", common.OneShotPolicy.ON_COMPLETION) # this requires everything below it in the tree to return either SUCCESS or FAILURE before the selector returns anything itself
    static_obstacle_selector.add_children([static_obstacle_traffic_cone_sequence, static_obstacle_barrier_sequence, static_obstacle_bike_lane_protector_sequence, static_obstacle_speed_bump_sequence, static_obstacle_misc_sequence])
    static_obstacle_selector = idioms.oneshot(static_obstacle_selector, "static_obstacle_selector", "static_obstacle_selector", common.OneShotPolicy.ON_COMPLETION) # this requires everything below it in the tree to return either SUCCESS or FAILURE before the selector returns anything itself

    # Add children to the root selector
    root.add_children([light_selector, sign_selector, dynamic_obstacle_selector, static_obstacle_selector])
    root = idioms.oneshot(root, "root", "root", common.OneShotPolicy.ON_COMPLETION) # this requires everything below it in the tree to return either SUCCESS or FAILURE before the selector returns anything itself
    return root

def post_tick_handler(snapshot_visitor, behaviour_tree): # prints the parts of the behaviour tree that were visited
    '''with open("output.html", mode="w") as f:
        f.write(display.xhtml_tree(
            behaviour_tree.root,
            visited=snapshot_visitor.visited,
            previously_visited=snapshot_visitor.visited
        ))'''
    #display.render_dot_tree(behaviour_tree.root, 0, False, None, None, False, False)
    print(
        display.unicode_tree(
            behaviour_tree.root,
            visited=snapshot_visitor.visited,
            previously_visited=snapshot_visitor.visited
        )
    )

def main(path:Trajectory, detection:Detection):
    #log_tree.level = log_tree.Level.DEBUG # for debugging
    tree = BehaviourTree(make_bt(path:Trajectory, detection:Detection))
    tree.visitors.append(visitors.DebugVisitor()) # logs feedback messages and the behaviour's status
    snapshot_visitor = visitors.SnapshotVisitor() # gets a snapshot of the current tree
    tree.add_post_tick_handler( # runs immediately after ticking
        functools.partial(post_tick_handler, snapshot_visitor) # leaves snapshot_visitor fixed so that post_tick_handler receives the necessary arguments
    )
    tree.visitors.append(snapshot_visitor) # appends the node to a list of visited ones
    # tree.tick_tock(500)
    tree.tick()
