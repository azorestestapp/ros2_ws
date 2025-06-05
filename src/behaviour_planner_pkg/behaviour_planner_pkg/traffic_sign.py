from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence, Selector
from py_trees import timers
from py_trees.decorators import Repeat, Inverter
from autodrive_msgs.msg import TrafficSign, DynamicObstacle, SpeedLimit
from behaviour_planner_pkg.utilities import (
    StoppedCondition,
    Creep,
    WithinProximityCondition,
    ProceedThroughLanelet,
    ResetYieldStatus,
    SetSpeed,
    ResetSpeed,
    Reroute
)
import math

# checks are we approaching a 4 way stop 
class FourWayStopSignCondition(Behaviour):
    def __init__(self, name, bt_instance):
        super(FourWayStopSignCondition, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")

        # check detection type is a stop sign
        self.detection_input = self.bt_instance.detection.sign_type

        # Check all associated signs (i.e. see if they exist)
        count = len(self.bt_instance.detection.associated_sign)

        # check number of signs detected 
        if count > 0 and self.detection_input == TrafficSign.STOP:
            return Status.SUCCESS
        return Status.FAILURE

# # are other cars approaching a 4 way stop - next year 
# class FourWayStopSignStoreCars(Behaviour):
#     def __init__(self, name, bt_instance):
#         super(FourWayStopSignStoreCars, self).__init__(name)
#         self.bt_instance = bt_instance

#     def setup(self):
#         self.logger.debug(f"Action::setup {self.name}")

#     def initialise(self):
#         self.logger.debug(f"Action::initialise {self.name}")

#     def update(self):
#         self.logger.debug(f"Action::update {self.name}")

#         for detection_id, detection in self.bt_instance.global_detection_dict:
#             min_distance = 0
#             # Look through all dynamic obstacles for cars that are stationary
#             if isinstance(detection, DynamicObstacle):
#                 if detection.obstacle_type == DynamicObstacle.VEHICLE:
#                     for id in self.bt_instance.detection.associated_sign:
#                         distance_to_sign = math.sqrt((self.bt_instance.x - self.bt_instance.detection.detection.bounding_box.center.position.x) ** 2 + (self.bt_instance.y - self.bt_instance.detection.detection.bounding_box.center.position.y) ** 2)
#                         min_distance = min(min_distance, distance_to_sign)
#                     velocity = math.sqrt(detection.detection.velocity.x ** 2 + detection.detection.velocity.y ** 2)
#                     if (min_distance < 1.0 and velocity <= 0.1):
#                         self.associated_cars.append(detection_id)

#         # goal: check the distance a vehicle is from a stop sign and its velocity 
#         count 

#         return Status.SUCCESS


# class FourWayProceed(Behaviour):
#     def __init__(self, name, bt_instance):
#         super(FourWayProceed, self).__init__(name)
#         self.bt_instance = bt_instance

#     def setup(self):
#         self.logger.debug(f"Action::setup {self.name}")

#     def initialise(self):
#         self.logger.debug(f"Action::initialise {self.name}")

#     def update(self):
#         self.logger.debug(f"Action::update {self.name}")

#         for detection_id in self.associated_cars:
#             if detection_id in self.bt_instance.global_detection_dict:
#                 return Status.RUNNING
#         return Status.SUCCESS


class four_way_object_intersection(Behaviour);
    def __init__(self, name: str, bt_instance, look_ahead, timeout):
        super(four_way_object_intersection, self).__init__(name)
        self.bt_instance = bt_instance
        self.look_ahead = look_ahead
        self.timeout = timeout
        self.last_intersection = None
        self.dynamic_obstacle_flag_instance = DynamicObstacleFlag("four_way_flag", bt_instance, flag_name = "four_way_detection", value = False)

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

        def update(self):
        self.logger.debug(f"{self.name}::update")
        car_path = self.bt_instance.path.points
        car_path_coordinates = []
        for point in car_path:
            car_path_coordinates.append((point.east, point.north))

        dynamic_obstacle_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x
        dynamic_obstacle_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y
        dynamic_obstacle_velocity_x = self.bt_instance.detection.detection.velocity.x
        dynamic_obstacle_velocity_y = self.bt_instance.detection.detection.velocity.y

        dynamic_obstacle_position_end_x = dynamic_obstacle_position_x + (dynamic_obstacle_velocity_x * self.look_ahead)
        dynamic_obstacle_position_end_y = dynamic_obstacle_position_y + (dynamic_obstacle_velocity_y * self.look_ahead)

        rclpy.logging.get_logger("behaviour_planner").info(f"Ped vel x: {dynamic_obstacle_velocity_x}, ped vel y: {dynamic_obstacle_velocity_y}")

        pedestrian_path = [(dynamic_obstacle_position_x, dynamic_obstacle_position_y), (dynamic_obstacle_position_end_x, dynamic_obstacle_position_end_y)]

        line_car = LineString(car_path_coordinates)
        line_ped = LineString(pedestrian_path)

        rclpy.logging.get_logger("behaviour_planner").info(f"Ped line: {line_ped}")

        intersection = line_car.intersection(line_ped)

        is_intersecting = True
        if intersection.is_empty:
            is_intersecting = False
        elif isinstance(intersection, Point):
            nearest_point = nearest_points(intersection, line_car)[1]
        elif isinstance(intersection, MultiPoint):
            # Choose the closest point to the start of the pedestrian path
            intersection_points = list(intersection.geoms)
            closest_point = min(intersection_points, key=lambda p: p.distance(Point(dynamic_obstacle_position_x, dynamic_obstacle_position_y)))
            nearest_point = nearest_points(closest_point, line_car)[1]
        elif isinstance(intersection, LineString):
            # Take the midpoint of the intersecting line
            nearest_point = intersection.interpolate(0.5, normalized=True)
        else:
            is_intersecting = False  # No valid intersection found

        rclpy.logging.get_logger("behaviour_planner").info(f"Intersection: {intersection}, type: {type(intersection)}")

        if is_intersecting:
            self.last_intersection = time.time()
            self.dynamic_obstacle_flag_instance.value = True
       
        elif self.last_intersection is not None and time.time() - self.last_intersection < self.timeout:
            self.dynamic_obstacle_flag_instance.value = True
  
        else:
            self.dynamic_obstacle_flag_instance.value = False
        
        if self.dynamic_obstacle_flag_instance = True:
            return Status.RUNNING
        elif self.dynamic_obstacle_flag_instance = False:
            return Status.SUCCESS

class four_way_creep(Behaviour):
    def __init__(self, name, bt_instance, num_points, num_points_grace):
        super(Creep, self).__init__(name)
        self.bt_instance = bt_instance
        self.bt_instance.yield_status = True
        self.num_points = num_points
        self.num_points_grace = num_points_grace
        self.creep_end_index = -1
        self.intersection_check = four_way_object_intersection("Check Intersection", bt_instance)

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")
        self.intersection_check.setup()

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")
        self.intersection_check.initialise()

    def update(self):
        self.logger.debug(f"Action::update {self.name}")

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
                    return Status.SUCCESS
                else:
                    status = self.intersection_check.update()
                    return Status.RUNNING
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")
        self.intersection_check.terminate(new_status)

class SignCondition(Behaviour):
    def __init__(self, name: str, bt_instance, target_sign_conditions):
        super(SignCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.target_sign_conditions = target_sign_conditions

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.detection_input = self.bt_instance.detection.sign_type

        # Check if the detection input is in our list of valid conditions
        if self.detection_input in self.target_sign_conditions:
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


def get_stop_sign_tree(bt_instance):
    stop_sequence = Sequence(name="stop_sequence", memory=True)

    stop_selector = Selector(name="stop_selector", memory=True)

    def get_four_way_tree():
        four_way_sequence = Sequence(name="four_way_sequence", memory=True)

        four_way_sequence.add_children([
            # must be a four way stop sign
            FourWayStopSignCondition("four_way_stop_sign_condition", bt_instance),
            # set dynamic obstacle detection flag to false
            DynamicObstacleFlag("four_way_obstacle_detection", bt_instance, flag_name = "dynamic_obstacle_at_four_way", value = False),
            # reset speed 
            ResetSpeed("reset_speed", bt_instance),
            # decelerate to zero 
            SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 15, start_ahead_distance = 15), 
            # wait 2 seconds for extra waiting 
            timers.Timer("time_to_wait", 2.0), # param
            # check for detections
            four_way_object_intersection("intersection_in_four_way", bt_instance, 7, 3.0),
            # if none, creep
            four_way_creep("creep", bt_instance, 20, 3),
            #reset speed
            ResetSpeed("reset_speed", bt_instance),
            # proceed 
            ProceedThroughLanelet("proceed_through_four_way_stop", bt_instance, bt_instance.detection.corresponding_lane)
        ])
        return four_way_sequence

    non_four_way_sequence = Sequence(name="non_four_way_sequence", memory=True)
    non_four_way_sequence.add_children([
        timers.Timer("time_to_wait", 2.0),
        ResetSpeed("reset_speed", bt_instance),
        ProceedThroughLanelet("proceed_through_non_four_way_stop", bt_instance, bt_instance.detection.corresponding_lane)
    ])

    stop_selector.add_children([
        four_way_sequence,
        non_four_way_sequence
    ])

    stop_sequence.add_children([
        SignCondition("sign_is_stop", bt_instance, target_sign_conditions=[
            TrafficSign.STOP
        ]),
        SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 15),
        WithinProximityCondition("is_within_proximity", bt_instance, bt_instance.detection.corresponding_lane),
        StoppedCondition("is_stopped", bt_instance),
        stop_selector
    ])
    return stop_sequence


def get_do_not_enter_tree(bt_instance):
    do_not_enter_sequence = Sequence(name="do_not_enter_sequence", memory=True)
    do_not_enter_sequence.add_children([
        SignCondition("sign_is_do_not_enter", bt_instance, target_sign_conditions=[
            TrafficSign.DO_NOT_ENTER
        ]),
        Reroute("reroute on DO NOT ENTER", bt_instance)
    ])
    return do_not_enter_sequence


def get_no_left_tree(bt_instance):
    no_left_sequence = Sequence(name="no_left_sequence", memory=True)
    no_left_sequence.add_children([
        SignCondition("sign_is_no_left", bt_instance, target_sign_conditions=[
            TrafficSign.NO_LEFT
        ]),
        Reroute("reroute on NO LEFT", bt_instance)
    ])
    return no_left_sequence


def get_no_straight_tree(bt_instance):
    no_straight_sequence = Sequence(name="no_straight_sequence", memory=True)
    no_straight_sequence.add_children([
        SignCondition("sign_is_no_straight", bt_instance, target_sign_conditions=[
            TrafficSign.NO_STRAIGHT
        ]),
        Reroute("reroute on NO STRAIGHT", bt_instance)
    ])
    return no_straight_sequence


def get_no_uturn_tree(bt_instance):
    no_u_turn_sequence = Sequence(
        name="no_u_turn_sequence", memory=True)
    no_u_turn_sequence.add_children([
        SignCondition("sign_is_no_u_turn", bt_instance, target_sign_conditions=[
            TrafficSign.NO_U_TURN
        ]),
        Reroute("reroute on NO UTURN", bt_instance)
    ])
    return no_u_turn_sequence


def get_no_right_on_red_tree(bt_instance):
    no_right_on_red_sequence = Sequence(
        name="no_right_on_red_sequence", memory=True)
    no_right_on_red_sequence.add_children([
        SignCondition("sign_is_no_right_on_red", bt_instance, target_sign_conditions=[
            TrafficSign.NO_RIGHT_ON_RED
        ]),
        Reroute("reroute on NO RIGHT ON RED", bt_instance)
    ])
    return no_right_on_red_sequence


def get_one_way_tree(bt_instance):
    one_way_sequence = Sequence(name="one_way_sequence", memory=True)
    one_way_sequence.add_children([
        SignCondition("sign_is_one_way", bt_instance, target_sign_conditions=[
            TrafficSign.ONE_WAY
        ]),
        Reroute("reroute on ONE WAY", bt_instance)
    ])
    return one_way_sequence


def get_closed_tree(bt_instance):
    road_closed_sequence = Sequence(name="road_closed_sequence", memory=True)
    road_closed_sequence.add_children([
        SignCondition("sign_is_road_closed", bt_instance, target_sign_conditions=[
            TrafficSign.ROAD_CLOSED
        ]),
        Reroute("reroute on CLOSED ROAD", bt_instance)
    ])
    return road_closed_sequence


def get_no_right_tree(bt_instance):
    no_right_sequence = Sequence(name="no_right_sequence", memory=True)
    no_right_sequence.add_children([
        SignCondition("sign_is_no_right", bt_instance, target_sign_conditions=[
            TrafficSign.NO_RIGHT
        ]),
        Reroute("reroute on NO RIGHT", bt_instance)
    ])
    return no_right_sequence


def get_yield_tree(bt_instance):
    yield_sequence = Sequence(name="yield_sequence", memory=True)
    yield_sequence.add_children([
        SignCondition("sign_is_yield", bt_instance, target_sign_conditions=[
            TrafficSign.YIELD
        ]),
        SetSpeed("set_speed", bt_instance, 3.0, SpeedLimit.MPS, 15, 25, start_ahead_distance=3),
        Creep("creep", bt_instance, 20, 3),
        ResetSpeed("reset_speed", bt_instance),
        ProceedThroughLanelet("proceed_through_yield", bt_instance, bt_instance.detection.corresponding_lane),
        ResetYieldStatus("reset_yield_status", bt_instance)
    ])
    return yield_sequence


def get_traffic_sign_tree(bt_instance):
    sign_selector = Selector(name="sign_selector", memory=True)
    sign_selector.add_children([
        get_stop_sign_tree(bt_instance),
        get_do_not_enter_tree(bt_instance),
        get_no_left_tree(bt_instance),
        get_no_straight_tree(bt_instance),
        get_no_uturn_tree(bt_instance),
        get_no_right_on_red_tree(bt_instance),
        get_one_way_tree(bt_instance),
        get_closed_tree(bt_instance),
        get_no_right_tree(bt_instance),
        get_yield_tree(bt_instance)
    ])
    return sign_selector
