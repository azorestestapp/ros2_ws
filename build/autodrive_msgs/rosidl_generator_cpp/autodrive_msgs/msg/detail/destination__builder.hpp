// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Destination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/destination__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Destination_multiroute
{
public:
  explicit Init_Destination_multiroute(::autodrive_msgs::msg::Destination & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::Destination multiroute(::autodrive_msgs::msg::Destination::_multiroute_type arg)
  {
    msg_.multiroute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Destination msg_;
};

class Init_Destination_parking
{
public:
  explicit Init_Destination_parking(::autodrive_msgs::msg::Destination & msg)
  : msg_(msg)
  {}
  Init_Destination_multiroute parking(::autodrive_msgs::msg::Destination::_parking_type arg)
  {
    msg_.parking = std::move(arg);
    return Init_Destination_multiroute(msg_);
  }

private:
  ::autodrive_msgs::msg::Destination msg_;
};

class Init_Destination_north
{
public:
  explicit Init_Destination_north(::autodrive_msgs::msg::Destination & msg)
  : msg_(msg)
  {}
  Init_Destination_parking north(::autodrive_msgs::msg::Destination::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_Destination_parking(msg_);
  }

private:
  ::autodrive_msgs::msg::Destination msg_;
};

class Init_Destination_east
{
public:
  Init_Destination_east()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Destination_north east(::autodrive_msgs::msg::Destination::_east_type arg)
  {
    msg_.east = std::move(arg);
    return Init_Destination_north(msg_);
  }

private:
  ::autodrive_msgs::msg::Destination msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Destination>()
{
  return autodrive_msgs::msg::builder::Init_Destination_east();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__BUILDER_HPP_
