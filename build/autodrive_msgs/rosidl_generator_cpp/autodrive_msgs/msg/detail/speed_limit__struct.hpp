// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_

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
# define DEPRECATED__autodrive_msgs__msg__SpeedLimit __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__SpeedLimit __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimit_
{
  using Type = SpeedLimit_<ContainerAllocator>;

  explicit SpeedLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0ul;
      this->min_speed = 0ul;
      this->speed_limit_confidence = 0.0f;
      this->unit = 0ul;
      this->speed_limit_unit_confidence = 0.0f;
    }
  }

  explicit SpeedLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0ul;
      this->min_speed = 0ul;
      this->speed_limit_confidence = 0.0f;
      this->unit = 0ul;
      this->speed_limit_unit_confidence = 0.0f;
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _max_speed_type =
    uint32_t;
  _max_speed_type max_speed;
  using _min_speed_type =
    uint32_t;
  _min_speed_type min_speed;
  using _speed_limit_confidence_type =
    float;
  _speed_limit_confidence_type speed_limit_confidence;
  using _unit_type =
    uint32_t;
  _unit_type unit;
  using _speed_limit_unit_confidence_type =
    float;
  _speed_limit_unit_confidence_type speed_limit_unit_confidence;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__max_speed(
    const uint32_t & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__min_speed(
    const uint32_t & _arg)
  {
    this->min_speed = _arg;
    return *this;
  }
  Type & set__speed_limit_confidence(
    const float & _arg)
  {
    this->speed_limit_confidence = _arg;
    return *this;
  }
  Type & set__unit(
    const uint32_t & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__speed_limit_unit_confidence(
    const float & _arg)
  {
    this->speed_limit_unit_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MPS =
    0u;
  static constexpr uint32_t KPH =
    1u;
  static constexpr uint32_t MPH =
    2u;

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__SpeedLimit
    std::shared_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__SpeedLimit
    std::shared_ptr<autodrive_msgs::msg::SpeedLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimit_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->min_speed != other.min_speed) {
      return false;
    }
    if (this->speed_limit_confidence != other.speed_limit_confidence) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->speed_limit_unit_confidence != other.speed_limit_unit_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimit_

// alias to use template instance with default allocator
using SpeedLimit =
  autodrive_msgs::msg::SpeedLimit_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SpeedLimit_<ContainerAllocator>::MPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SpeedLimit_<ContainerAllocator>::KPH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SpeedLimit_<ContainerAllocator>::MPH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
