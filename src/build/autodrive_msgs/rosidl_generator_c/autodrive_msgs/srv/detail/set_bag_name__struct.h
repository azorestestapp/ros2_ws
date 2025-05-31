// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/SetBagName.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bag_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBagName in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetBagName_Request
{
  rosidl_runtime_c__String bag_name;
  bool use_custom;
} autodrive_msgs__srv__SetBagName_Request;

// Struct for a sequence of autodrive_msgs__srv__SetBagName_Request.
typedef struct autodrive_msgs__srv__SetBagName_Request__Sequence
{
  autodrive_msgs__srv__SetBagName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetBagName_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetBagName in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetBagName_Response
{
  bool error;
} autodrive_msgs__srv__SetBagName_Response;

// Struct for a sequence of autodrive_msgs__srv__SetBagName_Response.
typedef struct autodrive_msgs__srv__SetBagName_Response__Sequence
{
  autodrive_msgs__srv__SetBagName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetBagName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_BAG_NAME__STRUCT_H_
