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
        self.publisher_ = self.create_publisher(Detection, 'detections', 10)
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

# same logic for four way light (flashing red/off)
class FourWay_Sign_Publisher(Node):
    def __init__(self):
        super.__init__('fourway_sign_publisher')
        self.publisher_ = self.create_publisher(Detection, 'detections', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self) : 
        msg = Detection()
        four_way = TrafficSign()
        four_way.sign_type = TrafficSign.STOP
        msg.traffic_signs.append(four_way)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: four way stop')

def main(args=None) :
    rclpy.init(args=args)
    node = FourWay_Sign_Publisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
  
    if __name__ == '__main__':
        main()




