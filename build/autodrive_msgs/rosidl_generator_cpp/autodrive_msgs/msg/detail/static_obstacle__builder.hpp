// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/static_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_StaticObstacle_static_obstacle_confidence
{
public:
  explicit Init_StaticObstacle_static_obstacle_confidence(::autodrive_msgs::msg::StaticObstacle & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::StaticObstacle static_obstacle_confidence(::autodrive_msgs::msg::StaticObstacle::_static_obstacle_confidence_type arg)
  {
    msg_.static_obstacle_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::StaticObstacle msg_;
};

class Init_StaticObstacle_obstacle_type
{
public:
  explicit Init_StaticObstacle_obstacle_type(::autodrive_msgs::msg::StaticObstacle & msg)
  : msg_(msg)
  {}
  Init_StaticObstacle_static_obstacle_confidence obstacle_type(::autodrive_msgs::msg::StaticObstacle::_obstacle_type_type arg)
  {
    msg_.obstacle_type = std::move(arg);
    return Init_StaticObstacle_static_obstacle_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::StaticObstacle msg_;
};

class Init_StaticObstacle_detection
{
public:
  Init_StaticObstacle_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaticObstacle_obstacle_type detection(::autodrive_msgs::msg::StaticObstacle::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_StaticObstacle_obstacle_type(msg_);
  }

private:
  ::autodrive_msgs::msg::StaticObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::StaticObstacle>()
{
  return autodrive_msgs::msg::builder::Init_StaticObstacle_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_
