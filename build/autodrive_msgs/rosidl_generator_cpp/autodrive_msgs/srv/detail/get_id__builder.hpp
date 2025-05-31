// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/get_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_GetId_Request_radius
{
public:
  explicit Init_GetId_Request_radius(::autodrive_msgs::srv::GetId_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::GetId_Request radius(::autodrive_msgs::srv::GetId_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::GetId_Request msg_;
};

class Init_GetId_Request_north
{
public:
  explicit Init_GetId_Request_north(::autodrive_msgs::srv::GetId_Request & msg)
  : msg_(msg)
  {}
  Init_GetId_Request_radius north(::autodrive_msgs::srv::GetId_Request::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_GetId_Request_radius(msg_);
  }

private:
  ::autodrive_msgs::srv::GetId_Request msg_;
};

class Init_GetId_Request_east
{
public:
  Init_GetId_Request_east()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetId_Request_north east(::autodrive_msgs::srv::GetId_Request::_east_type arg)
  {
    msg_.east = std::move(arg);
    return Init_GetId_Request_north(msg_);
  }

private:
  ::autodrive_msgs::srv::GetId_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::GetId_Request>()
{
  return autodrive_msgs::srv::builder::Init_GetId_Request_east();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_GetId_Response_lanelet_id
{
public:
  explicit Init_GetId_Response_lanelet_id(::autodrive_msgs::srv::GetId_Response & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::GetId_Response lanelet_id(::autodrive_msgs::srv::GetId_Response::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::GetId_Response msg_;
};

class Init_GetId_Response_error
{
public:
  Init_GetId_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetId_Response_lanelet_id error(::autodrive_msgs::srv::GetId_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_GetId_Response_lanelet_id(msg_);
  }

private:
  ::autodrive_msgs::srv::GetId_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::GetId_Response>()
{
  return autodrive_msgs::srv::builder::Init_GetId_Response_error();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__BUILDER_HPP_
