// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/attribute_dictionary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_AttributeDictionary_Request_attribute_val
{
public:
  explicit Init_AttributeDictionary_Request_attribute_val(::autodrive_msgs::srv::AttributeDictionary_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::AttributeDictionary_Request attribute_val(::autodrive_msgs::srv::AttributeDictionary_Request::_attribute_val_type arg)
  {
    msg_.attribute_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::AttributeDictionary_Request msg_;
};

class Init_AttributeDictionary_Request_attribute_key
{
public:
  Init_AttributeDictionary_Request_attribute_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttributeDictionary_Request_attribute_val attribute_key(::autodrive_msgs::srv::AttributeDictionary_Request::_attribute_key_type arg)
  {
    msg_.attribute_key = std::move(arg);
    return Init_AttributeDictionary_Request_attribute_val(msg_);
  }

private:
  ::autodrive_msgs::srv::AttributeDictionary_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::AttributeDictionary_Request>()
{
  return autodrive_msgs::srv::builder::Init_AttributeDictionary_Request_attribute_key();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_AttributeDictionary_Response_error
{
public:
  explicit Init_AttributeDictionary_Response_error(::autodrive_msgs::srv::AttributeDictionary_Response & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::AttributeDictionary_Response error(::autodrive_msgs::srv::AttributeDictionary_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::AttributeDictionary_Response msg_;
};

class Init_AttributeDictionary_Response_error_msg
{
public:
  explicit Init_AttributeDictionary_Response_error_msg(::autodrive_msgs::srv::AttributeDictionary_Response & msg)
  : msg_(msg)
  {}
  Init_AttributeDictionary_Response_error error_msg(::autodrive_msgs::srv::AttributeDictionary_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return Init_AttributeDictionary_Response_error(msg_);
  }

private:
  ::autodrive_msgs::srv::AttributeDictionary_Response msg_;
};

class Init_AttributeDictionary_Response_lanelet_ids
{
public:
  Init_AttributeDictionary_Response_lanelet_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttributeDictionary_Response_error_msg lanelet_ids(::autodrive_msgs::srv::AttributeDictionary_Response::_lanelet_ids_type arg)
  {
    msg_.lanelet_ids = std::move(arg);
    return Init_AttributeDictionary_Response_error_msg(msg_);
  }

private:
  ::autodrive_msgs::srv::AttributeDictionary_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::AttributeDictionary_Response>()
{
  return autodrive_msgs::srv::builder::Init_AttributeDictionary_Response_lanelet_ids();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__BUILDER_HPP_
