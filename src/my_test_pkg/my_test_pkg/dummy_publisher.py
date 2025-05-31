import rclpy
from rclpy.node import Node
from autodrive_msgs.msg import Detection, GeneralDetection, DynamicObstacle, StaticObstacle, RailroadCrossing, TrafficLight, TrafficSign, Trajectory, SpeedLimit
from autodrive_msgs.srv import GetId, Reroute
from std_msgs.msg import Float64
from std_msgs.msg import Float64, String

import time

class Railroad_Publisher(Node) :
    def __init__(self) :
        super().__init__('railroad_publisher')
        self.publisher_ = self.create_publisher(Detection, 'railroad_crossing', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)


    def timer_callback(self) :

        msg = Detection()
        railroad = RailroadCrossing()
        railroad.active = True
        railroad.bar_activity_confidence = 1.0
        msg.railroad_crossings.append(railroad)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: active')

def main(args=None) :
    rclpy.init(args=args)
    node = Railroad_Publisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
  
    if __name__ == '__main__':
        main()


# class FourWay_Sign_Publisher(Node):
#     def __init__(self):
#         super.__init__('fourway_sign_publisher')
#         self.publisher_ = self.create_publisher()