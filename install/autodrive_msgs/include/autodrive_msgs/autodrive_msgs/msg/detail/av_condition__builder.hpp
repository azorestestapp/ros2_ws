// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/AVCondition.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/av_condition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_AVCondition_passed
{
public:
  explicit Init_AVCondition_passed(::autodrive_msgs::msg::AVCondition & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::AVCondition passed(::autodrive_msgs::msg::AVCondition::_passed_type arg)
  {
    msg_.passed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::AVCondition msg_;
};

class Init_AVCondition_condition
{
public:
  Init_AVCondition_condition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AVCondition_passed condition(::autodrive_msgs::msg::AVCondition::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return Init_AVCondition_passed(msg_);
  }

private:
  ::autodrive_msgs::msg::AVCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::AVCondition>()
{
  return autodrive_msgs::msg::builder::Init_AVCondition_condition();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__BUILDER_HPP_
