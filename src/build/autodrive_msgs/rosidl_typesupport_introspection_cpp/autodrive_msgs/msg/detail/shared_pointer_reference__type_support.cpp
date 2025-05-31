// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autodrive_msgs/msg/detail/shared_pointer_reference__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autodrive_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SharedPointerReference_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autodrive_msgs::msg::SharedPointerReference(_init);
}

void SharedPointerReference_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autodrive_msgs::msg::SharedPointerReference *>(message_memory);
  typed_message->~SharedPointerReference();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SharedPointerReference_message_member_array[3] = {
  {
    "shared_pointer_key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::SharedPointerReference, shared_pointer_key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::SharedPointerReference, map_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "graph_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::SharedPointerReference, graph_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SharedPointerReference_message_members = {
  "autodrive_msgs::msg",  // message namespace
  "SharedPointerReference",  // message name
  3,  // number of fields
  sizeof(autodrive_msgs::msg::SharedPointerReference),
  SharedPointerReference_message_member_array,  // message members
  SharedPointerReference_init_function,  // function to initialize message memory (memory has to be allocated)
  SharedPointerReference_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SharedPointerReference_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SharedPointerReference_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autodrive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::msg::SharedPointerReference>()
{
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::SharedPointerReference_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, msg, SharedPointerReference)() {
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::SharedPointerReference_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
