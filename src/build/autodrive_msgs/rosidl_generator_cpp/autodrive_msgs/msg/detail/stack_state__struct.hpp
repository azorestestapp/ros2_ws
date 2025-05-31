// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/StackState.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__StackState __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__StackState __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StackState_
{
  using Type = StackState_<ContainerAllocator>;

  explicit StackState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit StackState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    int8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INACTIVE =
    0;
  static constexpr int8_t STARTUP =
    1;
  static constexpr int8_t ACTIVE =
    2;
  static constexpr int8_t SHUTDOWN =
    3;

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::StackState_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::StackState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::StackState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::StackState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__StackState
    std::shared_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__StackState
    std::shared_ptr<autodrive_msgs::msg::StackState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StackState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StackState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StackState_

// alias to use template instance with default allocator
using StackState =
  autodrive_msgs::msg::StackState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StackState_<ContainerAllocator>::INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StackState_<ContainerAllocator>::STARTUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StackState_<ContainerAllocator>::ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StackState_<ContainerAllocator>::SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STACK_STATE__STRUCT_HPP_
