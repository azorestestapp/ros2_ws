# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:srv/LaneletAttribute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneletAttribute_Request(type):
    """Metaclass of message 'LaneletAttribute_Request'."""

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
                'autodrive_msgs.srv.LaneletAttribute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lanelet_attribute__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lanelet_attribute__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lanelet_attribute__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lanelet_attribute__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lanelet_attribute__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneletAttribute_Request(metaclass=Metaclass_LaneletAttribute_Request):
    """Message class 'LaneletAttribute_Request'."""

    __slots__ = [
        '_lanelet_id',
        '_attribute_key',
    ]

    _fields_and_field_types = {
        'lanelet_id': 'uint64',
        'attribute_key': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lanelet_id = kwargs.get('lanelet_id', int())
        self.attribute_key = kwargs.get('attribute_key', str())

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
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.attribute_key != other.attribute_key:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelet_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'lanelet_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._lanelet_id = value

    @builtins.property
    def attribute_key(self):
        """Message field 'attribute_key'."""
        return self._attribute_key

    @attribute_key.setter
    def attribute_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'attribute_key' field must be of type 'str'"
        self._attribute_key = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LaneletAttribute_Response(type):
    """Metaclass of message 'LaneletAttribute_Response'."""

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
                'autodrive_msgs.srv.LaneletAttribute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lanelet_attribute__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lanelet_attribute__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lanelet_attribute__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lanelet_attribute__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lanelet_attribute__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneletAttribute_Response(metaclass=Metaclass_LaneletAttribute_Response):
    """Message class 'LaneletAttribute_Response'."""

    __slots__ = [
        '_attribute_val',
        '_error',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'attribute_val': 'string',
        'error': 'boolean',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.attribute_val = kwargs.get('attribute_val', str())
        self.error = kwargs.get('error', bool())
        self.error_msg = kwargs.get('error_msg', str())

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
        if self.attribute_val != other.attribute_val:
            return False
        if self.error != other.error:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def attribute_val(self):
        """Message field 'attribute_val'."""
        return self._attribute_val

    @attribute_val.setter
    def attribute_val(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'attribute_val' field must be of type 'str'"
        self._attribute_val = value

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

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value


class Metaclass_LaneletAttribute(type):
    """Metaclass of service 'LaneletAttribute'."""

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
                'autodrive_msgs.srv.LaneletAttribute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__lanelet_attribute

            from autodrive_msgs.srv import _lanelet_attribute
            if _lanelet_attribute.Metaclass_LaneletAttribute_Request._TYPE_SUPPORT is None:
                _lanelet_attribute.Metaclass_LaneletAttribute_Request.__import_type_support__()
            if _lanelet_attribute.Metaclass_LaneletAttribute_Response._TYPE_SUPPORT is None:
                _lanelet_attribute.Metaclass_LaneletAttribute_Response.__import_type_support__()


class LaneletAttribute(metaclass=Metaclass_LaneletAttribute):
    from autodrive_msgs.srv._lanelet_attribute import LaneletAttribute_Request as Request
    from autodrive_msgs.srv._lanelet_attribute import LaneletAttribute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
