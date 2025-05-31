// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_HPP_

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
// Member 'manoeuvres'
#include "autodrive_msgs/msg/detail/manoeuvre__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__Directions __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__Directions __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Directions_
{
  using Type = Directions_<ContainerAllocator>;

  explicit Directions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Directions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _manoeuvres_type =
    std::vector<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>>;
  _manoeuvres_type manoeuvres;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manoeuvres(
    const std::vector<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autodrive_msgs::msg::Manoeuvre_<ContainerAllocator>>> & _arg)
  {
    this->manoeuvres = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::Directions_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::Directions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Directions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Directions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__Directions
    std::shared_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__Directions
    std::shared_ptr<autodrive_msgs::msg::Directions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Directions_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manoeuvres != other.manoeuvres) {
      return false;
    }
    return true;
  }
  bool operator!=(const Directions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Directions_

// alias to use template instance with default allocator
using Directions =
  autodrive_msgs::msg::Directions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__STRUCT_HPP_
