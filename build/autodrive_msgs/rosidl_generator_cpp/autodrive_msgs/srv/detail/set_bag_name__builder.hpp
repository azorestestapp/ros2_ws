// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/SetBagName.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/set_bag_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBagName_Request_use_custom
{
public:
  explicit Init_SetBagName_Request_use_custom(::autodrive_msgs::srv::SetBagName_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::SetBagName_Request use_custom(::autodrive_msgs::srv::SetBagName_Request::_use_custom_type arg)
  {
    msg_.use_custom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetBagName_Request msg_;
};

class Init_SetBagName_Request_bag_name
{
public:
  Init_SetBagName_Request_bag_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBagName_Request_use_custom bag_name(::autodrive_msgs::srv::SetBagName_Request::_bag_name_type arg)
  {
    msg_.bag_name = std::move(arg);
    return Init_SetBagName_Request_use_custom(msg_);
  }

private:
  ::autodrive_msgs::srv::SetBagName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetBagName_Request>()
{
  return autodrive_msgs::srv::builder::Init_SetBagName_Request_bag_name();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBagName_Response_error
{
public:
  Init_SetBagName_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::srv::SetBagName_Response error(::autodrive_msgs::srv::SetBagName_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetBagName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetBagName_Response>()
{
  return autodrive_msgs::srv::builder::Init_SetBagName_Response_error();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__BUILDER_HPP_
