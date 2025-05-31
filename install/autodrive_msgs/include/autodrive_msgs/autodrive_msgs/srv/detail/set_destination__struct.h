// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_H_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDestination in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetDestination_Request
{
  double latitude;
  double longitude;
  bool parking_lot;
  bool rand;
  int8_t rand_mindist;
  bool auto_re;
  bool skip_confirm;
  bool local_coord;
} autodrive_msgs__srv__SetDestination_Request;

// Struct for a sequence of autodrive_msgs__srv__SetDestination_Request.
typedef struct autodrive_msgs__srv__SetDestination_Request__Sequence
{
  autodrive_msgs__srv__SetDestination_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetDestination_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDestination in the package autodrive_msgs.
typedef struct autodrive_msgs__srv__SetDestination_Response
{
  bool error;
} autodrive_msgs__srv__SetDestination_Response;

// Struct for a sequence of autodrive_msgs__srv__SetDestination_Response.
typedef struct autodrive_msgs__srv__SetDestination_Response__Sequence
{
  autodrive_msgs__srv__SetDestination_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__srv__SetDestination_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_H_
