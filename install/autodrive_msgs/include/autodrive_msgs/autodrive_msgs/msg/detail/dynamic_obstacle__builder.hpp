// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/dynamic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObstacle_dynamic_confidence
{
public:
  explicit Init_DynamicObstacle_dynamic_confidence(::autodrive_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::DynamicObstacle dynamic_confidence(::autodrive_msgs::msg::DynamicObstacle::_dynamic_confidence_type arg)
  {
    msg_.dynamic_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_obstacle_type
{
public:
  explicit Init_DynamicObstacle_obstacle_type(::autodrive_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_dynamic_confidence obstacle_type(::autodrive_msgs::msg::DynamicObstacle::_obstacle_type_type arg)
  {
    msg_.obstacle_type = std::move(arg);
    return Init_DynamicObstacle_dynamic_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_detection
{
public:
  Init_DynamicObstacle_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObstacle_obstacle_type detection(::autodrive_msgs::msg::DynamicObstacle::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_DynamicObstacle_obstacle_type(msg_);
  }

private:
  ::autodrive_msgs::msg::DynamicObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::DynamicObstacle>()
{
  return autodrive_msgs::msg::builder::Init_DynamicObstacle_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_
