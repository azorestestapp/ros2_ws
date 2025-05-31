// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSign_end_day
{
public:
  explicit Init_TrafficSign_end_day(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::TrafficSign end_day(::autodrive_msgs::msg::TrafficSign::_end_day_type arg)
  {
    msg_.end_day = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_start_day
{
public:
  explicit Init_TrafficSign_start_day(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_end_day start_day(::autodrive_msgs::msg::TrafficSign::_start_day_type arg)
  {
    msg_.start_day = std::move(arg);
    return Init_TrafficSign_end_day(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_end_time
{
public:
  explicit Init_TrafficSign_end_time(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_start_day end_time(::autodrive_msgs::msg::TrafficSign::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_TrafficSign_start_day(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_start_time
{
public:
  explicit Init_TrafficSign_start_time(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_end_time start_time(::autodrive_msgs::msg::TrafficSign::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_TrafficSign_end_time(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_sign_type_confidence
{
public:
  explicit Init_TrafficSign_sign_type_confidence(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_start_time sign_type_confidence(::autodrive_msgs::msg::TrafficSign::_sign_type_confidence_type arg)
  {
    msg_.sign_type_confidence = std::move(arg);
    return Init_TrafficSign_start_time(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_sign_type
{
public:
  explicit Init_TrafficSign_sign_type(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_sign_type_confidence sign_type(::autodrive_msgs::msg::TrafficSign::_sign_type_type arg)
  {
    msg_.sign_type = std::move(arg);
    return Init_TrafficSign_sign_type_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_associated_stop_line
{
public:
  explicit Init_TrafficSign_associated_stop_line(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_sign_type associated_stop_line(::autodrive_msgs::msg::TrafficSign::_associated_stop_line_type arg)
  {
    msg_.associated_stop_line = std::move(arg);
    return Init_TrafficSign_sign_type(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_associated_sign
{
public:
  explicit Init_TrafficSign_associated_sign(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_associated_stop_line associated_sign(::autodrive_msgs::msg::TrafficSign::_associated_sign_type arg)
  {
    msg_.associated_sign = std::move(arg);
    return Init_TrafficSign_associated_stop_line(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_corresponding_lane
{
public:
  explicit Init_TrafficSign_corresponding_lane(::autodrive_msgs::msg::TrafficSign & msg)
  : msg_(msg)
  {}
  Init_TrafficSign_associated_sign corresponding_lane(::autodrive_msgs::msg::TrafficSign::_corresponding_lane_type arg)
  {
    msg_.corresponding_lane = std::move(arg);
    return Init_TrafficSign_associated_sign(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

class Init_TrafficSign_detection
{
public:
  Init_TrafficSign_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSign_corresponding_lane detection(::autodrive_msgs::msg::TrafficSign::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_TrafficSign_corresponding_lane(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficSign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::TrafficSign>()
{
  return autodrive_msgs::msg::builder::Init_TrafficSign_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__BUILDER_HPP_
