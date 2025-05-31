// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:msg/RailroadCrossing.idl
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
#include "autodrive_msgs/msg/detail/railroad_crossing__struct.h"
#include "autodrive_msgs/msg/detail/railroad_crossing__functions.h"

bool autodrive_msgs__msg__general_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__general_detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__msg__railroad_crossing__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("autodrive_msgs.msg._railroad_crossing.RailroadCrossing", full_classname_dest, 54) == 0);
  }
  autodrive_msgs__msg__RailroadCrossing * ros_message = _ros_message;
  {  // detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection");
    if (!field) {
      return false;
    }
    if (!autodrive_msgs__msg__general_detection__convert_from_py(field, &ros_message->detection)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bar
    PyObject * field = PyObject_GetAttrString(_pymsg, "bar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bar = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bar_activity_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "bar_activity_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bar_activity_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // railroad_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "railroad_sign");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->railroad_sign = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // stop_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_line");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_line = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__msg__railroad_crossing__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RailroadCrossing */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.msg._railroad_crossing");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RailroadCrossing");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__msg__RailroadCrossing * ros_message = (autodrive_msgs__msg__RailroadCrossing *)raw_ros_message;
  {  // detection
    PyObject * field = NULL;
    field = autodrive_msgs__msg__general_detection__convert_to_py(&ros_message->detection);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bar
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->bar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bar_activity_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bar_activity_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bar_activity_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // railroad_sign
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->railroad_sign);
    {
      int rc = PyObject_SetAttrString(_pymessage, "railroad_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_line
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->stop_line);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
