// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autodrive_msgs:srv/SetDestination.idl
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
#include "autodrive_msgs/srv/detail/set_destination__struct.h"
#include "autodrive_msgs/srv/detail/set_destination__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__srv__set_destination__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("autodrive_msgs.srv._set_destination.SetDestination_Request", full_classname_dest, 58) == 0);
  }
  autodrive_msgs__srv__SetDestination_Request * ros_message = _ros_message;
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // parking_lot
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_lot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parking_lot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rand
    PyObject * field = PyObject_GetAttrString(_pymsg, "rand");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rand = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rand_mindist
    PyObject * field = PyObject_GetAttrString(_pymsg, "rand_mindist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rand_mindist = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_re
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_re");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_re = (Py_True == field);
    Py_DECREF(field);
  }
  {  // skip_confirm
    PyObject * field = PyObject_GetAttrString(_pymsg, "skip_confirm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->skip_confirm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_coord
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_coord");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_coord = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__srv__set_destination__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetDestination_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.srv._set_destination");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetDestination_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__srv__SetDestination_Request * ros_message = (autodrive_msgs__srv__SetDestination_Request *)raw_ros_message;
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_lot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parking_lot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_lot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rand
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rand ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rand_mindist
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rand_mindist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rand_mindist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_re
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_re ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_re", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skip_confirm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->skip_confirm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skip_confirm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_coord
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_coord ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_coord", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "autodrive_msgs/srv/detail/set_destination__struct.h"
// already included above
// #include "autodrive_msgs/srv/detail/set_destination__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autodrive_msgs__srv__set_destination__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("autodrive_msgs.srv._set_destination.SetDestination_Response", full_classname_dest, 59) == 0);
  }
  autodrive_msgs__srv__SetDestination_Response * ros_message = _ros_message;
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autodrive_msgs__srv__set_destination__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetDestination_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autodrive_msgs.srv._set_destination");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetDestination_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autodrive_msgs__srv__SetDestination_Response * ros_message = (autodrive_msgs__srv__SetDestination_Response *)raw_ros_message;
  {  // error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
