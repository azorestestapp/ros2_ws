// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/LLLC.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__LLLC__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__LLLC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/lllc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_LLLC_decel
{
public:
  explicit Init_LLLC_decel(::autodrive_msgs::msg::LLLC & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::LLLC decel(::autodrive_msgs::msg::LLLC::_decel_type arg)
  {
    msg_.decel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::LLLC msg_;
};

class Init_LLLC_torque
{
public:
  Init_LLLC_torque()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLLC_decel torque(::autodrive_msgs::msg::LLLC::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_LLLC_decel(msg_);
  }

private:
  ::autodrive_msgs::msg::LLLC msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::LLLC>()
{
  return autodrive_msgs::msg::builder::Init_LLLC_torque();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__LLLC__BUILDER_HPP_
