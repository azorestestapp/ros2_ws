// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/Manoeuvre.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'direction'
#include "autodrive_msgs/msg/detail/direction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__Manoeuvre __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__Manoeuvre __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Manoeuvre_
{
  using Type = Manoeuvre_<ContainerAllocator>;

  explicit Manoeuvre_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    (void)_init;
  }

  explicit Manoeuvre_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _direction_type =
    autodrive_msgs::msg::Direction_<ContainerAllocator>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const autodrive_msgs::msg::Direction_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__Manoeuvre
    std::shared_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__Manoeuvre
    std::shared_ptr<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Manoeuvre_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Manoeuvre_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Manoeuvre_

// alias to use template instance with default allocator
using Manoeuvre =
  autodrive_msgs::msg::Manoeuvre_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__STRUCT_HPP_
