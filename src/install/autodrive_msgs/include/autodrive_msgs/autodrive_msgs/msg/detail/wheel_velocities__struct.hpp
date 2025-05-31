// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__WheelVelocities __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__WheelVelocities __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelVelocities_
{
  using Type = WheelVelocities_<ContainerAllocator>;

  explicit WheelVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_velocity = 0.0;
      this->front_right_velocity = 0.0;
      this->rear_left_velocity = 0.0;
      this->rear_right_velocity = 0.0;
      this->steering_angle = 0.0;
    }
  }

  explicit WheelVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_velocity = 0.0;
      this->front_right_velocity = 0.0;
      this->rear_left_velocity = 0.0;
      this->rear_right_velocity = 0.0;
      this->steering_angle = 0.0;
    }
  }

  // field types and members
  using _front_left_velocity_type =
    double;
  _front_left_velocity_type front_left_velocity;
  using _front_right_velocity_type =
    double;
  _front_right_velocity_type front_right_velocity;
  using _rear_left_velocity_type =
    double;
  _rear_left_velocity_type rear_left_velocity;
  using _rear_right_velocity_type =
    double;
  _rear_right_velocity_type rear_right_velocity;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;

  // setters for named parameter idiom
  Type & set__front_left_velocity(
    const double & _arg)
  {
    this->front_left_velocity = _arg;
    return *this;
  }
  Type & set__front_right_velocity(
    const double & _arg)
  {
    this->front_right_velocity = _arg;
    return *this;
  }
  Type & set__rear_left_velocity(
    const double & _arg)
  {
    this->rear_left_velocity = _arg;
    return *this;
  }
  Type & set__rear_right_velocity(
    const double & _arg)
  {
    this->rear_right_velocity = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__WheelVelocities
    std::shared_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__WheelVelocities
    std::shared_ptr<autodrive_msgs::msg::WheelVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVelocities_ & other) const
  {
    if (this->front_left_velocity != other.front_left_velocity) {
      return false;
    }
    if (this->front_right_velocity != other.front_right_velocity) {
      return false;
    }
    if (this->rear_left_velocity != other.rear_left_velocity) {
      return false;
    }
    if (this->rear_right_velocity != other.rear_right_velocity) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVelocities_

// alias to use template instance with default allocator
using WheelVelocities =
  autodrive_msgs::msg::WheelVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
