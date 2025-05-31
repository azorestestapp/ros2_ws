// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/Manoeuvre.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autodrive_msgs/msg/detail/manoeuvre__struct.hpp"
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

void Manoeuvre_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autodrive_msgs::msg::Manoeuvre(_init);
}

void Manoeuvre_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autodrive_msgs::msg::Manoeuvre *>(message_memory);
  typed_message->~Manoeuvre();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Manoeuvre_message_member_array[1] = {
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::Direction>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Manoeuvre, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Manoeuvre_message_members = {
  "autodrive_msgs::msg",  // message namespace
  "Manoeuvre",  // message name
  1,  // number of fields
  sizeof(autodrive_msgs::msg::Manoeuvre),
  Manoeuvre_message_member_array,  // message members
  Manoeuvre_init_function,  // function to initialize message memory (memory has to be allocated)
  Manoeuvre_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Manoeuvre_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Manoeuvre_message_members,
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
get_message_type_support_handle<autodrive_msgs::msg::Manoeuvre>()
{
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::Manoeuvre_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, msg, Manoeuvre)() {
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::Manoeuvre_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
