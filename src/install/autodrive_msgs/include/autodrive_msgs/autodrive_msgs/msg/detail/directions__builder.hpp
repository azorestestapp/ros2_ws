// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/directions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Directions_manoeuvres
{
public:
  explicit Init_Directions_manoeuvres(::autodrive_msgs::msg::Directions & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::Directions manoeuvres(::autodrive_msgs::msg::Directions::_manoeuvres_type arg)
  {
    msg_.manoeuvres = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Directions msg_;
};

class Init_Directions_header
{
public:
  Init_Directions_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Directions_manoeuvres header(::autodrive_msgs::msg::Directions::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Directions_manoeuvres(msg_);
  }

private:
  ::autodrive_msgs::msg::Directions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Directions>()
{
  return autodrive_msgs::msg::builder::Init_Directions_header();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__BUILDER_HPP_
