from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence, Selector
from autodrive_msgs.msg import StaticObstacle
from behaviour_planner_pkg.utilities import (Reroute, Placeholder)
from shapely.geometry import LineString, Point

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


class StaticObstacleCondition(Behaviour):
    def __init__(self, name: str, bt_instance, target_static_obstacle_conditions):
        super(StaticObstacleCondition, self).__init__(name)
        self.bt_instance = bt_instance
        self.target_static_obstacle_conditions = target_static_obstacle_conditions

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        self.detection_input = self.bt_instance.detection.obstacle_type

        # Check if the detection input is in our list of valid conditions
        if self.detection_input in self.target_static_obstacle_conditions:
            return Status.SUCCESS
        return Status.FAILURE

class StaticObstacleIntersect(Behaviour):
    def __init__(self, name: str, bt_instance):
        super(StaticObstacleIntersect, self).__init__(name)
        self.bt_instance = bt_instance
    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")
        # extract car's path coordinates 
        car_path_points = self.bt_instance.path.points
        car_path_coordinates = []
        # convert to east, north coordinate 
        for point in car_path_points:
            car_path_coordinates.append((point.east, point.north))
        # For geometry 
        cars_path = LineString(car_path_coordinates)
        # get the coordinate of the static obstacle
        static_obstacle_position_x = self.bt_instance.detection.detection.bounding_box.center.position.x
        static_obstacle_position_y = self.bt_instance.detection.detection.bounding_box.center.position.y
        # For geometry
        static_ob_position = Point([static_obstacle_position_x, static_obstacle_position_y])
        # create a position buffer to account for object size 
        static_ob_position = static_ob_position.buffer(2.0) # 2 meters is a param
        # check if our Pint s overlap our Path (assume v and vpotential = 0)
        if static_ob_position.intersects(cars_path):
            return Status.SUCCESS
        return Status.FAILURE
        

def get_static_obstacle_traffic_cone_tree(bt_instance):
    static_obstacle_traffic_cone_sequence = Sequence(name="static_obstacle_traffic_cone_sequence", memory=True)
    static_obstacle_traffic_cone_sequence.add_children([
        StaticObstacleCondition("static_obstacle_is_traffic_cone", bt_instance, target_static_obstacle_conditions=[
            StaticObstacle.TRAFFIC_CONE
        ]),
        Reroute("reroute", bt_instance)
    ])

    return static_obstacle_traffic_cone_sequence


def get_static_obstacle_barrier_tree(bt_instance):
    static_obstacle_barrier_sequence = Sequence(name="static_obstacle_barrier_sequence", memory=True)
    static_obstacle_barrier_sequence.add_children([
        StaticObstacleCondition("static_obstacle_is_barrier", bt_instance, target_static_obstacle_conditions=[
            StaticObstacle.BARRIER
        ]),
        Reroute("reroute", bt_instance)
    ])
    return static_obstacle_barrier_sequence


def get_static_obstacle_bike_lane_protector_tree(bt_instance):
    static_obstacle_bike_lane_protector_sequence = Sequence(name="static_obstacle_bike_lane_protector_sequence", memory=True)
    static_obstacle_bike_lane_protector_sequence.add_children([
        StaticObstacleCondition("static_obstacle_is_bike_lane_protector", bt_instance, target_static_obstacle_conditions=[
            StaticObstacle.BIKE_LANE_PROTECTOR
        ]),
         # slow speed for the length of our path for which their are bike lane protectors 
         Placeholder("bike lane detected", Status.SUCCESS) # the tree gets created and then removes right away 
    ])
    return static_obstacle_bike_lane_protector_sequence


def get_static_obstacle_speed_bump_tree(bt_instance):
    static_obstacle_speed_bump_sequence = Sequence(name="static_obstacle_speed_bump_sequence", memory=True)
    static_obstacle_speed_bump_sequence.add_children([
        StaticObstacleCondition("static_obstacle_is_speed_bump", bt_instance, target_static_obstacle_conditions=[
            StaticObstacle.SPEED_BUMP
        ]),
         # reset speed
        ResetSpeed("reset speed", bt_instance),

        # check if we will intersect with speed bumb (ex. could be on opposite side of road) - nevermind because if on opp side it will evntually be on ours too

        # set speed on path to slow down to a given speed
        SetSpeedByPoint("slow for speed bump", bt_instance, 5, SpeedLimit.MPS, start_ahead_distance = 15), # 5 mph is a param, however, it is the suggested amount by google AI; 15m is a param

        # coast at that speed over the bump
        SetSpeed("coast over bump", bt_instance, 5, SpeedLimit.MPS, 25, num_points = 20),# 25 cache length is a param; 20 num points is param

        # Reset Speed
        ResetSpeed("reset speed", bt_instance)
    ])
    return static_obstacle_speed_bump_sequence


def get_static_obstacle_misc_tree(bt_instance):
    static_obstacle_misc_sequence = Sequence(name="static_obstacle_misc_sequence", memory=True)
    static_obstacle_misc_sequence.add_children([
        StaticObstacleCondition("static_obstacle_is_misc", bt_instance, target_static_obstacle_conditions=[
            StaticObstacle.MISC
        ]),
        # check if we will intersect - class condition 
        StaticObstacleIntersect("Is it on our path?", bt_instance),
        # then reroute 
        Reroute("reroute", bt_instance)
    ])
    return static_obstacle_misc_sequence


def get_static_obstacle_tree(bt_instance):
    static_obstacle_selector = Selector(name="static_obstacle_selector", memory=True)
    static_obstacle_selector.add_children([
        get_static_obstacle_traffic_cone_tree(bt_instance),
        get_static_obstacle_barrier_tree(bt_instance),
        get_static_obstacle_bike_lane_protector_tree(bt_instance),
        get_static_obstacle_speed_bump_tree(bt_instance),
        get_static_obstacle_misc_tree(bt_instance)
    ])

    return static_obstacle_selector
