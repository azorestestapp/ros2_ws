// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/LLLC.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__LLLC __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__LLLC __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LLLC_
{
  using Type = LLLC_<ContainerAllocator>;

  explicit LLLC_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque = 0.0;
      this->decel = 0.0;
    }
  }

  explicit LLLC_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque = 0.0;
      this->decel = 0.0;
    }
  }

  // field types and members
  using _torque_type =
    double;
  _torque_type torque;
  using _decel_type =
    double;
  _decel_type decel;

  // setters for named parameter idiom
  Type & set__torque(
    const double & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__decel(
    const double & _arg)
  {
    this->decel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::LLLC_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::LLLC_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::LLLC_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::LLLC_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__LLLC
    std::shared_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__LLLC
    std::shared_ptr<autodrive_msgs::msg::LLLC_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LLLC_ & other) const
  {
    if (this->torque != other.torque) {
      return false;
    }
    if (this->decel != other.decel) {
      return false;
    }
    return true;
  }
  bool operator!=(const LLLC_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LLLC_

// alias to use template instance with default allocator
using LLLC =
  autodrive_msgs::msg::LLLC_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__LLLC__STRUCT_HPP_
