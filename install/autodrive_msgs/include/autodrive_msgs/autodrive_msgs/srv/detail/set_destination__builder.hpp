// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autodrive_msgs/srv/detail/set_destination__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDestination_Request_local_coord
{
public:
  explicit Init_SetDestination_Request_local_coord(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  ::autodrive_msgs::srv::SetDestination_Request local_coord(::autodrive_msgs::srv::SetDestination_Request::_local_coord_type arg)
  {
    msg_.local_coord = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_skip_confirm
{
public:
  explicit Init_SetDestination_Request_skip_confirm(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_local_coord skip_confirm(::autodrive_msgs::srv::SetDestination_Request::_skip_confirm_type arg)
  {
    msg_.skip_confirm = std::move(arg);
    return Init_SetDestination_Request_local_coord(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_auto_re
{
public:
  explicit Init_SetDestination_Request_auto_re(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_skip_confirm auto_re(::autodrive_msgs::srv::SetDestination_Request::_auto_re_type arg)
  {
    msg_.auto_re = std::move(arg);
    return Init_SetDestination_Request_skip_confirm(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_rand_mindist
{
public:
  explicit Init_SetDestination_Request_rand_mindist(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_auto_re rand_mindist(::autodrive_msgs::srv::SetDestination_Request::_rand_mindist_type arg)
  {
    msg_.rand_mindist = std::move(arg);
    return Init_SetDestination_Request_auto_re(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_rand
{
public:
  explicit Init_SetDestination_Request_rand(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_rand_mindist rand(::autodrive_msgs::srv::SetDestination_Request::_rand_type arg)
  {
    msg_.rand = std::move(arg);
    return Init_SetDestination_Request_rand_mindist(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_parking_lot
{
public:
  explicit Init_SetDestination_Request_parking_lot(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_rand parking_lot(::autodrive_msgs::srv::SetDestination_Request::_parking_lot_type arg)
  {
    msg_.parking_lot = std::move(arg);
    return Init_SetDestination_Request_rand(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_longitude
{
public:
  explicit Init_SetDestination_Request_longitude(::autodrive_msgs::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Request_parking_lot longitude(::autodrive_msgs::srv::SetDestination_Request::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SetDestination_Request_parking_lot(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_latitude
{
public:
  Init_SetDestination_Request_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDestination_Request_longitude latitude(::autodrive_msgs::srv::SetDestination_Request::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SetDestination_Request_longitude(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetDestination_Request>()
{
  return autodrive_msgs::srv::builder::Init_SetDestination_Request_latitude();
}

}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDestination_Response_error
{
public:
  Init_SetDestination_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autodrive_msgs::srv::SetDestination_Response error(::autodrive_msgs::srv::SetDestination_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autodrive_msgs::srv::SetDestination_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autodrive_msgs::srv::SetDestination_Response>()
{
  return autodrive_msgs::srv::builder::Init_SetDestination_Response_error();
}

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_
