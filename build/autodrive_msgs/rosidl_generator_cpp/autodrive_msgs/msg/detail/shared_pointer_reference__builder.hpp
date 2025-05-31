// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__BUILDER_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/msg/detail/shared_pointer_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace msg
{

namespace builder
{

class Init_SharedPointerReference_graph_active
{
public:
  explicit Init_SharedPointerReference_graph_active(::autodrive_msgs::msg::SharedPointerReference & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::msg::SharedPointerReference graph_active(::autodrive_msgs::msg::SharedPointerReference::_graph_active_type arg)
  {
    msg_.graph_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::msg::SharedPointerReference msg_;
};

class Init_SharedPointerReference_map_active
{
public:
  explicit Init_SharedPointerReference_map_active(::autodrive_msgs::msg::SharedPointerReference & msg)
  : msg_(msg)
  {}
  Init_SharedPointerReference_graph_active map_active(::autodrive_msgs::msg::SharedPointerReference::_map_active_type arg)
  {
    msg_.map_active = std::move(arg);
    return Init_SharedPointerReference_graph_active(msg_);
  }

private:
  ::autodrive_msgs::msg::SharedPointerReference msg_;
};

class Init_SharedPointerReference_shared_pointer_key
{
public:
  Init_SharedPointerReference_shared_pointer_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SharedPointerReference_map_active shared_pointer_key(::autodrive_msgs::msg::SharedPointerReference::_shared_pointer_key_type arg)
  {
    msg_.shared_pointer_key = std::move(arg);
    return Init_SharedPointerReference_map_active(msg_);
  }

private:
  ::autodrive_msgs::msg::SharedPointerReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::msg::SharedPointerReference>()
{
  return autodrive_msgs::msg::builder::Init_SharedPointerReference_shared_pointer_key();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SHARED_POINTER_REFERENCE__BUILDER_HPP_
