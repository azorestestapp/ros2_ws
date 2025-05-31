// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Direction_type
{
public:
  Init_Direction_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::msg::Direction type(::autodrive_msgs::msg::Direction::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Direction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Direction>()
{
  return autodrive_msgs::msg::builder::Init_Direction_type();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTION__BUILDER_HPP_
