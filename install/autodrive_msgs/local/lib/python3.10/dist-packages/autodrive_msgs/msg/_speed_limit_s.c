// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
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
#include "autodrive_msgs/msg/detail/speed_limit__struct.h"
#include "autodrive_msgs/msg/detail/speed_limit__functions.h"

bool autodrive_msgs__msg__general_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autodrive_msgs__msg__general_detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__msg__speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("autodrive_msgs.msg._speed_limit.SpeedLimit", full_classname_dest, 42) == 0);
  }
  autodrive_msgs__msg__SpeedLimit * ros_message = _ros_message;
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
  {  // max_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // min_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_limit_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_limit_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // unit
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_limit_unit_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit_unit_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_limit_unit_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__msg__speed_limit__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedLimit */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.msg._speed_limit");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedLimit");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__msg__SpeedLimit * ros_message = (autodrive_msgs__msg__SpeedLimit *)raw_ros_message;
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
  {  // max_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_limit_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit_unit_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_limit_unit_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit_unit_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
