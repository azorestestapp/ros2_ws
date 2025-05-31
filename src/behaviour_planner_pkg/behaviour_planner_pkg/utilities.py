from py_trees.behaviour import Behaviour
from py_trees.common import Status
import rclpy
from autodrive_msgs.msg import SpeedLimit
import math
from diagnostic_msgs.msg import KeyValue
import rclpy.logging
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


class Placeholder(Behaviour):  # This class is for actions that have yet to be implemented
    def __init__(self, name: str, value):
        super(Placeholder, self).__init__(name)
        self.value = value

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        return self.value

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class WithinProximityCondition(Behaviour):
    def __init__(self, name: str, bt_instance, corresponding_lanes, proximity_threshhold=13):
        super(WithinProximityCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.corresponding_lanes = corresponding_lanes
        self.proximity_threshhold = proximity_threshhold

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.x, self.y = self.bt_instance.x, self.bt_instance.y
        updated_points = self.bt_instance.path.points
        total_distance = 0

        for i in range(len(updated_points)):
            # Add the distance between two points on the path
            if i >= 1:
                x_distance = updated_points[i].east - updated_points[i - 1].east
                y_distance = updated_points[i].north - updated_points[i - 1].north
            else:
                x_distance = updated_points[i].east - self.x
                y_distance = updated_points[i].north - self.y
            total_distance += math.sqrt(x_distance ** 2 + y_distance ** 2)

            prox_diag = KeyValue()
            prox_diag.key = "Proximity"
            prox_diag.value = f"{total_distance}"
            self.bt_instance.custom_diag['proximity'] = prox_diag

            if updated_points[i].lanelet_id in self.corresponding_lanes:
                if total_distance < self.proximity_threshhold:
                    self.bt_instance.custom_diag.pop('proximity', None)
                    return Status.SUCCESS
                return Status.FAILURE
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class StoppedCondition(Behaviour):
    def __init__(self, name: str, bt_instance):
        super(StoppedCondition, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.speed = self.bt_instance.speed

        # Check if the car is stopped
        if self.speed <= 0.1:
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class SetSpeed(Behaviour):  # for setting the speed at every point
    def __init__(self, name, bt_instance, speed, speed_unit, cache_length, num_points=None, start_ahead_distance=0):
        super(SetSpeed, self).__init__(name)
        self.bt_instance = bt_instance
        self.speed = speed
        self.speed_unit = speed_unit
        self.cache_length = cache_length
        self.num_points = num_points
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
        stopping_index = -1
        accumulated_distance = 0.0

        self.points = self.bt_instance.path.points
        for i in range(len(self.points)):
            if self.points[i].lanelet_id in self.bt_instance.detection.corresponding_lane or self.points[i].lanelet_id in self.bt_instance.cached_lanelets:
                starting_speed_index = i
                break

        # If a distance to start at is set
        if starting_speed_index != -1:
            distance = 0
            while starting_speed_index > 0 and distance < self.start_ahead_distance:
                starting_speed_index -= 1
                distance += math.sqrt((self.points[starting_speed_index].north - self.points[starting_speed_index + 1].north) ** 2 + (self.points[starting_speed_index].east - self.points[starting_speed_index + 1].east) ** 2)

            # Sets the speed at every point up to the specified point
            for i in range(starting_speed_index, len(self.points)):
                if self.num_points is not None and i >= starting_speed_index + self.num_points:
                    self.points[i].speed = 0.0
                else:
                    self.points[i].speed = self.speed
                if len(self.bt_instance.cached_lanelets) <= self.cache_length:
                    if i <= starting_speed_index + self.cache_length:
                        self.bt_instance.cached_lanelets.append(self.points[i].lanelet_id)

            self.bt_instance.points = self.points
        else:
            self.bt_instance.points = None
            return Status.FAILURE
        return Status.SUCCESS


class ResetSpeed(Behaviour):
    def __init__(self, name, bt_instance):
        super(ResetSpeed, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        self.bt_instance.points = None
        self.bt_instance.cached_lanelets = []
        return Status.SUCCESS


class Creep(Behaviour):
    def __init__(self, name, bt_instance, num_points, num_points_grace):
        super(Creep, self).__init__(name)
        self.bt_instance = bt_instance
        self.bt_instance.yield_status = True
        self.num_points = num_points
        self.num_points_grace = num_points_grace
        self.creep_end_index = -1

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

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
                    return Status.RUNNING
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")


class ProceedThroughLanelet(Behaviour):
    def __init__(self, name: str, bt_instance, corresponding_lanes):
        super(ProceedThroughLanelet, self).__init__(name)
        self.bt_instance = bt_instance
        self.corresponding_lanes = corresponding_lanes

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        updated_points = self.bt_instance.path.points
        for i in range(len(updated_points)):
            if updated_points[i].lanelet_id in self.corresponding_lanes or updated_points[i].lanelet_id in self.bt_instance.cached_lanelets:
                return Status.RUNNING
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class ResetYieldStatus(Behaviour):
    def __init__(self, name, bt_instance):
        super(ResetYieldStatus, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")
        # self.bt_instance.yield_status = False
        rclpy.logging.get_logger("behaviour_planner").info("Reset yield")
        return Status.SUCCESS

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")


class ShouldStopCondition(Behaviour):
    def __init__(self, name: str, bt_instance, look_ahead, ignore_distance):
        super(ShouldStopCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.look_ahead = look_ahead
        self.ignore_distance = ignore_distance

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        car_path = self.bt_instance.path.points
        car_path_coordinates = []
        yield_status = self.bt_instance.yield_status

        if not yield_status:
            return Status.FAILURE

        for point in car_path:
            car_path_coordinates.append((point.east, point.north))

        dynamic_obstacle_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x
        dynamic_obstacle_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y
        dynamic_obstacle_velocity_x = self.bt_instance.detection.detection.velocity.x
        dynamic_obstacle_velocity_y = self.bt_instance.detection.detection.velocity.y

        dynamic_obstacle_position_end_x = dynamic_obstacle_position_x + (dynamic_obstacle_velocity_x * self.look_ahead)
        dynamic_obstacle_position_end_y = dynamic_obstacle_position_y + (dynamic_obstacle_velocity_y * self.look_ahead)

        # rclpy.logging.get_logger("behaviour_planner").info(f"Ped vel x: {dynamic_obstacle_velocity_x}, ped vel y: {dynamic_obstacle_velocity_y}")

        dynamic_obstacle_path = [(dynamic_obstacle_position_x, dynamic_obstacle_position_y), (dynamic_obstacle_position_end_x, dynamic_obstacle_position_end_y)]

        line_car = LineString(car_path_coordinates)
        line_dynamic_obstacle = LineString(dynamic_obstacle_path)

        # rclpy.logging.get_logger("behaviour_planner").info(f"Ped line: {line_ped}")

        intersection = line_car.intersection(line_dynamic_obstacle)

        if intersection.is_empty:
            rclpy.logging.get_logger("behaviour_planner").info("[ShouldStopCondition]: No intersection found, safe to proceed")
            return Status.FAILURE
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
        distance = math.sqrt((nearest_point[0] - self.bt_instance.x) ** 2 + (nearest_point[1] - self.bt_instance.y) ** 2)
        if distance > self.ignore_distance:
            rclpy.logging.get_logger("behaviour_planner").info("[ShouldStopCondition]: No intersection found, safe to proceed")
            return Status.FAILURE

        rclpy.logging.get_logger("behaviour_planner").info(f"[ShouldStopCondition]: intersecting with detection id: {self.bt_instance.detection.id}")
        return Status.SUCCESS


class Reroute(Behaviour):
    def __init__(self, name, bt_instance):
        super(Reroute, self).__init__(name)
        self.bt_instance = bt_instance
        self.flag = 10

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        if self.flag <= 0:
            self.bt_instance.reroute_status = True
            self.flag = 10
        else:
            self.bt_instance.reroute_status = False
            self.flag -= 1
        self.logger.debug(f"Action::update {self.name}")
        return Status.RUNNING

    def terminate(self, new_status):
        self.logger.debug(f"Action::terminate {self.name} to {new_status}")
