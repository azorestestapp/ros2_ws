// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/speed_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimit_speed_limit_unit_confidence
{
public:
  explicit Init_SpeedLimit_speed_limit_unit_confidence(::autodrive_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::SpeedLimit speed_limit_unit_confidence(::autodrive_msgs::msg::SpeedLimit::_speed_limit_unit_confidence_type arg)
  {
    msg_.speed_limit_unit_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_unit
{
public:
  explicit Init_SpeedLimit_unit(::autodrive_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  Init_SpeedLimit_speed_limit_unit_confidence unit(::autodrive_msgs::msg::SpeedLimit::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_SpeedLimit_speed_limit_unit_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_speed_limit_confidence
{
public:
  explicit Init_SpeedLimit_speed_limit_confidence(::autodrive_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  Init_SpeedLimit_unit speed_limit_confidence(::autodrive_msgs::msg::SpeedLimit::_speed_limit_confidence_type arg)
  {
    msg_.speed_limit_confidence = std::move(arg);
    return Init_SpeedLimit_unit(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_min_speed
{
public:
  explicit Init_SpeedLimit_min_speed(::autodrive_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  Init_SpeedLimit_speed_limit_confidence min_speed(::autodrive_msgs::msg::SpeedLimit::_min_speed_type arg)
  {
    msg_.min_speed = std::move(arg);
    return Init_SpeedLimit_speed_limit_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_max_speed
{
public:
  explicit Init_SpeedLimit_max_speed(::autodrive_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  Init_SpeedLimit_min_speed max_speed(::autodrive_msgs::msg::SpeedLimit::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_SpeedLimit_min_speed(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_detection
{
public:
  Init_SpeedLimit_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedLimit_max_speed detection(::autodrive_msgs::msg::SpeedLimit::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_SpeedLimit_max_speed(msg_);
  }

private:
  ::autodrive_msgs::msg::SpeedLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::SpeedLimit>()
{
  return autodrive_msgs::msg::builder::Init_SpeedLimit_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
