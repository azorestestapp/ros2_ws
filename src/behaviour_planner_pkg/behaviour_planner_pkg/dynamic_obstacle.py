from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence, Selector
from autodrive_msgs.msg import DynamicObstacle, SpeedLimit
from behaviour_planner_pkg.utilities import (
    Placeholder,
    SetSpeed,
    ResetSpeed,
    ShouldStopCondition)
import math
import time
import rclpy
from diagnostic_msgs.msg import KeyValue
from shapely.geometry import LineString, Point, MultiPoint
from shapely.ops import nearest_points

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

class DynamicObstacleFlag(Behaviour):
    def __init__(self,  name: str, bt_instance, flag_name: str, value = False):
        super(DynamicObstacleFlag, self).__init__(name)
        self.bt_instance = bt_instance
        self.flag_name = flag_name
        self.value = value

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")
    
    def update(self):
        setattr(self.bt_instance, self.flag_name, self.value)
        self.logger.debug(f"{self.name}: Set {self.flag_name} = {self.value}")
        return Status.SUCCESS


class SetCarFollowingSpeed(Behaviour):
    def __init__(self, name: str, bt_instance):
        super(SetCarFollowingSpeed, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def calculate_max_speed(self, lead_speed, relative_position):
        if relative_position - FOLLOWER_MIN_GAP >= 0:
            return (lead_speed + math.sqrt(2 * FOLLOWER_MAX_ACCEL * (relative_position - FOLLOWER_MIN_GAP)))
        else:
            return (lead_speed - math.sqrt(2 * FOLLOWER_MAX_ACCEL * (FOLLOWER_MIN_GAP - relative_position)))

    def update(self):
        start_time = time.time()
        self.points = self.bt_instance.path.points
        lead_index = -1
        lead_speed = math.sqrt(self.bt_instance.detection.detection.velocity.x ** 2 + self.bt_instance.detection.detection.velocity.y ** 2)
        relative_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x - self.bt_instance.x
        relative_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y - self.bt_instance.y
        follower_pos_offset_back = self.bt_instance.detection.detection.bounding_box.size.x / 2
        follower_pos_offset_front = VEHICLE_SIZE_X / 2
        follower_pos_offset = follower_pos_offset_back + follower_pos_offset_front

        relative_position = math.sqrt(relative_position_x ** 2 + relative_position_y ** 2) - follower_pos_offset
        last_computed_speed = 0

        # Find point on path where target vehicle is
        min_distance = float('inf')
        # num_points = 50
        for i in range(len(self.points)):
            point = self.points[i]
            distance_to_path = math.sqrt((self.bt_instance.detection.detection.bounding_box.center.position.x - point.east) ** 2 + (self.bt_instance.detection.detection.bounding_box.center.position.y - point.north) ** 2)
            if distance_to_path < min_distance:
                lead_index = i
                min_distance = distance_to_path

        if lead_index == -1 or min_distance > 1 or relative_position <= 0:
            rclpy.logging.get_logger("behaviour_planner").info(f"[Car not on path] Detection id: {self.bt_instance.detection.detection.id} | couldn't find car on our path")
            return Status.SUCCESS

        end_time = time.time()
        elapsed_time = (end_time - start_time) * 1000
        rclpy.logging.get_logger("behaviour_planner").info(f"Time 1: {elapsed_time}")
        start_time = end_time

        group_points = 1
        num_points_not_computed = -1
        # Working backwards, set all points to max_speed
        for i in range(lead_index - 1, -1, -1):
            relative_position_x = self.points[lead_index].east - self.points[i].east
            relative_position_y = self.points[lead_index].north - self.points[i].north
            relative_position = math.sqrt(relative_position_x ** 2 + relative_position_y ** 2) - follower_pos_offset

            if last_computed_speed == MAX_TRACK_SPEED or (num_points_not_computed != -1 and num_points_not_computed < group_points - 1):
                max_speed = last_computed_speed
                num_points_not_computed += 1
            else:
                max_speed = min(self.calculate_max_speed(lead_speed, relative_position), MAX_TRACK_SPEED)
                last_computed_speed = max_speed
                num_points_not_computed = 0

            self.points[i].speed = max_speed

        end_time = time.time()
        elapsed_time = (end_time - start_time) * 1000
        rclpy.logging.get_logger("behaviour_planner").info(f"Time 2: {elapsed_time}")
        start_time = end_time

        # Set the speed of the rest of the path in front of the target car 0
        for i in range(lead_index, len(self.points)):
            self.points[i].speed = self.points[lead_index - 1].speed

        rclpy.logging.get_logger("behaviour_planner").info(f"[Car on path] Detection id: {self.bt_instance.detection.detection.id}")
        rclpy.logging.get_logger("behaviour_planner").info(f"Our speed: {self.bt_instance.speed}")

        relative_position_pair = KeyValue()
        relative_position_pair.key = "Relative Position"
        relative_position_pair.value = f"{relative_position}"
        self.bt_instance.custom_diag['relative_position'] = relative_position_pair

        self.bt_instance.points = self.points
        return Status.RUNNING

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


def get_dynamic_obstacle_vehicle_tree(bt_instance):
    dynamic_obstacle_vehicle_sequence = Sequence(name="dynamic_obstacle_vehicle_sequence", memory=False)

    def get_vehicle_tree():
        dynamic_obstacle_vehicle_selector = Selector(name="dynamic_obstacle_vehicle_selector", memory=True)

        dynamic_obstacle_vehicle_stop_sequence = Sequence(name="dynamic_obstacle_vehicle_stop_sequence", memory=False)
        dynamic_obstacle_vehicle_stop_sequence.add_children([
            ResetSpeed("reset_speed", bt_instance),
            ShouldStopCondition("should_stop_condition", bt_instance, 5, 15),
            SetSpeed("set_speed", bt_instance, 0.0, SpeedLimit.MPS, 25, start_ahead_distance=3)
        ])

        dynamic_obstacle_vehicle_selector.add_children([
            dynamic_obstacle_vehicle_stop_sequence,
            SetCarFollowingSpeed("set_car_following_speed", bt_instance)
        ])
        return dynamic_obstacle_vehicle_selector

    dynamic_obstacle_vehicle_sequence.add_children([
        DynamicObstacleCondition("dynamic_obstacle_is_vehicle", bt_instance, target_dynamic_obstacle_conditions=[
            DynamicObstacle.VEHICLE
        ]),
        get_vehicle_tree()
    ])
    return dynamic_obstacle_vehicle_sequence


class DynamicObstacleCondition(Behaviour):
    def __init__(self, name: str, bt_instance, target_dynamic_obstacle_conditions):
        super(DynamicObstacleCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.target_dynamic_obstacle_conditions = target_dynamic_obstacle_conditions

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.detection_input = self.bt_instance.detection.obstacle_type

        # Check if the detection input is in our list of valid conditions
        if self.detection_input in self.target_dynamic_obstacle_conditions:
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class DynamicObstacleIntersectCondition(Behaviour):
    def __init__(self, name: str, bt_instance, look_ahead, timeout):
        super(DynamicObstacleIntersectCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.look_ahead = look_ahead
        self.timeout = timeout
        self.last_intersection = None

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
            return Status.SUCCESS
        elif self.last_intersection is not None and time.time() - self.last_intersection < self.timeout:
            return Status.SUCCESS
        else:
            return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class SetSpeedByPoint(Behaviour):  # for setting the speed at every point
    def __init__(self, name, bt_instance, speed, speed_unit, start_ahead_distance=0):
        super(SetSpeedByPoint, self).__init__(name)
        self.bt_instance = bt_instance
        self.speed = speed
        self.speed_unit = speed_unit
        self.start_ahead_distance = start_ahead_distance

        # conversion to MPS
        if self.speed_unit == SpeedLimit.MPH:
            self.speed *= 0.44704
        elif self.speed_unit == SpeedLimit.KPH:
            self.speed *= 0.277778

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        starting_speed_index = -1
        self.points = self.bt_instance.path.points

        min_distance = float('inf')

        for i in range(len(self.points)):
            point = self.points[i]
            distance_to_path = math.sqrt((self.bt_instance.detection.detection.bounding_box.center.position.x - point.east) ** 2 + (self.bt_instance.detection.detection.bounding_box.center.position.y - point.north) ** 2)
            if distance_to_path < min_distance:
                starting_speed_index = i
                min_distance = distance_to_path

        if starting_speed_index == -1:
            rclpy.logging.get_logger("behaviour_planner").info("Point not found on path.")
            return Status.FAILURE

        rclpy.logging.get_logger("behaviour_planner").info(f"Setting speed from starting_index: {starting_speed_index}")

        # Sets the speed at every point after the starting index
        for i in range(starting_speed_index, len(self.points)):
            # rclpy.logging.get_logger("behaviour_planner").info(f"Setting speed at point: {self.points[i]}")
            self.points[i].speed = self.speed

        # Set speed for points ahead of starting index according to "start ahead distance"
        distance = 0
        i = starting_speed_index
        while distance < self.start_ahead_distance and i != 0:
            i -= 1
            self.points[i].speed = self.speed
            distance += math.sqrt((self.points[i].north - self.points[i + 1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)

        rclpy.logging.get_logger("behaviour_planner").info(f"Distance: {distance}, i: {i}")

        self.bt_instance.points = self.points
        return Status.SUCCESS


def get_dynamic_obstacle_pedestrian_tree(bt_instance):
    dynamic_obstacle_pedestrian_sequence = Sequence(name="dynamic_obstacle_pedestrian_sequence", memory=False)
    dynamic_obstacle_pedestrian_sequence.add_children([
        DynamicObstacleCondition("dynamic_obstacle_is_pedestrian", bt_instance, target_dynamic_obstacle_conditions=[
            DynamicObstacle.PEDESTRIAN
        ]),
        # add flag
        DynamicObstacleFlag("deer_flag_set", bt_instance, flag_name = "deer_detected", value = False),
        ResetSpeed("reset_speed", bt_instance),
        DynamicObstacleIntersectCondition("dynamic_obstacle_intersection_condition", bt_instance, 7, 3.0),
        DynamicObstacleFlag("deer_flag_set", bt_instance, flag_name = "deer_detected", value = True),
        SetSpeedByPoint("set_speed_by_point", bt_instance, 0.0, SpeedLimit.MPS, start_ahead_distance=15),
        Placeholder("Stay running", Status.RUNNING)
    ])
    return dynamic_obstacle_pedestrian_sequence


def get_dynamic_obstacle_deer_tree(bt_instance):
    dynamic_obstacle_deer_sequence = Sequence(name="dynamic_obstacle_deer_sequence", memory=True)
    dynamic_obstacle_deer_sequence.add_children([
        # first we check/confirm it is in fact a deer
        DynamicObstacleCondition("dynamic_obstacle_is_deer", bt_instance, target_dynamic_obstacle_conditions=[
            DynamicObstacle.DEER
        ]),
        DynamicObstacleFlag("deer_flag_set", bt_instance, flag_name = "deer_detected", value = False),
        # second, we must get rid of any cached speed values for each point in our lane line 
        ResetSpeed("reset_speed", bt_instance),
        # third, we must check if the deer will in fact intersect our path so we can decide how to adjust our speed
        DynamicObstacleIntersectCondition("will_the_deer_intersect_us", bt_instance, 7, 3.0), # param
        DynamicObstacleFlag("deer_flag_set", bt_instance, flag_name = "deer_detected", value = True),
        #fourth, we must adjust our speed at each point in our path 
        SetSpeedByPoint("set_speed_by_point", bt_instance, 0.0, SpeedLimit.MPS, start_ahead_distance=15), # param
        Placeholder("Stay running", Status.RUNNING)
    ])
    return dynamic_obstacle_deer_sequence


def get_dynamic_obstacle_misc_tree(bt_instance):
    dynamic_obstacle_misc_sequence = Sequence(name="dynamic_obstacle_misc_sequence", memory=True)
    dynamic_obstacle_misc_sequence.add_children([
        DynamicObstacleCondition("dynamic_obstacle_is_misc", bt_instance, target_dynamic_obstacle_conditions=[
            DynamicObstacle.MISC
        ]),
        DynamicObstacleFlag("misc_flag_set", bt_instance, flag_name = "misc_detected", value = False),
        # reset speed
         ResetSpeed("reset_speed", bt_instance),
        # check intersection 
        DynamicObstacleIntersectCondition("dynamic_obstacle_intersection_condition", bt_instance, 7, 3.0), # param
        DynamicObstacleFlag("misc_flag_set", bt_instance, flag_name = "misc_detected", value = True),
        # adjust speed 
        SetSpeedByPoint("set_speed_by_point", bt_instance, 0.0, SpeedLimit.MPS, start_ahead_distance=15), # param
        Placeholder("Stay running", Status.RUNNING)
    ])
    return dynamic_obstacle_misc_sequence


def get_dynamic_obstacle_tree(bt_instance):
    # Selector for dynamic obstacle condition
    dynamic_obstacle_selector = Selector(name="dynamic_obstacle_selector", memory=True)
    dynamic_obstacle_selector.add_children([
        get_dynamic_obstacle_vehicle_tree(bt_instance),
        get_dynamic_obstacle_pedestrian_tree(bt_instance),
        get_dynamic_obstacle_deer_tree(bt_instance),
        get_dynamic_obstacle_misc_tree(bt_instance)
    ])

    return dynamic_obstacle_selector
