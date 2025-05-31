// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Manoeuvre.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/manoeuvre__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Manoeuvre_direction
{
public:
  Init_Manoeuvre_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::msg::Manoeuvre direction(::autodrive_msgs::msg::Manoeuvre::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Manoeuvre msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Manoeuvre>()
{
  return autodrive_msgs::msg::builder::Init_Manoeuvre_direction();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__BUILDER_HPP_
