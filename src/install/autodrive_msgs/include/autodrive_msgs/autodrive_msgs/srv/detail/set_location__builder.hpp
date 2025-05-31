// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/SetLocation.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/set_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLocation_Request_location
{
public:
  Init_SetLocation_Request_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::srv::SetLocation_Request location(::autodrive_msgs::srv::SetLocation_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetLocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetLocation_Request>()
{
  return autodrive_msgs::srv::builder::Init_SetLocation_Request_location();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLocation_Response_error
{
public:
  explicit Init_SetLocation_Response_error(::autodrive_msgs::srv::SetLocation_Response & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::SetLocation_Response error(::autodrive_msgs::srv::SetLocation_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetLocation_Response msg_;
};

class Init_SetLocation_Response_confirm
{
public:
  Init_SetLocation_Response_confirm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocation_Response_error confirm(::autodrive_msgs::srv::SetLocation_Response::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_SetLocation_Response_error(msg_);
  }

private:
  ::autodrive_msgs::srv::SetLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetLocation_Response>()
{
  return autodrive_msgs::srv::builder::Init_SetLocation_Response_confirm();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_LOCATION__BUILDER_HPP_
