// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/srv/detail/set_destination__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/srv/detail/set_destination__struct.h"
#include "autodrive_msgs/srv/detail/set_destination__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetDestination_Request__ros_msg_type = autodrive_msgs__srv__SetDestination_Request;

static bool _SetDestination_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDestination_Request__ros_msg_type * ros_message = static_cast<const _SetDestination_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: parking_lot
  {
    cdr << (ros_message->parking_lot ? true : false);
  }

  // Field name: rand
  {
    cdr << (ros_message->rand ? true : false);
  }

  // Field name: rand_mindist
  {
    cdr << ros_message->rand_mindist;
  }

  // Field name: auto_re
  {
    cdr << (ros_message->auto_re ? true : false);
  }

  // Field name: skip_confirm
  {
    cdr << (ros_message->skip_confirm ? true : false);
  }

  // Field name: local_coord
  {
    cdr << (ros_message->local_coord ? true : false);
  }

  return true;
}

static bool _SetDestination_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDestination_Request__ros_msg_type * ros_message = static_cast<_SetDestination_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: parking_lot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->parking_lot = tmp ? true : false;
  }

  // Field name: rand
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rand = tmp ? true : false;
  }

  // Field name: rand_mindist
  {
    cdr >> ros_message->rand_mindist;
  }

  // Field name: auto_re
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_re = tmp ? true : false;
  }

  // Field name: skip_confirm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->skip_confirm = tmp ? true : false;
  }

  // Field name: local_coord
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_coord = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__srv__SetDestination_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDestination_Request__ros_msg_type * ros_message = static_cast<const _SetDestination_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parking_lot
  {
    size_t item_size = sizeof(ros_message->parking_lot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rand
  {
    size_t item_size = sizeof(ros_message->rand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rand_mindist
  {
    size_t item_size = sizeof(ros_message->rand_mindist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_re
  {
    size_t item_size = sizeof(ros_message->auto_re);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name skip_confirm
  {
    size_t item_size = sizeof(ros_message->skip_confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_coord
  {
    size_t item_size = sizeof(ros_message->local_coord);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetDestination_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__srv__SetDestination_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__srv__SetDestination_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: parking_lot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rand
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rand_mindist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_re
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: skip_confirm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_coord
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__srv__SetDestination_Request;
    is_plain =
      (
      offsetof(DataType, local_coord) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetDestination_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__srv__SetDestination_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDestination_Request = {
  "autodrive_msgs::srv",
  "SetDestination_Request",
  _SetDestination_Request__cdr_serialize,
  _SetDestination_Request__cdr_deserialize,
  _SetDestination_Request__get_serialized_size,
  _SetDestination_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetDestination_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDestination_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, SetDestination_Request)() {
  return &_SetDestination_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/set_destination__struct.h"
// already included above
// #include "autodrive_msgs/srv/detail/set_destination__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetDestination_Response__ros_msg_type = autodrive_msgs__srv__SetDestination_Response;

static bool _SetDestination_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDestination_Response__ros_msg_type * ros_message = static_cast<const _SetDestination_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << (ros_message->error ? true : false);
  }

  return true;
}

static bool _SetDestination_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDestination_Response__ros_msg_type * ros_message = static_cast<_SetDestination_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__srv__SetDestination_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDestination_Response__ros_msg_type * ros_message = static_cast<const _SetDestination_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetDestination_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__srv__SetDestination_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__srv__SetDestination_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__srv__SetDestination_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetDestination_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__srv__SetDestination_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDestination_Response = {
  "autodrive_msgs::srv",
  "SetDestination_Response",
  _SetDestination_Response__cdr_serialize,
  _SetDestination_Response__cdr_deserialize,
  _SetDestination_Response__get_serialized_size,
  _SetDestination_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetDestination_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDestination_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, SetDestination_Response)() {
  return &_SetDestination_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/srv/set_destination.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetDestination__callbacks = {
  "autodrive_msgs::srv",
  "SetDestination",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, SetDestination_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, SetDestination_Response)(),
};

static rosidl_service_type_support_t SetDestination__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetDestination__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, srv, SetDestination)() {
  return &SetDestination__handle;
}

#if defined(__cplusplus)
}
#endif
