// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/LaneletAttribute.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/lanelet_attribute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_LaneletAttribute_Request_attribute_key
{
public:
  explicit Init_LaneletAttribute_Request_attribute_key(::autodrive_msgs::srv::LaneletAttribute_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::LaneletAttribute_Request attribute_key(::autodrive_msgs::srv::LaneletAttribute_Request::_attribute_key_type arg)
  {
    msg_.attribute_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::LaneletAttribute_Request msg_;
};

class Init_LaneletAttribute_Request_lanelet_id
{
public:
  Init_LaneletAttribute_Request_lanelet_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletAttribute_Request_attribute_key lanelet_id(::autodrive_msgs::srv::LaneletAttribute_Request::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_LaneletAttribute_Request_attribute_key(msg_);
  }

private:
  ::autodrive_msgs::srv::LaneletAttribute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::LaneletAttribute_Request>()
{
  return autodrive_msgs::srv::builder::Init_LaneletAttribute_Request_lanelet_id();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_LaneletAttribute_Response_error_msg
{
public:
  explicit Init_LaneletAttribute_Response_error_msg(::autodrive_msgs::srv::LaneletAttribute_Response & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::LaneletAttribute_Response error_msg(::autodrive_msgs::srv::LaneletAttribute_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::LaneletAttribute_Response msg_;
};

class Init_LaneletAttribute_Response_error
{
public:
  explicit Init_LaneletAttribute_Response_error(::autodrive_msgs::srv::LaneletAttribute_Response & msg)
  : msg_(msg)
  {}
  Init_LaneletAttribute_Response_error_msg error(::autodrive_msgs::srv::LaneletAttribute_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_LaneletAttribute_Response_error_msg(msg_);
  }

private:
  ::autodrive_msgs::srv::LaneletAttribute_Response msg_;
};

class Init_LaneletAttribute_Response_attribute_val
{
public:
  Init_LaneletAttribute_Response_attribute_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletAttribute_Response_error attribute_val(::autodrive_msgs::srv::LaneletAttribute_Response::_attribute_val_type arg)
  {
    msg_.attribute_val = std::move(arg);
    return Init_LaneletAttribute_Response_error(msg_);
  }

private:
  ::autodrive_msgs::srv::LaneletAttribute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::LaneletAttribute_Response>()
{
  return autodrive_msgs::srv::builder::Init_LaneletAttribute_Response_attribute_val();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__LANELET_ATTRIBUTE__BUILDER_HPP_
