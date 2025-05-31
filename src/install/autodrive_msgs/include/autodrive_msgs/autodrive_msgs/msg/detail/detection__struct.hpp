// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.hpp"
// Member 'dynamic_obstacles'
#include "autodrive_msgs/msg/detail/dynamic_obstacle__struct.hpp"
// Member 'static_obstacles'
#include "autodrive_msgs/msg/detail/static_obstacle__struct.hpp"
// Member 'railroad_crossings'
#include "autodrive_msgs/msg/detail/railroad_crossing__struct.hpp"
// Member 'traffic_lights'
#include "autodrive_msgs/msg/detail/traffic_light__struct.hpp"
// Member 'traffic_signs'
#include "autodrive_msgs/msg/detail/traffic_sign__struct.hpp"
// Member 'speed_limits'
#include "autodrive_msgs/msg/detail/speed_limit__struct.hpp"
// Member 'stop_lines'
#include "autodrive_msgs/msg/detail/stopline__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__Detection __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detection_type =
    std::vector<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>>;
  _detection_type detection;
  using _dynamic_obstacles_type =
    std::vector<autodrive_msgs::msg::DynamicObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::DynamicObstacle_<ContainerAllocator>>>;
  _dynamic_obstacles_type dynamic_obstacles;
  using _static_obstacles_type =
    std::vector<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>>;
  _static_obstacles_type static_obstacles;
  using _railroad_crossings_type =
    std::vector<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>>;
  _railroad_crossings_type railroad_crossings;
  using _traffic_lights_type =
    std::vector<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>>;
  _traffic_lights_type traffic_lights;
  using _traffic_signs_type =
    std::vector<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>>;
  _traffic_signs_type traffic_signs;
  using _speed_limits_type =
    std::vector<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>>;
  _speed_limits_type speed_limits;
  using _stop_lines_type =
    std::vector<autodrive_msgs::msg::Stopline_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::Stopline_<ContainerAllocator>>>;
  _stop_lines_type stop_lines;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detection(
    const std::vector<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__dynamic_obstacles(
    const std::vector<autodrive_msgs::msg::DynamicObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::DynamicObstacle_<ContainerAllocator>>> & _arg)
  {
    this->dynamic_obstacles = _arg;
    return *this;
  }
  Type & set__static_obstacles(
    const std::vector<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>> & _arg)
  {
    this->static_obstacles = _arg;
    return *this;
  }
  Type & set__railroad_crossings(
    const std::vector<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>> & _arg)
  {
    this->railroad_crossings = _arg;
    return *this;
  }
  Type & set__traffic_lights(
    const std::vector<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>> & _arg)
  {
    this->traffic_lights = _arg;
    return *this;
  }
  Type & set__traffic_signs(
    const std::vector<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::TrafficSign_<ContainerAllocator>>> & _arg)
  {
    this->traffic_signs = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const std::vector<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }
  Type & set__stop_lines(
    const std::vector<autodrive_msgs::msg::Stopline_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::Stopline_<ContainerAllocator>>> & _arg)
  {
    this->stop_lines = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__Detection
    std::shared_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__Detection
    std::shared_ptr<autodrive_msgs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detection != other.detection) {
      return false;
    }
    if (this->dynamic_obstacles != other.dynamic_obstacles) {
      return false;
    }
    if (this->static_obstacles != other.static_obstacles) {
      return false;
    }
    if (this->railroad_crossings != other.railroad_crossings) {
      return false;
    }
    if (this->traffic_lights != other.traffic_lights) {
      return false;
    }
    if (this->traffic_signs != other.traffic_signs) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    if (this->stop_lines != other.stop_lines) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  autodrive_msgs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
