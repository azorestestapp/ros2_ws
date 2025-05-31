// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/mpc_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_MPCControl_accel_3
{
public:
  explicit Init_MPCControl_accel_3(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::MPCControl accel_3(::autodrive_msgs::msg::MPCControl::_accel_3_type arg)
  {
    msg_.accel_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_accel_2
{
public:
  explicit Init_MPCControl_accel_2(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_accel_3 accel_2(::autodrive_msgs::msg::MPCControl::_accel_2_type arg)
  {
    msg_.accel_2 = std::move(arg);
    return Init_MPCControl_accel_3(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_accel_1
{
public:
  explicit Init_MPCControl_accel_1(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_accel_2 accel_1(::autodrive_msgs::msg::MPCControl::_accel_1_type arg)
  {
    msg_.accel_1 = std::move(arg);
    return Init_MPCControl_accel_2(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_steering_angle_3
{
public:
  explicit Init_MPCControl_steering_angle_3(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_accel_1 steering_angle_3(::autodrive_msgs::msg::MPCControl::_steering_angle_3_type arg)
  {
    msg_.steering_angle_3 = std::move(arg);
    return Init_MPCControl_accel_1(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_steering_angle_2
{
public:
  explicit Init_MPCControl_steering_angle_2(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_steering_angle_3 steering_angle_2(::autodrive_msgs::msg::MPCControl::_steering_angle_2_type arg)
  {
    msg_.steering_angle_2 = std::move(arg);
    return Init_MPCControl_steering_angle_3(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_steering_angle_1
{
public:
  explicit Init_MPCControl_steering_angle_1(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_steering_angle_2 steering_angle_1(::autodrive_msgs::msg::MPCControl::_steering_angle_1_type arg)
  {
    msg_.steering_angle_1 = std::move(arg);
    return Init_MPCControl_steering_angle_2(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_duration
{
public:
  explicit Init_MPCControl_duration(::autodrive_msgs::msg::MPCControl & msg)
  : msg_(msg)
  {}
  Init_MPCControl_steering_angle_1 duration(::autodrive_msgs::msg::MPCControl::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MPCControl_steering_angle_1(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

class Init_MPCControl_header
{
public:
  Init_MPCControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MPCControl_duration header(::autodrive_msgs::msg::MPCControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MPCControl_duration(msg_);
  }

private:
  ::autodrive_msgs::msg::MPCControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::MPCControl>()
{
  return autodrive_msgs::msg::builder::Init_MPCControl_header();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__BUILDER_HPP_
