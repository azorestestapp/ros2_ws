// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_shape_confidence
{
public:
  explicit Init_TrafficLight_shape_confidence(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::TrafficLight shape_confidence(::autodrive_msgs::msg::TrafficLight::_shape_confidence_type arg)
  {
    msg_.shape_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_shape_category
{
public:
  explicit Init_TrafficLight_shape_category(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_shape_confidence shape_category(::autodrive_msgs::msg::TrafficLight::_shape_category_type arg)
  {
    msg_.shape_category = std::move(arg);
    return Init_TrafficLight_shape_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_flashing
{
public:
  explicit Init_TrafficLight_flashing(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_shape_category flashing(::autodrive_msgs::msg::TrafficLight::_flashing_type arg)
  {
    msg_.flashing = std::move(arg);
    return Init_TrafficLight_shape_category(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_right_bulb_confidence
{
public:
  explicit Init_TrafficLight_right_bulb_confidence(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_flashing right_bulb_confidence(::autodrive_msgs::msg::TrafficLight::_right_bulb_confidence_type arg)
  {
    msg_.right_bulb_confidence = std::move(arg);
    return Init_TrafficLight_flashing(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_right_turn
{
public:
  explicit Init_TrafficLight_right_turn(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_right_bulb_confidence right_turn(::autodrive_msgs::msg::TrafficLight::_right_turn_type arg)
  {
    msg_.right_turn = std::move(arg);
    return Init_TrafficLight_right_bulb_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_left_bulb_confidence
{
public:
  explicit Init_TrafficLight_left_bulb_confidence(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_right_turn left_bulb_confidence(::autodrive_msgs::msg::TrafficLight::_left_bulb_confidence_type arg)
  {
    msg_.left_bulb_confidence = std::move(arg);
    return Init_TrafficLight_right_turn(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_left_turn
{
public:
  explicit Init_TrafficLight_left_turn(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_left_bulb_confidence left_turn(::autodrive_msgs::msg::TrafficLight::_left_turn_type arg)
  {
    msg_.left_turn = std::move(arg);
    return Init_TrafficLight_left_bulb_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_main_bulb_confidence
{
public:
  explicit Init_TrafficLight_main_bulb_confidence(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_left_turn main_bulb_confidence(::autodrive_msgs::msg::TrafficLight::_main_bulb_confidence_type arg)
  {
    msg_.main_bulb_confidence = std::move(arg);
    return Init_TrafficLight_left_turn(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_main_bulb
{
public:
  explicit Init_TrafficLight_main_bulb(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_main_bulb_confidence main_bulb(::autodrive_msgs::msg::TrafficLight::_main_bulb_type arg)
  {
    msg_.main_bulb = std::move(arg);
    return Init_TrafficLight_main_bulb_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_associated_stop_line
{
public:
  explicit Init_TrafficLight_associated_stop_line(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_main_bulb associated_stop_line(::autodrive_msgs::msg::TrafficLight::_associated_stop_line_type arg)
  {
    msg_.associated_stop_line = std::move(arg);
    return Init_TrafficLight_main_bulb(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_associated_light
{
public:
  explicit Init_TrafficLight_associated_light(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_associated_stop_line associated_light(::autodrive_msgs::msg::TrafficLight::_associated_light_type arg)
  {
    msg_.associated_light = std::move(arg);
    return Init_TrafficLight_associated_stop_line(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_corresponding_lane
{
public:
  explicit Init_TrafficLight_corresponding_lane(::autodrive_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_associated_light corresponding_lane(::autodrive_msgs::msg::TrafficLight::_corresponding_lane_type arg)
  {
    msg_.corresponding_lane = std::move(arg);
    return Init_TrafficLight_associated_light(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_detection
{
public:
  Init_TrafficLight_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_corresponding_lane detection(::autodrive_msgs::msg::TrafficLight::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_TrafficLight_corresponding_lane(msg_);
  }

private:
  ::autodrive_msgs::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::TrafficLight>()
{
  return autodrive_msgs::msg::builder::Init_TrafficLight_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
