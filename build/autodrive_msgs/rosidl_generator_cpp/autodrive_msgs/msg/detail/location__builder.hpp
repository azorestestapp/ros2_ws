// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_Location_height
{
public:
  explicit Init_Location_height(::autodrive_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::Location height(::autodrive_msgs::msg::Location::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::Location msg_;
};

class Init_Location_longitude
{
public:
  explicit Init_Location_longitude(::autodrive_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_height longitude(::autodrive_msgs::msg::Location::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Location_height(msg_);
  }

private:
  ::autodrive_msgs::msg::Location msg_;
};

class Init_Location_latitude
{
public:
  explicit Init_Location_latitude(::autodrive_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_longitude latitude(::autodrive_msgs::msg::Location::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Location_longitude(msg_);
  }

private:
  ::autodrive_msgs::msg::Location msg_;
};

class Init_Location_location
{
public:
  Init_Location_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_latitude location(::autodrive_msgs::msg::Location::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_Location_latitude(msg_);
  }

private:
  ::autodrive_msgs::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::Location>()
{
  return autodrive_msgs::msg::builder::Init_Location_location();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
