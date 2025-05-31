// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/RailroadCrossing.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/railroad_crossing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_RailroadCrossing_stop_line
{
public:
  explicit Init_RailroadCrossing_stop_line(::autodrive_msgs::msg::RailroadCrossing & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::RailroadCrossing stop_line(::autodrive_msgs::msg::RailroadCrossing::_stop_line_type arg)
  {
    msg_.stop_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

class Init_RailroadCrossing_railroad_sign
{
public:
  explicit Init_RailroadCrossing_railroad_sign(::autodrive_msgs::msg::RailroadCrossing & msg)
  : msg_(msg)
  {}
  Init_RailroadCrossing_stop_line railroad_sign(::autodrive_msgs::msg::RailroadCrossing::_railroad_sign_type arg)
  {
    msg_.railroad_sign = std::move(arg);
    return Init_RailroadCrossing_stop_line(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

class Init_RailroadCrossing_bar_activity_confidence
{
public:
  explicit Init_RailroadCrossing_bar_activity_confidence(::autodrive_msgs::msg::RailroadCrossing & msg)
  : msg_(msg)
  {}
  Init_RailroadCrossing_railroad_sign bar_activity_confidence(::autodrive_msgs::msg::RailroadCrossing::_bar_activity_confidence_type arg)
  {
    msg_.bar_activity_confidence = std::move(arg);
    return Init_RailroadCrossing_railroad_sign(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

class Init_RailroadCrossing_active
{
public:
  explicit Init_RailroadCrossing_active(::autodrive_msgs::msg::RailroadCrossing & msg)
  : msg_(msg)
  {}
  Init_RailroadCrossing_bar_activity_confidence active(::autodrive_msgs::msg::RailroadCrossing::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_RailroadCrossing_bar_activity_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

class Init_RailroadCrossing_bar
{
public:
  explicit Init_RailroadCrossing_bar(::autodrive_msgs::msg::RailroadCrossing & msg)
  : msg_(msg)
  {}
  Init_RailroadCrossing_active bar(::autodrive_msgs::msg::RailroadCrossing::_bar_type arg)
  {
    msg_.bar = std::move(arg);
    return Init_RailroadCrossing_active(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

class Init_RailroadCrossing_detection
{
public:
  Init_RailroadCrossing_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RailroadCrossing_bar detection(::autodrive_msgs::msg::RailroadCrossing::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_RailroadCrossing_bar(msg_);
  }

private:
  ::autodrive_msgs::msg::RailroadCrossing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::RailroadCrossing>()
{
  return autodrive_msgs::msg::builder::Init_RailroadCrossing_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__RAILROAD_CROSSING__BUILDER_HPP_
