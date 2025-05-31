// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:msg/Destination.idl
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
#include "autodrive_msgs/msg/detail/destination__struct.h"
#include "autodrive_msgs/msg/detail/destination__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__msg__destination__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("autodrive_msgs.msg._destination.Destination", full_classname_dest, 43) == 0);
  }
  autodrive_msgs__msg__Destination * ros_message = _ros_message;
  {  // east
    PyObject * field = PyObject_GetAttrString(_pymsg, "east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north
    PyObject * field = PyObject_GetAttrString(_pymsg, "north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // parking
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // multiroute
    PyObject * field = PyObject_GetAttrString(_pymsg, "multiroute");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->multiroute = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__msg__destination__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Destination */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.msg._destination");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Destination");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__msg__Destination * ros_message = (autodrive_msgs__msg__Destination *)raw_ros_message;
  {  // east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multiroute
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->multiroute ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "multiroute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
