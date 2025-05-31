// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Stopline.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/stopline__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Stopline_stopline_confidence
{
public:
  explicit Init_Stopline_stopline_confidence(::autodrive_msgs::msg::Stopline & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::Stopline stopline_confidence(::autodrive_msgs::msg::Stopline::_stopline_confidence_type arg)
  {
    msg_.stopline_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Stopline msg_;
};

class Init_Stopline_detection
{
public:
  Init_Stopline_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stopline_stopline_confidence detection(::autodrive_msgs::msg::Stopline::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_Stopline_stopline_confidence(msg_);
  }

private:
  ::autodrive_msgs::msg::Stopline msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Stopline>()
{
  return autodrive_msgs::msg::builder::Init_Stopline_detection();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STOPLINE__BUILDER_HPP_
