import functools
from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Selector
from py_trees import display
from py_trees.trees import BehaviourTree, visitors
from py_trees.blackboard import Client
from py_trees.common import Access
import rclpy
from autodrive_msgs.msg import Trajectory, Detection, DynamicObstacle, StaticObstacle, TrafficLight, TrafficSign, SpeedLimit, RailroadCrossing
from behaviour_planner_pkg.traffic_light import get_traffic_light_tree
from behaviour_planner_pkg.traffic_sign import get_traffic_sign_tree
from behaviour_planner_pkg.speed_limit import get_speed_limit_tree
from behaviour_planner_pkg.dynamic_obstacle import get_dynamic_obstacle_tree
from behaviour_planner_pkg.static_obstacle import get_static_obstacle_tree
from behaviour_planner_pkg.railroad_crossing import get_railroad_tree
import math
from diagnostic_msgs.msg import KeyValue
import rclpy.logging
from . import simple_timer
import traceback

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


class FourWayStopSignWaitForCars(Behaviour):
    def __init__(self, name, bt_instance):
        super(FourWayStopSignWaitForCars, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"Action::setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::initialise {self.name}")

    def update(self):
        self.logger.debug(f"Action::update {self.name}")

        blackboard_client = Client(name="FourWayRead")
        blackboard_client.register_key(key="fourWayCars", access=Access.READ)
        blackboard_client.fourWayCars = self.associated_cars

        self.associated_cars = blackboard_client.fourWayCars

        for detection_id in self.associated_cars:
            if detection_id in self.bt_instance.global_detection_dict:
                detection = self.bt_instance.global_detection_dict[detection_id]
                # TODO - Check for velocity

        return Status.SUCCESS


# class SetCarFollowingSpeed(Behaviour):
#     def __init__(self, name: str, bt_instance):
#         super(SetCarFollowingSpeed, self).__init__(name)
#         self.bt_instance = bt_instance

#     def setup(self):
#         self.logger.debug(f"{self.name}::setup")

#     def initialise(self):
#         self.logger.debug(f"{self.name}::initialise")

#     def calculate_acceleration(self, v, delta_v, s):
#         s_star = IDM_MIN_GAP + max(0, v * IDM_TIME_HEADWAY + (v * delta_v) / (2 * np.sqrt(IDM_MAX_ACCEL * IDM_MAX_DECCEL)))
#         acceleration = IDM_MAX_ACCEL * (1 - (v / MAX_TRACK_SPEED) ** 4 - (s_star / max(s, EPSILON)) ** 2)
#         return acceleration

#     def update(self):
#         self.points = self.bt_instance.path.points
#         ending_speed_index = -1
#         relative_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x - self.bt_instance.x
#         relative_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y - self.bt_instance.y
#         relative_position = math.sqrt(relative_position_x ** 2 + relative_position_y ** 2) - IDM_POS_OFFSET
#         dynamic_obstacle_speed = math.sqrt(self.bt_instance.detection.detection.velocity.x ** 2 + self.bt_instance.detection.detection.velocity.y ** 2)
#         relative_speed = dynamic_obstacle_speed - self.bt_instance.speed
#         idm_acceleration = 0.0
#         min_distance = float('inf')

#         for i in range(len(self.points)):
#             point = self.points[i]
#             distance_to_path = math.sqrt((self.bt_instance.detection.detection.bounding_box.center.position.x - point.east) ** 2 + (self.bt_instance.detection.detection.bounding_box.center.position.y - point.north) ** 2)
#             if distance_to_path < min_distance:
#                 ending_speed_index = i
#                 min_distance = distance_to_path

#         if ending_speed_index == -1:
#             self.bt_instance.custom_diag.pop('relative_position', None)
#             self.bt_instance.custom_diag.pop('relative_speed', None)
#             self.bt_instance.custom_diag.pop('idm_acceleration', None)
#             return Status.FAILURE

#         rclpy.logging.get_logger("behaviour_planner").info(f"Nearest point: {self.points[ending_speed_index]}, index: {ending_speed_index}")

#         if relative_position > 0 and min_distance < 1: # Only act if the obstacle is ahead and on our path
#             idm_acceleration = self.calculate_acceleration(self.bt_instance.speed, relative_speed, relative_position)

#             # Diagnostics
#             relative_position_pair = KeyValue()
#             relative_position_pair.key = "Relative Position"
#             relative_position_pair.value = f"{relative_position}"
#             relative_speed_pair = KeyValue()
#             relative_speed_pair.key = "Relative Speed"
#             relative_speed_pair.value = f"{relative_speed}"
#             idm_acceleration_pair = KeyValue()
#             idm_acceleration_pair.key = "Acceleration"
#             idm_acceleration_pair.value = f"{idm_acceleration}"
#             self.bt_instance.custom_diag['relative_position'] = relative_position_pair
#             self.bt_instance.custom_diag['relative_speed'] = relative_speed_pair
#             self.bt_instance.custom_diag['idm_acceleration'] = idm_acceleration_pair

#             rclpy.logging.get_logger("behaviour_planner").info(f"Dynamic obstacle id: {self.bt_instance.detection.detection.id}")
#             rclpy.logging.get_logger("behaviour_planner").info(f"Our speed: {self.bt_instance.speed}, relative speed: {relative_speed}, relative position: {relative_position}")
#             rclpy.logging.get_logger("behaviour_planner").info(f"Acceleration {idm_acceleration}")
#             # Apply IDM logic to adjust speed in the path
#             for i in range(ending_speed_index):
#                 if i == 0:
#                     point_distance = math.sqrt((self.points[i].north - self.points[i + 1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)
#                     point_time = point_distance / max(self.bt_instance.speed, 0.2)
#                     self.points[i].speed = max(0.0, self.bt_instance.speed + (idm_acceleration * point_time))
#                 else:
#                     point_distance = math.sqrt((self.points[i].north - self.points[i - 1].north) ** 2 + (self.points[i].east - self.points[i - 1].east) ** 2)
#                     point_time = point_distance / max(self.points[i - 1].speed, 0.2)
#                     self.points[i].speed = max(0.0, self.points[i - 1].speed + (idm_acceleration * point_time))

#             for i in range(ending_speed_index, len(self.points)):
#                 self.points[i].speed = dynamic_obstacle_speed
#         else:
#             self.bt_instance.custom_diag.pop('relative_position', None)
#             self.bt_instance.custom_diag.pop('relative_speed', None)
#             self.bt_instance.custom_diag.pop('idm_acceleration', None)
#         self.bt_instance.points = self.points
#         return Status.SUCCESS

#         # self.points = self.bt_instance.path.points
#         # starting_speed_index = -1
#         # relative_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x - self.bt_instance.x
#         # relative_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y - self.bt_instance.y
#         # relative_position = math.sqrt(relative_position_x ** 2 + relative_position_y ** 2) - IDM_POS_OFFSET
#         # dynamic_obstacle_speed = math.sqrt(self.bt_instance.detection.detection.velocity.x ** 2 + self.bt_instance.detection.detection.velocity.y ** 2)
#         # relative_speed = dynamic_obstacle_speed - self.bt_instance.speed
#         # idm_acceleration = 0.0
#         # min_distance = float('inf')

#         # for i in range(len(self.points)):
#         #     point = self.points[i]
#         #     distance_to_path = math.sqrt((self.bt_instance.detection.detection.bounding_box.center.position.x - point.east) ** 2 + (self.bt_instance.detection.detection.bounding_box.center.position.y - point.north) ** 2)
#         #     if distance_to_path < min_distance:
#         #         starting_speed_index = i
#         #         min_distance = distance_to_path

#         # if starting_speed_index == -1:
#         #     return Status.FAILURE

#         # rclpy.logging.get_logger("behaviour_planner").info(f"Nearest point: {self.points[starting_speed_index]}, index: {starting_speed_index}")

#         # if relative_position > 0 and min_distance < 1: # Only act if the obstacle is ahead and on our path
#         #     if dynamic_obstacle_speed > 0.1 or relative_position > IDM_MIN_GAP:
#         #         idm_acceleration = abs(self.calculate_acceleration(
#         #             self.bt_instance.speed, relative_speed, relative_position))
#         #         rclpy.logging.get_logger("behaviour_planner").info(f"Self = abs(self.calculate_acceleration(speed: {self.bt_instance.speed}, dynamic obstacle speed: {dynamic_obstacle_speed}, relative position: {relative_position}, relative speed: {relative_speed}")
#         #         rclpy.logging.get_logger("behaviour_planner").info(f"Dynamic obstacle id: {self.bt_instance.detection.detection.id}")

#         #             # Apply IDM logic to adjust speed in the path
#         #         for i in range(starting_speed_index, -1, -1):
#         #             if i == starting_speed_index:
#         #                 self.points[i].speed = max(0.0, dynamic_obstacle_speed)
#         #             else:
#         #                 point_distance = math.sqrt((self.points[i].north - self.points[i+1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)
#         #                 # point_time = point_distance / 0.2
#         #                 point_time = point_distance / max(self.points[i + 1].speed, 0.2)
#         #                 self.points[i].speed = max(0.0, self.points[i + 1].speed + (idm_acceleration * point_time))

#         #         for i in range(starting_speed_index + 1, len(self.points)):
#         #             self.points[i].speed = self.points[starting_speed_index].speed
#         #     else:
#         #         for i in range(len(self.points)):
#         #             self.points[i].speed = 0.0
#         #         rclpy.logging.get_logger("behaviour_planner").info(f"Car stopped, relative position: {relative_position}")
#         #         # idm_acceleration = min(0, idm_acceleration) # do not speed up

#         #     rclpy.logging.get_logger("behaviour_planner").info(f"Relative speed: {relative_speed}, relative position: {relative_position}, idm_acceleration: {idm_acceleration}")

#         # self.bt_instance.points = self.points
#         # return Status.SUCCESS

#     def terminate(self, new_status):
#         self.logger.debug(f"{self.name}::terminate to {new_status}")

# class SetCarFollowingSpeed(Behaviour):
#     def __init__(self, name: str, bt_instance):
#         super(SetCarFollowingSpeed, self).__init__(name)
#         self.bt_instance = bt_instance

#     def setup(self):
#         self.logger.debug(f"{self.name}::setup")

#     def initialise(self):
#         self.logger.debug(f"{self.name}::initialise")

#     def calculate_follow_distance(self, car_speed, max_deceleration, min_gap):
#         return (car_speed ** 2) / (2 * max_deceleration) + min_gap + FOLLOWER_POS_OFFSET

#     def update(self):
#         self.points = self.bt_instance.path.points
#         leader_car_index = -1
#         target_speed = math.sqrt(self.bt_instance.detection.detection.velocity.x ** 2 + self.bt_instance.detection.detection.velocity.y ** 2)
#         relative_speed = self.bt_instance.speed - target_speed
#         relative_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x - self.bt_instance.x
#         relative_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y - self.bt_instance.y
#         relative_position = math.sqrt(relative_position_x ** 2 + relative_position_y ** 2) - FOLLOWER_POS_OFFSET
#         gradient_accel = 0

#         # Find point on path where target vehicle is
#         min_distance = float('inf')
#         for i in range(len(self.points)):
#             point = self.points[i]
#             distance_to_path = math.sqrt((self.bt_instance.detection.detection.bounding_box.center.position.x - point.east) ** 2 + (self.bt_instance.detection.detection.bounding_box.center.position.y - point.north) ** 2)
#             if distance_to_path < min_distance:
#                 leader_car_index = i
#                 min_distance = distance_to_path

#         if leader_car_index == -1 or min_distance > 1:
#             rclpy.logging.get_logger("behaviour_planner").info(f"[Car following] Detection id: {self.bt_instance.detection.detection.id} | couldn't find car on our path")
#             return Status.FAILURE

#         # Target car is faster than us, no need to do any calculations/following
#         if relative_speed < 0 and relative_position >= FOLLOWER_MIN_GAP:
#             rclpy.logging.get_logger("behaviour_planner").info(f"[Car following] Detection id: {self.bt_instance.detection.detection.id} | faster than us")
#             return Status.FAILURE

#         # Leader car is stopped and we're within our minimum gap distance, stop! - TODO - check if we need this at all
#         elif target_speed < 0.1 and relative_position < FOLLOWER_MIN_GAP:
#             rclpy.logging.get_logger("behaviour_planner").info(f"[Car following] Detection id: {self.bt_instance.detection.detection.id} | leader car stopped, and we're within mingap: stopping!")
#             for i in range(0, len(self.points)):
#                 self.points[i].speed = 0.0
#             self.bt_instance.points = self.points
#             return Status.SUCCESS

#         min_follow_dist = self.calculate_follow_distance(self.bt_instance.speed, FOLLOWER_MAX_ACCEL, FOLLOWER_MIN_GAP)

#         # Working backwards, set all points to leading car's speed until min_follow_dist is reached
#         distance = 0.0
#         i = leader_car_index
#         while (i > 0 and distance < min_follow_dist):
#             i -= 1
#             self.points[i].speed = max(0.0, target_speed) # in case leader speed is negative for some reason
#             distance += math.sqrt((self.points[i].north - self.points[i + 1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)
#         begin_min_follow_dist_index = i

#         # This means we're closer than our min following distance, we need to slow down!
#         if distance < min_follow_dist:
#             # Just going to set this to a percentage of the target speed for now and let LP figure it out lol, eventually we should slow down enough to increase the distace.
#             target_speed = target_speed * (distance / min_follow_dist)

#             # Set all the speed points again
#             i = leader_car_index
#             while (i > 0):
#                 i -= 1
#                 self.points[i].speed = max(0.0, target_speed) # in case leader speed is negative for some reason

#             rclpy.logging.get_logger("behaviour_planner").info(f"[Car following] Detection id: {self.bt_instance.detection.detection.id} | We're closer than minimum following distance.")

#         # Set a nice gradient to slow down to target speed
#         else:
#             # Find out how much space we have between min follow distance and us
#             distance = 0.0
#             for i in range(begin_min_follow_dist_index, -1, -1):
#                 distance += math.sqrt((self.points[i].north - self.points[i + 1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)

#             # Calculate acceleration to use for gradient
#             gradient_accel = max(FOLLOWER_MIN_ACCEL, distance / max(relative_speed, EPSILON))

#             for i in range(begin_min_follow_dist_index, -1, -1):
#                 if self.points[i + 1].speed == 0.0:
#                     self.points[i].speed = 0.0
#                 else:
#                     point_distance = math.sqrt((self.points[i].north - self.points[i + 1].north) ** 2 + (self.points[i].east - self.points[i + 1].east) ** 2)
#                     point_time = point_distance / self.points[i + 1].speed
#                     self.points[i].speed = max(0.0, target_speed + (gradient_accel * point_time))

#         # Set the rest of the path in front of the target car to the speed of that car
#         for i in range(leader_car_index, len(self.points)):
#                 self.points[i].speed = target_speed

#         # Diagnostics
#         relative_position_pair = KeyValue()
#         relative_position_pair.key = "Relative Position"
#         relative_position_pair.value = f"{relative_position}"
#         relative_speed_pair = KeyValue()
#         relative_speed_pair.key = "Relative Speed"
#         relative_speed_pair.value = f"{relative_speed}"
#         gradient_accel_pair = KeyValue()
#         gradient_accel_pair.key = "Gradent Acceleration"
#         gradient_accel_pair.value = f"{gradient_accel}"
#         min_follow_index_pair = KeyValue()
#         min_follow_index_pair.key = "Min Follow Zone Start Index"
#         min_follow_index_pair.value = f"{begin_min_follow_dist_index}"
#         min_follow_dist_pair = KeyValue()
#         min_follow_dist_pair.key = "Min Follow Distance"
#         min_follow_dist_pair.value = f"{min_follow_dist}"
#         leader_index_pair = KeyValue()
#         leader_index_pair.key = "Leader Car Index"
#         leader_index_pair.value = f"{leader_car_index}"
#         self.bt_instance.custom_diag['relative_position'] = relative_position_pair
#         self.bt_instance.custom_diag['relative_speed'] = relative_speed_pair
#         self.bt_instance.custom_diag['gradient_acceleration'] = gradient_accel_pair
#         self.bt_instance.custom_diag['min_follow_zone_start_index'] = min_follow_index_pair
#         self.bt_instance.custom_diag['min_follow_distance'] = min_follow_dist_pair
#         self.bt_instance.custom_diag['leader_car_index'] = leader_index_pair

#         self.bt_instance.points = self.points
#         return Status.SUCCESS

#     def terminate(self, new_status):
#         self.logger.debug(f"{self.name}::terminate to {new_status}")


class SafeToProceedCondition(Behaviour):
    def __init__(self, name: str, bt_instance):
        super(SafeToProceedCondition, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.yield_status = self.bt_instance.yield_status
        self.user_vehicle_x, self.user_vehicle_y = self.bt_instance.x, self.bt_instance.y
        self.other_vehicle_x, self.other_vehicle_y = self.bt_instance.detection.detection.bounding_box.center.position.x, self.bt_instance.detection.detection.bounding_box.center.position.y
        self.other_vehicle_speed = math.sqrt(self.bt_instance.detection.detection.velocity.x ** 2 + self.bt_instance.detection.detection.velocity.y ** 2)
        self.speed_limit = 10  # TODO make this not a temp variable
        if not self.yield_status:
            return Status.SUCCESS

        # Calculate the original displacement between the two vehicle
        self.original_displacement = math.sqrt((self.user_vehicle_x - self.other_vehicle_x) ** 2 + (self.user_vehicle_y - self.other_vehicle_y) ** 2)

        # Calculate the amount of time it takes for the user vehicle to get up to speed
        self.user_vehicle_time = self.speed_limit / 1

        # Calculate the user vehicle's displacement during that time
        self.user_vehicle_displacement = ((self.speed_limit * self.user_vehicle_time) / 2)

        # Calculate the amount of time it takes for the other vehicle to get up to speed
        self.other_vehicle_time = (self.speed_limit - self.other_vehicle_speed) / 4

        # Calculate the other vehicle's displacement
        if self.other_vehicle_time > self.user_vehicle_time:  # if the other vehicle won't get up to speed before the user vehicle
            self.other_vehicle_displacement = (self.other_vehicle_speed * self.user_vehicle_time) + (self.user_vehicle_time ** 2 * 2)
        else:
            self.other_vehicle_displacement = (self.other_vehicle_speed * self.other_vehicle_time) + (self.other_vehicle_time ** 2 * 2)
            self.other_vehicle_time += self.speed_limit * (self.user_vehicle_time - self.other_vehicle_time)

        self.projected_displacement = abs(self.user_vehicle_displacement - self.other_vehicle_displacement) + self.original_displacement
        if self.projected_displacement > 10:  # if the car can safely turn
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")


class BT():
    def __init__(self, path, detection, global_detection_dict, speed):
        self.path = path
        self.detection = detection
        self.speed = speed
        self.global_detection_dict = global_detection_dict
        self.yield_status = False
        self.reroute_status = False
        self.tree = BehaviourTree(self.make_bt())

        # logs feedback messages and the behaviour's status
        self.tree.visitors.append(visitors.DebugVisitor())
        # gets a snapshot of the current tree
        snapshot_visitor = visitors.SnapshotVisitor()
        self.tree.add_post_tick_handler(  # runs immediately after ticking
            # leaves snapshot_visitor fixed so that post_tick_handler receives the necessary arguments
            functools.partial(self.post_tick_handler, snapshot_visitor)
        )
        # appends the node to a list of visited ones
        self.tree.visitors.append(snapshot_visitor)
        self.start_lanelet_id = None
        self.end_lanelet_id = None
        self.points = None
        self.cached_lanelets = []
        self.associated_cars = []
        self.custom_diag = {}

    def tick(self, notify_when_complete=False):
        rclpy.logging.get_logger("behaviour_planner").error("Tree received tick command")
        try:
            timer = simple_timer.Timer()
            self.tree.tick()

            if notify_when_complete:
                elapsed = timer.time_elapsed_ms()
                try:
                    return dict(id=self.detection.detection.id, time_elapsed=elapsed)
                except AttributeError:
                    return dict(id=-1, time_elapsed=elapsed)
        except Exception:
            rclpy.logging.get_logger("behaviour_planner").error(f"Tick failed: {traceback.format_exc()}")

    def set_detection(self, detection):
        self.detection = detection

    def set_path(self, path):
        self.path = path

    def set_speed(self, speed):
        self.speed = speed

    def set_position(self, x, y):
        self.x = x
        self.y = y

    def make_bt(self):
        # Selector for root
        root = Selector(name="detections", memory=True)

        # If the detection is a traffic light
        if isinstance(self.detection, TrafficLight):
            # Add child to the root selector
            root.add_child(get_traffic_light_tree(self))

        # If the detection is a traffic sign
        if isinstance(self.detection, TrafficSign):
            # Add child to the root selector
            root.add_child(get_traffic_sign_tree(self))

        # If the detection is a railroad 
        if isinstance(self.detection, RailroadCrossing):
            # Add child to the root selector
            root.add_child(get_railroad_tree(self))

        # If the detection is a speed limit sign
        if isinstance(self.detection, SpeedLimit):
            # Add child to the root selector
            root.add_child(get_speed_limit_tree(self))

        # If the detection is a dynamic obstacle
        if isinstance(self.detection, DynamicObstacle):
            # Add child to the root selector
            root.add_child(get_dynamic_obstacle_tree(self))

        # If the detection is a static obstacle
        if isinstance(self.detection, StaticObstacle):
            # Add child to the root selector
            root.add_child(get_static_obstacle_tree(self))

        return root

    # prints the parts of the behaviour tree that were visited
    def post_tick_handler(self, snapshot_visitor, behaviour_tree):
        '''with open("output.html", mode="w") as f:
            f.write(display.xhtml_tree(
                behaviour_tree.root,
                visited=snapshot_visitor.visited,
                previously_visited=snapshot_visitor.visited
            ))'''
        # display.render_dot_tree(behaviour_tree.root, 0, False, None, None, False, False)
        print(
            display.unicode_tree(
                behaviour_tree.root,
                visited=snapshot_visitor.visited,
                previously_visited=snapshot_visitor.visited
            )
        )

    def get_points(self):
        return self.points

    def get_tree_status(self):
        return self.tree.root.status

    def get_yield_status(self):
        return self.yield_status

    def get_detection_coordinates(self):
        return self.detection.detection.bounding_box.center.position.x, self.detection.detection.bounding_box.center.position.y

    def get_reroute_status(self):
        return self.reroute_status

    def get_diagnostics(self):
        diags = []
        tip_node = self.tree.root.tip()
        if tip_node is None:
            return diags
        diag_node_name = KeyValue()
        diag_node_name.key = "Tip Node"
        diag_node_name.value = tip_node.name
        diags.append(diag_node_name)
        diag_status = KeyValue()
        diag_status.key = "Status"
        diag_status.value = f"{tip_node.status}"
        diags.append(diag_status)
        for key, diag in self.custom_diag.items():
            diags.append(diag)

        if self.start_lanelet_id is not None or self.end_lanelet_id is not None:
            diag_rerouting = KeyValue()
            diag_rerouting.key = "Rerouting"
            diag_rerouting.value = "True"
            diags.append(diag_rerouting)
            diag_start_lanelet = KeyValue()
            diag_start_lanelet.key = "Reroute Start Lanelet ID"
            diag_start_lanelet.value = f"{self.start_lanelet_id}"
            diags.append(diag_start_lanelet)
            diag_end_lanelet = KeyValue()
            diag_end_lanelet.key = "Reroute End Lanelet ID"
            diag_end_lanelet.value = f"{self.end_lanelet_id}"
            diags.append(diag_end_lanelet)

        if self.points is not None:
            diag_stopping = KeyValue()
            diag_stopping.key = "Stopping"
            diag_stopping.value = "True"
            diags.append(diag_stopping)

        if len(self.cached_lanelets) != 0:
            diag_cached_lanelets = KeyValue()
            diag_cached_lanelets.key = "Cached Lanelets"
            diag_cached_lanelets.value = str(self.cached_lanelets)
            diags.append(diag_cached_lanelets)

        return diags


def main(path: Trajectory, detection: Detection, global_detection_dict: dict):
    tree_wrapper = BT(path, detection, global_detection_dict, speed=0.0)
    return tree_wrapper
