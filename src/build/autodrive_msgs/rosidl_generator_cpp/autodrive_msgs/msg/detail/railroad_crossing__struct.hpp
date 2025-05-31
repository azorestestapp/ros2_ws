// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/RailroadCrossing.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_HPP_

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
# define DEPRECATED__autodrive_msgs__msg__RailroadCrossing __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__RailroadCrossing __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RailroadCrossing_
{
  using Type = RailroadCrossing_<ContainerAllocator>;

  explicit RailroadCrossing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bar = 0ull;
      this->active = false;
      this->bar_activity_confidence = 0.0f;
      this->railroad_sign = 0ull;
      this->stop_line = 0ull;
    }
  }

  explicit RailroadCrossing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bar = 0ull;
      this->active = false;
      this->bar_activity_confidence = 0.0f;
      this->railroad_sign = 0ull;
      this->stop_line = 0ull;
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _bar_type =
    uint64_t;
  _bar_type bar;
  using _active_type =
    bool;
  _active_type active;
  using _bar_activity_confidence_type =
    float;
  _bar_activity_confidence_type bar_activity_confidence;
  using _railroad_sign_type =
    uint64_t;
  _railroad_sign_type railroad_sign;
  using _stop_line_type =
    uint64_t;
  _stop_line_type stop_line;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__bar(
    const uint64_t & _arg)
  {
    this->bar = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__bar_activity_confidence(
    const float & _arg)
  {
    this->bar_activity_confidence = _arg;
    return *this;
  }
  Type & set__railroad_sign(
    const uint64_t & _arg)
  {
    this->railroad_sign = _arg;
    return *this;
  }
  Type & set__stop_line(
    const uint64_t & _arg)
  {
    this->stop_line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__RailroadCrossing
    std::shared_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__RailroadCrossing
    std::shared_ptr<autodrive_msgs::msg::RailroadCrossing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RailroadCrossing_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->bar != other.bar) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->bar_activity_confidence != other.bar_activity_confidence) {
      return false;
    }
    if (this->railroad_sign != other.railroad_sign) {
      return false;
    }
    if (this->stop_line != other.stop_line) {
      return false;
    }
    return true;
  }
  bool operator!=(const RailroadCrossing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RailroadCrossing_

// alias to use template instance with default allocator
using RailroadCrossing =
  autodrive_msgs::msg::RailroadCrossing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__STRUCT_HPP_
