import rclpy
from rclpy.node import Node
from . import behaviour_tree  # BP's local module for logic and decision processes
import copy  # For deepcopying objects later in the code
from py_trees.common import Status  # Enum, used for behaviour tree statuses
from . import simple_timer  # Simple timer class to time things throughout the code

# All the messages used by BP for processing detections
from autodrive_msgs.msg import Trajectory, Detection, SpeedLimit, RailroadCrossing
from autodrive_msgs.srv import GetId, Reroute
from std_msgs.msg import Float64

# Imported for coordinate transformations
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener

import time

# Used for publishing system diagnostics
from diagnostic_msgs.msg import DiagnosticArray, KeyValue, DiagnosticStatus

# Static parameters (perhaps make these ros parameters?)
TREE_UPDATE_INTERVAL = 0.2  # in seconds
MAX_TRACK_SPEED = 20.0  # in MPS


class BehaviourPlanner(Node):
    """
    Ros node responsible for planning the vehicle's behavior
    based on incoming path, detections, and speed data.
    It utilizes behavior trees (see behaviour_tree.py)
    to manage the decision-making processes, such as stopping for obstacles,
    adjusting speed, or rerouting when necessary.
    """
    def __init__(self):
        """
        Initializes the node by setting up publishers, subscribers,
        service clients, timers, TF2 listeners, and diagnostic publishers.
        """
        super().__init__('behaviour_planner')  # Initialize the node

        # Publisher for outgoing trajectory after logic from BP
        self.publisher_ = self.create_publisher(Trajectory, 'behaviour_path', 10)
        self.get_logger().debug("Create 'behaviour_path' publisher done")

        # Initialization of all member variables
        self.path = Trajectory()  # Instantiate the outgoing path
        self.speed = 0  # For monitoring outgoing speed
        self.has_path = False  # For keeping track of whether the path has been recieved
        self.bt_dict = dict()  # Dictionary to manage behavior trees keyed by detection ID
        # self.global_detection_dict = dict()  # Used to stores detections globally for 4-way stop and similair logic
        self.slowing_id = 0  # ID of the detection causing the vehicle to slow down
        self.requires_yielding = False  # For keeping track of whether yielding is required
        self.dynamic_obstacles_detections = []
        self.detection_timestamps = dict()
        self.timeout_seconds = 2.0  # removes a tree after this many seconds of inactivity

        # Subscription to the path topic to receive Trajectory messages
        self.path_subscription = self.create_subscription(
            Trajectory,
            'path',
            self.path_callback,
            10)
        self.path_subscription  # prevent unused variable warning

        self.get_logger().debug("Subscribe to 'path' done")

        # Subscription to the detections topic to receive Detections messages
        self.detection_subscription = self.create_subscription(
            Detection,
            'detections',
            self.detection_callback,
            10)
        self.detection_subscription  # prevent unused variable warning
        self.get_logger().debug("Subscribe to 'detections' done")

        # Subscribe to railroad messages
        self.railroad_crossing = self.create_subscription(
            RailroadCrossing,
            'railroad_crossing',
            self.railroad_callback,
            10
        )
        self.railroad_crossing  # prevent unused variable warning
        self.get_logger().debug("Subscribe to 'railroad_crossing' done")

    

        # Subscription to the speed topic to receive current Speed messages
        self.speed_subscription = self.create_subscription(
            Float64,
            'se_velocity',
            self.speed_callback,
            10)
        self.speed_subscription  # prevent unused variable warning

        self.get_logger().debug("Subscribe to 'speed' done")

        # Timer to periodically call the timer_callback function. See the function itself for full functionality
        self.timer = self.create_timer(TREE_UPDATE_INTERVAL, self.timer_callback)

        # Service client to call the get_ll_id service
        self.lanelet_id_client = self.create_client(GetId, 'get_ll_id')

        # Service client to call the reroute service
        self.reroute_client = self.create_client(Reroute, 'reroute')

        # TF2 buffer and listener to handle coordinate frame transformations
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.x = 0.0  # Car's X position
        self.y = 0.0  # Car's y position

        # Diagnostics publisher to publish BP diagnostics
        self.diagnostic_publisher_ = self.create_publisher(DiagnosticArray, 'diagnostics', 10)

        # Timer to periodically call the diagnostics_callback function. See the function itself for full functionality
        self.diagnostics_timer_ = self.create_timer(0.5, self.diagnostics_callback)

        # Setting up diagnostics
        self.diagnostics = DiagnosticArray()

        # Initialize the first DiagnosticStatus entry
        self.diagnostics.status.append(DiagnosticStatus())
        self.diagnostics.status[0].name = self.get_name()
        self.diagnostics.status[0].hardware_id = 'Autonomy'
        self.diagnostics_dict = {}  # Dictionary to store diagnostic information

    def path_callback(self, msg):
        """
        Function to handle incoming path data from GP.
        Updates the current path, sets default speeds, and notifies behavior trees of the new path.
        """
        self.path = msg  # Update the current path with the received message

        # Set a default speed maximum track speed for each point in the path
        for i in range(len(self.path.points)):
            # If this is the first path received, enable processing
            self.path.points[i].speed = MAX_TRACK_SPEED

        if not self.has_path:
            self.get_logger().info("Recieved path, enabling.")
            self.has_path = True
        self.get_logger().info('Got path update')

        # Update all existing behavior trees with the new path
        for key, bt_tree in self.bt_dict.items():
            bt_tree.set_path(copy.deepcopy(self.path))

    def railroad_callback(self, msg):
        # This function is called whenever a new RailroadCrossing message arrives
        self.get_logger().info(f"Received railroad crossing message: {msg}")

        # You can access the message fields here and do whatever processing you want.
        # For example, if the message has a field named 'active', you can check it:
        if msg.active:
            self.get_logger().info("Railroad crossing is active!")

    def detection_callback(self, msg):
        """
        Function to handle incoming detection data.
        Updates or creates behavior trees based on new detections.
        """

        # Wait for path to be received before accepting detections
        if not self.has_path:
            return

        self.dynamic_obstacles_detections = list(msg.dynamic_obstacles)

        # Init timer for logging
        timer = simple_timer.Timer()

        # Log new detection
        self.get_logger().debug("Got new detections")

        global_detection_dict = dict()

        # Merge all types of detections into a single list for processing
        detections = [
            *list(msg.detection),
            *list(msg.dynamic_obstacles),
            *list(msg.static_obstacles),
            *list(msg.railroad_crossings),
            *list(msg.traffic_lights),
            *list(msg.traffic_signs),
            *list(msg.speed_limits),
            *list(msg.stop_lines)
        ]
        self.get_logger().info(f"Received {len(detections)} detections")

        current_time = time.time()

        # Process each detection individually
        while detections:
            detection = detections.pop(0)

            # Log the processing of each detection
            self.get_logger().debug(f'Processing detection: {detection}')

            # Attempt to extract the detection ID; default to -1 if missing
            try:
                detection_id = detection.detection.id
            except AttributeError:
                detection_id = -1
                self.get_logger().warning(f"Missing detection ID for detection: {detection}")

            if isinstance(detection, SpeedLimit):
                detection_id = -99  # special ID for speed limits, so speed limit detections all go into the same tree

            # Put detection into global detection dictionary for specific use in trees
            global_detection_dict[detection_id] = copy.deepcopy(detection)

            # Updates the timestamp for this detection
            self.detection_timestamps[detection_id] = current_time

            # Check dictionary for tree with detection ID
            if detection_id in self.bt_dict:
                self.get_logger().debug(f'Found existing tree with detection id {detection_id} in dictionary')
                self.bt_dict[detection_id].set_detection(copy.deepcopy(detection))
            else:
                # Call behaviour_tree.main with the current path and detection
                bt_instance = behaviour_tree.main(copy.deepcopy(self.path), copy.deepcopy(detection), global_detection_dict)
                self.bt_dict[detection_id] = bt_instance
                self.get_logger().debug(f'Added tree with detection id {detection_id} to dictionary')

        # Check for inactive detections
        inactive_detections = []
        for detection_id, last_update_time in self.detection_timestamps.items():
            time_elapsed = current_time - last_update_time
            if time_elapsed > self.timeout_seconds:
                self.get_logger().info(f'Detection {detection_id} is inactive')
                inactive_detections.append(detection_id)

        # Remove inactive detections if they are inside bt_dict
        for inactive_id in inactive_detections:
            if inactive_id in self.bt_dict:
                self.get_logger().info(f'Removing stale behavior tree for detection {inactive_id}')
                del self.bt_dict[inactive_id]
                del self.detection_timestamps[inactive_id]

        self.get_logger().info(f"Processing detections took: {timer.time_elapsed_ms()} ms")
        self.get_logger().info(f"Number of active trees: {len(self.bt_dict)}")

    def speed_callback(self, msg):
        """
        Function to handle incoming speed data.
        Updates the current speed and notifies all behavior trees of the new speed.
        """

        self.speed = msg.data  # Update the current speed with the received message

        # Logs the speed update
        self.get_logger().info(f"Received speed update: {self.speed} m/s.")

        # Update all existing behavior trees with the new speed
        for key, bt_tree in self.bt_dict.items():
            bt_tree.set_speed(copy.deepcopy(self.speed))

    def timer_callback(self):
        """
        Timer callback function called periodically to:
        - Update the vehicle's position using TF2 transforms
        - Tick all behavior trees
        - Aggregate speed modifications and publish the updated trajectory
        """
        try:
            t = self.tf_buffer.lookup_transform(
                'map',
                'the_monarch',
                rclpy.time.Time())
            self.x = t.transform.translation.x  # Update x postition
            self.y = t.transform.translation.y  # Update y postition
        except TransformException as ex:
            self.get_logger().warning(f'Could not transform: {ex}')

        # Create a deep copy of the current path to apply speed modifications
        stopping_path = copy.deepcopy(self.path)

        timer = simple_timer.Timer()  # Timer to measure tree processing time

        max_time_id = -1
        max_time = -1

        # Iterate over all behavior trees to update their states
        for id, bt_tree in self.bt_dict.items():
            bt_tree.set_position(self.x, self.y)  # Update vehicle's current position
            # bt_tree.set_yield_status(self.requires_yielding) # Update yield status
            start_time = time.time()
            self.get_logger().info(f"Tickling tree {id}")
            bt_tree.tick()  # Execute the behavior tree
            elapsed_time = (time.time() - start_time) * 1000
            if elapsed_time > max_time:
                max_time = elapsed_time
                max_time_id = id

        rclpy.logging.get_logger("behaviour_planner").info(f"Max time id: {max_time_id}, elapsed time: {max_time}")
        self.get_logger().info(f"Ticking trees took: {timer.time_elapsed_ms()} ms")

        # Deletes any trees that have succeeded
        self.bt_dict = {
            key: bt_tree
            for key, bt_tree in self.bt_dict.items()
            if bt_tree.tree.root.status != Status.SUCCESS
        }

        self.diagnostics_dict = {
            key: value
            for key, value in self.diagnostics_dict.items()
            if key not in self.diagnostics_dict
        }
        for id in self.diagnostics_dict:
            if id not in self.bt_dict:
                del self.diagnostics_dict[id]

        # Reset the yield status; it will be updated based on current behavior trees
        self.requires_yielding = False

        # Process each active behavior tree for speed adjustments and rerouting
        req = GetId.Request()
        for id, bt_tree in self.bt_dict.items():
            self.diagnostics_dict[id] = bt_tree.get_diagnostics()
            points_status = bt_tree.get_points()
            yield_status = bt_tree.get_yield_status()
            detection_coordinates = bt_tree.get_detection_coordinates()
            reroute_status = bt_tree.get_reroute_status()

            self.get_logger().info(f'Reroute status: {reroute_status} {detection_coordinates[0]} {detection_coordinates[1]}')
            # Handle detection coordinate requests and reroute status from behaviour trees
            if detection_coordinates[0] is not None and detection_coordinates[1] is not None and reroute_status:
                self.get_logger().info(f'Calling reroute for {detection_coordinates[0]} {detection_coordinates[1]}')
                req.east.append(detection_coordinates[0])
                req.north.append(detection_coordinates[1])

                # Log get_ll_id when needed
                self.get_logger().info('Called get_ll_id service')

            # Handle speed modifications from behavior trees
            if points_status is not None:
                path_len = len(stopping_path.points)

                # Ensure points_status does not exceed the path length
                if len(points_status) > path_len:
                    points_status = points_status[len(points_status) - path_len:]

                # Apply speed modifications where necessary (effectively taking the lowest speed)
                for i in range(min(path_len, len(points_status))):
                    if points_status[i].speed < stopping_path.points[i].speed:
                        stopping_path.points[i].speed = points_status[i].speed
                        self.slowing_id = id  # Track which detection is causing the slow down

            # Update yield status based on behavior trees
            if yield_status:
                self.requires_yielding = True
                self.get_logger().info("yielding flag set")

        if self.has_path:
            reroute_detection_lanelet_id = self.lanelet_id_client.call_async(req)
            reroute_detection_lanelet_id.add_done_callback(lambda fut: self.process_reroute_response(fut))

        # Publish the result trajectory to 'behaviour_path'
        self.get_logger().debug('Publishing path')
        self.publisher_.publish(stopping_path)

    def process_reroute_response(self, future):
        """Handles the response from get_parameters."""
        if future.result() is not None:
            lanelet = future.result().lanelet_id
            self.get_logger().info(f'Calling reroute with id: {lanelet}')
            req = Reroute.Request()
            req.start_lanelet_id = lanelet
            req.end_lanelet_id = []  # TODO
            self.reroute_client.call_async(req)
            # Log reroute when needed
            self.get_logger().info('Called reroute service')
        else:
            self.get_logger().error("Failed to get lanelet id for reroute")

    def error(self, level, message):
        """
        Update the diagnostic status if the new level is more severe than the current.
        """
        if level > self.diagnostics.status[0].level:
            self.diagnostics.status[0].level = level
            self.diagnostics.status[0].message = message

    def diagnostics_callback(self):
        """
        Timer callback function to publish diagnostic information periodically.
        Includes information about path recieving, slowing detections, and individual behavior trees.
        """
        self.diagnostics.header.stamp = self.get_clock().now().to_msg()  # Update the timestamp

        # Reset the diagnostic status to OK before updating
        self.diagnostics.status[0].level = DiagnosticStatus.OK
        self.diagnostics.status[0].message = 'OK'
        self.diagnostics.status[0].values = []

        # Diagnostic entry to indicate whether a path has been received
        diag_has_path = KeyValue()
        diag_has_path.key = "Has Path"
        if self.has_path:
            diag_has_path.value = 'True'
        else:
            diag_has_path.value = 'False'
            self.error(DiagnosticStatus.WARN, 'Awaiting Path')
        self.diagnostics.status[0].values.append(diag_has_path)

        # Diagnostic entry to indicate which detection ID is causing slowing
        diag_slowing = KeyValue()
        diag_slowing.key = "Restrictive Detection ID"
        diag_slowing.value = f"{self.slowing_id}"
        self.diagnostics.status[0].values.append(diag_slowing)

        # Add diagnostic information from each behavior tree
        for id in self.diagnostics_dict:
            diag_tree_id = KeyValue()
            diag_tree_id.key = "Tree ID"
            diag_tree_id.value = f"{id}"
            self.diagnostics.status[0].values.append(diag_tree_id)
            if id in self.diagnostics_dict:
                for diag in self.diagnostics_dict[id]:
                    self.diagnostics.status[0].values.append(diag)

        # Publish the complete DiagnosticArray
        self.diagnostic_publisher_.publish(self.diagnostics)


def main(args=None):
    """
    Entry point for the BehaviourPlanner node.
    Initializes ros, creates the BehaviourPlanner node, and keeps it running.
    """
    rclpy.init(args=args)  # Initialize the ros python library

    behaviour_planner = BehaviourPlanner()  # Instantiate the BehaviourPlanner node

    rclpy.spin(behaviour_planner)  # Keep the node alive and processing callbacks

    # Cleanup after spinning
    behaviour_planner.destroy_node()
    rclpy.shutdown()


# Execute the main function if this script is run directly
if __name__ == '__main__':
    main()
