// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/TrajPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/traj_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajPoint_direction
{
public:
  explicit Init_TrajPoint_direction(::autodrive_msgs::msg::TrajPoint & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::TrajPoint direction(::autodrive_msgs::msg::TrajPoint::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::TrajPoint msg_;
};

class Init_TrajPoint_lanelet_id
{
public:
  explicit Init_TrajPoint_lanelet_id(::autodrive_msgs::msg::TrajPoint & msg)
  : msg_(msg)
  {}
  Init_TrajPoint_direction lanelet_id(::autodrive_msgs::msg::TrajPoint::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_TrajPoint_direction(msg_);
  }

private:
  ::autodrive_msgs::msg::TrajPoint msg_;
};

class Init_TrajPoint_speed
{
public:
  explicit Init_TrajPoint_speed(::autodrive_msgs::msg::TrajPoint & msg)
  : msg_(msg)
  {}
  Init_TrajPoint_lanelet_id speed(::autodrive_msgs::msg::TrajPoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_TrajPoint_lanelet_id(msg_);
  }

private:
  ::autodrive_msgs::msg::TrajPoint msg_;
};

class Init_TrajPoint_north
{
public:
  explicit Init_TrajPoint_north(::autodrive_msgs::msg::TrajPoint & msg)
  : msg_(msg)
  {}
  Init_TrajPoint_speed north(::autodrive_msgs::msg::TrajPoint::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_TrajPoint_speed(msg_);
  }

private:
  ::autodrive_msgs::msg::TrajPoint msg_;
};

class Init_TrajPoint_east
{
public:
  Init_TrajPoint_east()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajPoint_north east(::autodrive_msgs::msg::TrajPoint::_east_type arg)
  {
    msg_.east = std::move(arg);
    return Init_TrajPoint_north(msg_);
  }

private:
  ::autodrive_msgs::msg::TrajPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::TrajPoint>()
{
  return autodrive_msgs::msg::builder::Init_TrajPoint_east();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAJ_POINT__BUILDER_HPP_
