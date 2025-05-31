// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignal_signal
{
public:
  Init_TurnSignal_signal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::msg::TurnSignal signal(::autodrive_msgs::msg::TurnSignal::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::TurnSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::TurnSignal>()
{
  return autodrive_msgs::msg::builder::Init_TurnSignal_signal();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
