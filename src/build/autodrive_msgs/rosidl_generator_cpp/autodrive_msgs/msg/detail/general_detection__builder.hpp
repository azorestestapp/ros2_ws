// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/GeneralDetection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/general_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_GeneralDetection_id
{
public:
  explicit Init_GeneralDetection_id(::autodrive_msgs::msg::GeneralDetection & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::GeneralDetection id(::autodrive_msgs::msg::GeneralDetection::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::GeneralDetection msg_;
};

class Init_GeneralDetection_velocity
{
public:
  explicit Init_GeneralDetection_velocity(::autodrive_msgs::msg::GeneralDetection & msg)
  : msg_(msg)
  {}
  Init_GeneralDetection_id velocity(::autodrive_msgs::msg::GeneralDetection::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GeneralDetection_id(msg_);
  }

private:
  ::autodrive_msgs::msg::GeneralDetection msg_;
};

class Init_GeneralDetection_bounding_box
{
public:
  Init_GeneralDetection_bounding_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeneralDetection_velocity bounding_box(::autodrive_msgs::msg::GeneralDetection::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_GeneralDetection_velocity(msg_);
  }

private:
  ::autodrive_msgs::msg::GeneralDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::GeneralDetection>()
{
  return autodrive_msgs::msg::builder::Init_GeneralDetection_bounding_box();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__BUILDER_HPP_
