// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/Destination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__Destination __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__Destination __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Destination_
{
  using Type = Destination_<ContainerAllocator>;

  explicit Destination_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->east = 0.0;
      this->north = 0.0;
      this->parking = false;
      this->multiroute = false;
    }
  }

  explicit Destination_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->east = 0.0;
      this->north = 0.0;
      this->parking = false;
      this->multiroute = false;
    }
  }

  // field types and members
  using _east_type =
    double;
  _east_type east;
  using _north_type =
    double;
  _north_type north;
  using _parking_type =
    bool;
  _parking_type parking;
  using _multiroute_type =
    bool;
  _multiroute_type multiroute;

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
  Type & set__parking(
    const bool & _arg)
  {
    this->parking = _arg;
    return *this;
  }
  Type & set__multiroute(
    const bool & _arg)
  {
    this->multiroute = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::Destination_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::Destination_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Destination_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::Destination_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__Destination
    std::shared_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__Destination
    std::shared_ptr<autodrive_msgs::msg::Destination_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Destination_ & other) const
  {
    if (this->east != other.east) {
      return false;
    }
    if (this->north != other.north) {
      return false;
    }
    if (this->parking != other.parking) {
      return false;
    }
    if (this->multiroute != other.multiroute) {
      return false;
    }
    return true;
  }
  bool operator!=(const Destination_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Destination_

// alias to use template instance with default allocator
using Destination =
  autodrive_msgs::msg::Destination_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__STRUCT_HPP_
