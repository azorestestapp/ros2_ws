# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:srv/SetBagName.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetBagName_Request(type):
    """Metaclass of message 'SetBagName_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autodrive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autodrive_msgs.srv.SetBagName_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_bag_name__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_bag_name__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_bag_name__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_bag_name__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_bag_name__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBagName_Request(metaclass=Metaclass_SetBagName_Request):
    """Message class 'SetBagName_Request'."""

    __slots__ = [
        '_bag_name',
        '_use_custom',
    ]

    _fields_and_field_types = {
        'bag_name': 'string',
        'use_custom': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bag_name = kwargs.get('bag_name', str())
        self.use_custom = kwargs.get('use_custom', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.bag_name != other.bag_name:
            return False
        if self.use_custom != other.use_custom:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bag_name(self):
        """Message field 'bag_name'."""
        return self._bag_name

    @bag_name.setter
    def bag_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bag_name' field must be of type 'str'"
        self._bag_name = value

    @builtins.property
    def use_custom(self):
        """Message field 'use_custom'."""
        return self._use_custom

    @use_custom.setter
    def use_custom(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_custom' field must be of type 'bool'"
        self._use_custom = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetBagName_Response(type):
    """Metaclass of message 'SetBagName_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autodrive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autodrive_msgs.srv.SetBagName_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_bag_name__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_bag_name__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_bag_name__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_bag_name__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_bag_name__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBagName_Response(metaclass=Metaclass_SetBagName_Response):
    """Message class 'SetBagName_Response'."""

    __slots__ = [
        '_error',
    ]

    _fields_and_field_types = {
        'error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error = kwargs.get('error', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error' field must be of type 'bool'"
        self._error = value


class Metaclass_SetBagName(type):
    """Metaclass of service 'SetBagName'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autodrive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autodrive_msgs.srv.SetBagName')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_bag_name

            from autodrive_msgs.srv import _set_bag_name
            if _set_bag_name.Metaclass_SetBagName_Request._TYPE_SUPPORT is None:
                _set_bag_name.Metaclass_SetBagName_Request.__import_type_support__()
            if _set_bag_name.Metaclass_SetBagName_Response._TYPE_SUPPORT is None:
                _set_bag_name.Metaclass_SetBagName_Response.__import_type_support__()


class SetBagName(metaclass=Metaclass_SetBagName):
    from autodrive_msgs.srv._set_bag_name import SetBagName_Request as Request
    from autodrive_msgs.srv._set_bag_name import SetBagName_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
