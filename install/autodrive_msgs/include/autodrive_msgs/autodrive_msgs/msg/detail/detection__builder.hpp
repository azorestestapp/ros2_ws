// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Detection_stop_lines
{
public:
  explicit Init_Detection_stop_lines(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::Detection stop_lines(::autodrive_msgs::msg::Detection::_stop_lines_type arg)
  {
    msg_.stop_lines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_speed_limits
{
public:
  explicit Init_Detection_speed_limits(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_stop_lines speed_limits(::autodrive_msgs::msg::Detection::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return Init_Detection_stop_lines(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_traffic_signs
{
public:
  explicit Init_Detection_traffic_signs(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_speed_limits traffic_signs(::autodrive_msgs::msg::Detection::_traffic_signs_type arg)
  {
    msg_.traffic_signs = std::move(arg);
    return Init_Detection_speed_limits(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_traffic_lights
{
public:
  explicit Init_Detection_traffic_lights(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_traffic_signs traffic_lights(::autodrive_msgs::msg::Detection::_traffic_lights_type arg)
  {
    msg_.traffic_lights = std::move(arg);
    return Init_Detection_traffic_signs(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_railroad_crossings
{
public:
  explicit Init_Detection_railroad_crossings(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_traffic_lights railroad_crossings(::autodrive_msgs::msg::Detection::_railroad_crossings_type arg)
  {
    msg_.railroad_crossings = std::move(arg);
    return Init_Detection_traffic_lights(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_static_obstacles
{
public:
  explicit Init_Detection_static_obstacles(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_railroad_crossings static_obstacles(::autodrive_msgs::msg::Detection::_static_obstacles_type arg)
  {
    msg_.static_obstacles = std::move(arg);
    return Init_Detection_railroad_crossings(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_dynamic_obstacles
{
public:
  explicit Init_Detection_dynamic_obstacles(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_static_obstacles dynamic_obstacles(::autodrive_msgs::msg::Detection::_dynamic_obstacles_type arg)
  {
    msg_.dynamic_obstacles = std::move(arg);
    return Init_Detection_static_obstacles(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_detection
{
public:
  explicit Init_Detection_detection(::autodrive_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_dynamic_obstacles detection(::autodrive_msgs::msg::Detection::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_Detection_dynamic_obstacles(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

class Init_Detection_header
{
public:
  Init_Detection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_detection header(::autodrive_msgs::msg::Detection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection_detection(msg_);
  }

private:
  ::autodrive_msgs::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Detection>()
{
  return autodrive_msgs::msg::builder::Init_Detection_header();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
