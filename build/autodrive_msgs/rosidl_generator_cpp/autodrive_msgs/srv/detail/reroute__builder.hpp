// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/Reroute.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/reroute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_Reroute_Request_end_lanelet_id
{
public:
  explicit Init_Reroute_Request_end_lanelet_id(::autodrive_msgs::srv::Reroute_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::Reroute_Request end_lanelet_id(::autodrive_msgs::srv::Reroute_Request::_end_lanelet_id_type arg)
  {
    msg_.end_lanelet_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::Reroute_Request msg_;
};

class Init_Reroute_Request_start_lanelet_id
{
public:
  Init_Reroute_Request_start_lanelet_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reroute_Request_end_lanelet_id start_lanelet_id(::autodrive_msgs::srv::Reroute_Request::_start_lanelet_id_type arg)
  {
    msg_.start_lanelet_id = std::move(arg);
    return Init_Reroute_Request_end_lanelet_id(msg_);
  }

private:
  ::autodrive_msgs::srv::Reroute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::Reroute_Request>()
{
  return autodrive_msgs::srv::builder::Init_Reroute_Request_start_lanelet_id();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_Reroute_Response_error
{
public:
  explicit Init_Reroute_Response_error(::autodrive_msgs::srv::Reroute_Response & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::Reroute_Response error(::autodrive_msgs::srv::Reroute_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::Reroute_Response msg_;
};

class Init_Reroute_Response_confirm
{
public:
  Init_Reroute_Response_confirm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reroute_Response_error confirm(::autodrive_msgs::srv::Reroute_Response::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_Reroute_Response_error(msg_);
  }

private:
  ::autodrive_msgs::srv::Reroute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::Reroute_Response>()
{
  return autodrive_msgs::srv::builder::Init_Reroute_Response_confirm();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__BUILDER_HPP_
