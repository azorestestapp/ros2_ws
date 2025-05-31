// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/BlockedLanelets.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/blocked_lanelets__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockedLanelets_Request_blocked
{
public:
  Init_BlockedLanelets_Request_blocked()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::srv::BlockedLanelets_Request blocked(::autodrive_msgs::srv::BlockedLanelets_Request::_blocked_type arg)
  {
    msg_.blocked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::BlockedLanelets_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::BlockedLanelets_Request>()
{
  return autodrive_msgs::srv::builder::Init_BlockedLanelets_Request_blocked();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockedLanelets_Response_error
{
public:
  Init_BlockedLanelets_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::srv::BlockedLanelets_Response error(::autodrive_msgs::srv::BlockedLanelets_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::BlockedLanelets_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::BlockedLanelets_Response>()
{
  return autodrive_msgs::srv::builder::Init_BlockedLanelets_Response_error();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__BUILDER_HPP_
