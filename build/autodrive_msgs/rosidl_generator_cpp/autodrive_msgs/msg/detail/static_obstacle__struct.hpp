// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__StaticObstacle __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__StaticObstacle __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaticObstacle_
{
  using Type = StaticObstacle_<ContainerAllocator>;

  explicit StaticObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_type = 0;
      this->static_obstacle_confidence = 0.0f;
    }
  }

  explicit StaticObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_type = 0;
      this->static_obstacle_confidence = 0.0f;
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _obstacle_type_type =
    int8_t;
  _obstacle_type_type obstacle_type;
  using _static_obstacle_confidence_type =
    float;
  _static_obstacle_confidence_type static_obstacle_confidence;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__obstacle_type(
    const int8_t & _arg)
  {
    this->obstacle_type = _arg;
    return *this;
  }
  Type & set__static_obstacle_confidence(
    const float & _arg)
  {
    this->static_obstacle_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TRAFFIC_CONE =
    0;
  static constexpr int8_t BARRIER =
    1;
  static constexpr int8_t BIKE_LANE_PROTECTOR =
    2;
  static constexpr int8_t SPEED_BUMP =
    3;
  static constexpr int8_t MISC =
    4;

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__StaticObstacle
    std::shared_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__StaticObstacle
    std::shared_ptr<autodrive_msgs::msg::StaticObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaticObstacle_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->obstacle_type != other.obstacle_type) {
      return false;
    }
    if (this->static_obstacle_confidence != other.static_obstacle_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaticObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaticObstacle_

// alias to use template instance with default allocator
using StaticObstacle =
  autodrive_msgs::msg::StaticObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaticObstacle_<ContainerAllocator>::TRAFFIC_CONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaticObstacle_<ContainerAllocator>::BARRIER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaticObstacle_<ContainerAllocator>::BIKE_LANE_PROTECTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaticObstacle_<ContainerAllocator>::SPEED_BUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaticObstacle_<ContainerAllocator>::MISC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_
