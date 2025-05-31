// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/Stopline.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_HPP_

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
# define DEPRECATED__autodrive_msgs__msg__Stopline __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__Stopline __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Stopline_
{
  using Type = Stopline_<ContainerAllocator>;

  explicit Stopline_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stopline_confidence = 0.0f;
    }
  }

  explicit Stopline_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stopline_confidence = 0.0f;
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _stopline_confidence_type =
    float;
  _stopline_confidence_type stopline_confidence;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__stopline_confidence(
    const float & _arg)
  {
    this->stopline_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::Stopline_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::Stopline_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Stopline_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Stopline_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__Stopline
    std::shared_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__Stopline
    std::shared_ptr<autodrive_msgs::msg::Stopline_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stopline_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->stopline_confidence != other.stopline_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stopline_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stopline_

// alias to use template instance with default allocator
using Stopline =
  autodrive_msgs::msg::Stopline_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__STRUCT_HPP_
