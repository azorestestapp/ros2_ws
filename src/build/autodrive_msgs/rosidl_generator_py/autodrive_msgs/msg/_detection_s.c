// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "autodrive_msgs/msg/detail/detection__struct.h"
#include "autodrive_msgs/msg/detail/detection__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "autodrive_msgs/msg/detail/dynamic_obstacle__functions.h"
#include "autodrive_msgs/msg/detail/general_detection__functions.h"
#include "autodrive_msgs/msg/detail/railroad_crossing__functions.h"
#include "autodrive_msgs/msg/detail/speed_limit__functions.h"
#include "autodrive_msgs/msg/detail/static_obstacle__functions.h"
#include "autodrive_msgs/msg/detail/stopline__functions.h"
#include "autodrive_msgs/msg/detail/traffic_light__functions.h"
#include "autodrive_msgs/msg/detail/traffic_sign__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__general_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__general_detection__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__dynamic_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__dynamic_obstacle__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__static_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__static_obstacle__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__railroad_crossing__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__railroad_crossing__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__traffic_light__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__traffic_light__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__traffic_sign__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__traffic_sign__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__speed_limit__convert_to_py(void * raw_ros_message);
bool autodrive_msgs__msg__stopline__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__stopline__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("autodrive_msgs.msg._detection.Detection", full_classname_dest, 39) == 0);
  }
  autodrive_msgs__msg__Detection * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'detection'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__GeneralDetection__Sequence__init(&(ros_message->detection), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__GeneralDetection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__GeneralDetection * dest = ros_message->detection.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__general_detection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dynamic_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dynamic_obstacles'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__DynamicObstacle__Sequence__init(&(ros_message->dynamic_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__DynamicObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__DynamicObstacle * dest = ros_message->dynamic_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__dynamic_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // static_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "static_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'static_obstacles'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__StaticObstacle__Sequence__init(&(ros_message->static_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__StaticObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__StaticObstacle * dest = ros_message->static_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__static_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // railroad_crossings
    PyObject * field = PyObject_GetAttrString(_pymsg, "railroad_crossings");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'railroad_crossings'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__RailroadCrossing__Sequence__init(&(ros_message->railroad_crossings), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__RailroadCrossing__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__RailroadCrossing * dest = ros_message->railroad_crossings.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__railroad_crossing__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traffic_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_lights");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traffic_lights'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__TrafficLight__Sequence__init(&(ros_message->traffic_lights), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__TrafficLight__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__TrafficLight * dest = ros_message->traffic_lights.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__traffic_light__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traffic_signs
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_signs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traffic_signs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__TrafficSign__Sequence__init(&(ros_message->traffic_signs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__TrafficSign__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__TrafficSign * dest = ros_message->traffic_signs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__traffic_sign__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // speed_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speed_limits'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__SpeedLimit__Sequence__init(&(ros_message->speed_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__SpeedLimit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__SpeedLimit * dest = ros_message->speed_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__speed_limit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // stop_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'stop_lines'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autodrive_msgs__msg__Stopline__Sequence__init(&(ros_message->stop_lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autodrive_msgs__msg__Stopline__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autodrive_msgs__msg__Stopline * dest = ros_message->stop_lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autodrive_msgs__msg__stopline__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__msg__detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Detection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.msg._detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Detection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__msg__Detection * ros_message = (autodrive_msgs__msg__Detection *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detection
    PyObject * field = NULL;
    size_t size = ros_message->detection.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__GeneralDetection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->detection.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__general_detection__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->dynamic_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__DynamicObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dynamic_obstacles.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__dynamic_obstacle__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // static_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->static_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__StaticObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->static_obstacles.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__static_obstacle__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "static_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // railroad_crossings
    PyObject * field = NULL;
    size_t size = ros_message->railroad_crossings.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__RailroadCrossing * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->railroad_crossings.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__railroad_crossing__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "railroad_crossings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_lights
    PyObject * field = NULL;
    size_t size = ros_message->traffic_lights.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__TrafficLight * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traffic_lights.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__traffic_light__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_signs
    PyObject * field = NULL;
    size_t size = ros_message->traffic_signs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__TrafficSign * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traffic_signs.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__traffic_sign__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_signs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits
    PyObject * field = NULL;
    size_t size = ros_message->speed_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__SpeedLimit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speed_limits.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__speed_limit__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_lines
    PyObject * field = NULL;
    size_t size = ros_message->stop_lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autodrive_msgs__msg__Stopline * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->stop_lines.data[i]);
      PyObject * pyitem = autodrive_msgs__msg__stopline__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
