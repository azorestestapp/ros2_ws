// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/TrajPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__STRUCT_HPP_

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
# define DEPRECATED__autodrive_msgs__msg__TrajPoint __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__TrajPoint __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajPoint_
{
  using Type = TrajPoint_<ContainerAllocator>;

  explicit TrajPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->east = 0.0;
      this->north = 0.0;
      this->speed = 0.0;
      this->lanelet_id = 0ll;
    }
  }

  explicit TrajPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->east = 0.0;
      this->north = 0.0;
      this->speed = 0.0;
      this->lanelet_id = 0ll;
    }
  }

  // field types and members
  using _east_type =
    double;
  _east_type east;
  using _north_type =
    double;
  _north_type north;
  using _speed_type =
    double;
  _speed_type speed;
  using _lanelet_id_type =
    int64_t;
  _lanelet_id_type lanelet_id;
  using _direction_type =
    autodrive_msgs::msg::Direction_<ContainerAllocator>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__east(
    const double & _arg)
  {
    this->east = _arg;
    return *this;
  }
  Type & set__north(
    const double & _arg)
  {
    this->north = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const int64_t & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__direction(
    const autodrive_msgs::msg::Direction_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::TrajPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::TrajPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrajPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrajPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__TrajPoint
    std::shared_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__TrajPoint
    std::shared_ptr<autodrive_msgs::msg::TrajPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajPoint_ & other) const
  {
    if (this->east != other.east) {
      return false;
    }
    if (this->north != other.north) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajPoint_

// alias to use template instance with default allocator
using TrajPoint =
  autodrive_msgs::msg::TrajPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__STRUCT_HPP_
