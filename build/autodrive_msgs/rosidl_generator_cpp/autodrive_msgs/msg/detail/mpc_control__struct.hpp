// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__MPCControl __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__MPCControl __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPCControl_
{
  using Type = MPCControl_<ContainerAllocator>;

  explicit MPCControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->steering_angle_1 = 0.0;
      this->steering_angle_2 = 0.0;
      this->steering_angle_3 = 0.0;
      this->accel_1 = 0.0;
      this->accel_2 = 0.0;
      this->accel_3 = 0.0;
    }
  }

  explicit MPCControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->steering_angle_1 = 0.0;
      this->steering_angle_2 = 0.0;
      this->steering_angle_3 = 0.0;
      this->accel_1 = 0.0;
      this->accel_2 = 0.0;
      this->accel_3 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _duration_type =
    double;
  _duration_type duration;
  using _steering_angle_1_type =
    double;
  _steering_angle_1_type steering_angle_1;
  using _steering_angle_2_type =
    double;
  _steering_angle_2_type steering_angle_2;
  using _steering_angle_3_type =
    double;
  _steering_angle_3_type steering_angle_3;
  using _accel_1_type =
    double;
  _accel_1_type accel_1;
  using _accel_2_type =
    double;
  _accel_2_type accel_2;
  using _accel_3_type =
    double;
  _accel_3_type accel_3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__steering_angle_1(
    const double & _arg)
  {
    this->steering_angle_1 = _arg;
    return *this;
  }
  Type & set__steering_angle_2(
    const double & _arg)
  {
    this->steering_angle_2 = _arg;
    return *this;
  }
  Type & set__steering_angle_3(
    const double & _arg)
  {
    this->steering_angle_3 = _arg;
    return *this;
  }
  Type & set__accel_1(
    const double & _arg)
  {
    this->accel_1 = _arg;
    return *this;
  }
  Type & set__accel_2(
    const double & _arg)
  {
    this->accel_2 = _arg;
    return *this;
  }
  Type & set__accel_3(
    const double & _arg)
  {
    this->accel_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::MPCControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::MPCControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::MPCControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::MPCControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__MPCControl
    std::shared_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__MPCControl
    std::shared_ptr<autodrive_msgs::msg::MPCControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPCControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->steering_angle_1 != other.steering_angle_1) {
      return false;
    }
    if (this->steering_angle_2 != other.steering_angle_2) {
      return false;
    }
    if (this->steering_angle_3 != other.steering_angle_3) {
      return false;
    }
    if (this->accel_1 != other.accel_1) {
      return false;
    }
    if (this->accel_2 != other.accel_2) {
      return false;
    }
    if (this->accel_3 != other.accel_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPCControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPCControl_

// alias to use template instance with default allocator
using MPCControl =
  autodrive_msgs::msg::MPCControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__STRUCT_HPP_
