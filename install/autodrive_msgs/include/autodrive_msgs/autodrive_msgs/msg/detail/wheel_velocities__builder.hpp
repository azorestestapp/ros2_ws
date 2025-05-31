// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelVelocities_steering_angle
{
public:
  explicit Init_WheelVelocities_steering_angle(::autodrive_msgs::msg::WheelVelocities & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::WheelVelocities steering_angle(::autodrive_msgs::msg::WheelVelocities::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::WheelVelocities msg_;
};

class Init_WheelVelocities_rear_right_velocity
{
public:
  explicit Init_WheelVelocities_rear_right_velocity(::autodrive_msgs::msg::WheelVelocities & msg)
  : msg_(msg)
  {}
  Init_WheelVelocities_steering_angle rear_right_velocity(::autodrive_msgs::msg::WheelVelocities::_rear_right_velocity_type arg)
  {
    msg_.rear_right_velocity = std::move(arg);
    return Init_WheelVelocities_steering_angle(msg_);
  }

private:
  ::autodrive_msgs::msg::WheelVelocities msg_;
};

class Init_WheelVelocities_rear_left_velocity
{
public:
  explicit Init_WheelVelocities_rear_left_velocity(::autodrive_msgs::msg::WheelVelocities & msg)
  : msg_(msg)
  {}
  Init_WheelVelocities_rear_right_velocity rear_left_velocity(::autodrive_msgs::msg::WheelVelocities::_rear_left_velocity_type arg)
  {
    msg_.rear_left_velocity = std::move(arg);
    return Init_WheelVelocities_rear_right_velocity(msg_);
  }

private:
  ::autodrive_msgs::msg::WheelVelocities msg_;
};

class Init_WheelVelocities_front_right_velocity
{
public:
  explicit Init_WheelVelocities_front_right_velocity(::autodrive_msgs::msg::WheelVelocities & msg)
  : msg_(msg)
  {}
  Init_WheelVelocities_rear_left_velocity front_right_velocity(::autodrive_msgs::msg::WheelVelocities::_front_right_velocity_type arg)
  {
    msg_.front_right_velocity = std::move(arg);
    return Init_WheelVelocities_rear_left_velocity(msg_);
  }

private:
  ::autodrive_msgs::msg::WheelVelocities msg_;
};

class Init_WheelVelocities_front_left_velocity
{
public:
  Init_WheelVelocities_front_left_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelVelocities_front_right_velocity front_left_velocity(::autodrive_msgs::msg::WheelVelocities::_front_left_velocity_type arg)
  {
    msg_.front_left_velocity = std::move(arg);
    return Init_WheelVelocities_front_right_velocity(msg_);
  }

private:
  ::autodrive_msgs::msg::WheelVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::WheelVelocities>()
{
  return autodrive_msgs::msg::builder::Init_WheelVelocities_front_left_velocity();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
