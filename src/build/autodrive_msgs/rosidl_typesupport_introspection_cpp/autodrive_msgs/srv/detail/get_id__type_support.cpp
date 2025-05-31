// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autodrive_msgs/srv/detail/get_id__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetId_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autodrive_msgs::srv::GetId_Request(_init);
}

void GetId_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autodrive_msgs::srv::GetId_Request *>(message_memory);
  typed_message->~GetId_Request();
}

size_t size_function__GetId_Request__east(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetId_Request__east(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetId_Request__east(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetId_Request__east(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetId_Request__east(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetId_Request__east(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetId_Request__east(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetId_Request__east(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetId_Request__north(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetId_Request__north(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetId_Request__north(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetId_Request__north(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetId_Request__north(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetId_Request__north(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetId_Request__north(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetId_Request__north(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetId_Request__radius(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetId_Request__radius(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetId_Request__radius(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetId_Request__radius(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetId_Request__radius(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetId_Request__radius(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetId_Request__radius(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetId_Request__radius(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetId_Request_message_member_array[3] = {
  {
    "east",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::srv::GetId_Request, east),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetId_Request__east,  // size() function pointer
    get_const_function__GetId_Request__east,  // get_const(index) function pointer
    get_function__GetId_Request__east,  // get(index) function pointer
    fetch_function__GetId_Request__east,  // fetch(index, &value) function pointer
    assign_function__GetId_Request__east,  // assign(index, value) function pointer
    resize_function__GetId_Request__east  // resize(index) function pointer
  },
  {
    "north",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::srv::GetId_Request, north),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetId_Request__north,  // size() function pointer
    get_const_function__GetId_Request__north,  // get_const(index) function pointer
    get_function__GetId_Request__north,  // get(index) function pointer
    fetch_function__GetId_Request__north,  // fetch(index, &value) function pointer
    assign_function__GetId_Request__north,  // assign(index, value) function pointer
    resize_function__GetId_Request__north  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::srv::GetId_Request, radius),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetId_Request__radius,  // size() function pointer
    get_const_function__GetId_Request__radius,  // get_const(index) function pointer
    get_function__GetId_Request__radius,  // get(index) function pointer
    fetch_function__GetId_Request__radius,  // fetch(index, &value) function pointer
    assign_function__GetId_Request__radius,  // assign(index, value) function pointer
    resize_function__GetId_Request__radius  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetId_Request_message_members = {
  "autodrive_msgs::srv",  // message namespace
  "GetId_Request",  // message name
  3,  // number of fields
  sizeof(autodrive_msgs::srv::GetId_Request),
  GetId_Request_message_member_array,  // message members
  GetId_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetId_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetId_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetId_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autodrive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::srv::GetId_Request>()
{
  return &::autodrive_msgs::srv::rosidl_typesupport_introspection_cpp::GetId_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId_Request)() {
  return &::autodrive_msgs::srv::rosidl_typesupport_introspection_cpp::GetId_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autodrive_msgs/srv/detail/get_id__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetId_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autodrive_msgs::srv::GetId_Response(_init);
}

void GetId_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autodrive_msgs::srv::GetId_Response *>(message_memory);
  typed_message->~GetId_Response();
}

size_t size_function__GetId_Response__lanelet_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetId_Response__lanelet_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetId_Response__lanelet_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetId_Response__lanelet_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__GetId_Response__lanelet_id(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__GetId_Response__lanelet_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__GetId_Response__lanelet_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__GetId_Response__lanelet_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetId_Response_message_member_array[2] = {
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::srv::GetId_Response, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanelet_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::srv::GetId_Response, lanelet_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetId_Response__lanelet_id,  // size() function pointer
    get_const_function__GetId_Response__lanelet_id,  // get_const(index) function pointer
    get_function__GetId_Response__lanelet_id,  // get(index) function pointer
    fetch_function__GetId_Response__lanelet_id,  // fetch(index, &value) function pointer
    assign_function__GetId_Response__lanelet_id,  // assign(index, value) function pointer
    resize_function__GetId_Response__lanelet_id  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetId_Response_message_members = {
  "autodrive_msgs::srv",  // message namespace
  "GetId_Response",  // message name
  2,  // number of fields
  sizeof(autodrive_msgs::srv::GetId_Response),
  GetId_Response_message_member_array,  // message members
  GetId_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetId_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetId_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetId_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autodrive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::srv::GetId_Response>()
{
  return &::autodrive_msgs::srv::rosidl_typesupport_introspection_cpp::GetId_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId_Response)() {
  return &::autodrive_msgs::srv::rosidl_typesupport_introspection_cpp::GetId_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/get_id__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace autodrive_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetId_service_members = {
  "autodrive_msgs::srv",  // service namespace
  "GetId",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<autodrive_msgs::srv::GetId>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetId_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetId_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autodrive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autodrive_msgs::srv::GetId>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::autodrive_msgs::srv::rosidl_typesupport_introspection_cpp::GetId_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autodrive_msgs::srv::GetId_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autodrive_msgs::srv::GetId_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, srv, GetId)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<autodrive_msgs::srv::GetId>();
}

#ifdef __cplusplus
}
#endif
