# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:srv/Reroute.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'start_lanelet_id'
# Member 'end_lanelet_id'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Reroute_Request(type):
    """Metaclass of message 'Reroute_Request'."""

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
                'autodrive_msgs.srv.Reroute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reroute__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reroute__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reroute__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reroute__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reroute__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Reroute_Request(metaclass=Metaclass_Reroute_Request):
    """Message class 'Reroute_Request'."""

    __slots__ = [
        '_start_lanelet_id',
        '_end_lanelet_id',
    ]

    _fields_and_field_types = {
        'start_lanelet_id': 'sequence<uint64>',
        'end_lanelet_id': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_lanelet_id = array.array('Q', kwargs.get('start_lanelet_id', []))
        self.end_lanelet_id = array.array('Q', kwargs.get('end_lanelet_id', []))

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
        if self.start_lanelet_id != other.start_lanelet_id:
            return False
        if self.end_lanelet_id != other.end_lanelet_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_lanelet_id(self):
        """Message field 'start_lanelet_id'."""
        return self._start_lanelet_id

    @start_lanelet_id.setter
    def start_lanelet_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'start_lanelet_id' array.array() must have the type code of 'Q'"
            self._start_lanelet_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'start_lanelet_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._start_lanelet_id = array.array('Q', value)

    @builtins.property
    def end_lanelet_id(self):
        """Message field 'end_lanelet_id'."""
        return self._end_lanelet_id

    @end_lanelet_id.setter
    def end_lanelet_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'end_lanelet_id' array.array() must have the type code of 'Q'"
            self._end_lanelet_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'end_lanelet_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._end_lanelet_id = array.array('Q', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Reroute_Response(type):
    """Metaclass of message 'Reroute_Response'."""

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
                'autodrive_msgs.srv.Reroute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reroute__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reroute__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reroute__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reroute__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reroute__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Reroute_Response(metaclass=Metaclass_Reroute_Response):
    """Message class 'Reroute_Response'."""

    __slots__ = [
        '_confirm',
        '_error',
    ]

    _fields_and_field_types = {
        'confirm': 'string',
        'error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confirm = kwargs.get('confirm', str())
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
        if self.confirm != other.confirm:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def confirm(self):
        """Message field 'confirm'."""
        return self._confirm

    @confirm.setter
    def confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'confirm' field must be of type 'str'"
        self._confirm = value

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


class Metaclass_Reroute(type):
    """Metaclass of service 'Reroute'."""

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
                'autodrive_msgs.srv.Reroute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__reroute

            from autodrive_msgs.srv import _reroute
            if _reroute.Metaclass_Reroute_Request._TYPE_SUPPORT is None:
                _reroute.Metaclass_Reroute_Request.__import_type_support__()
            if _reroute.Metaclass_Reroute_Response._TYPE_SUPPORT is None:
                _reroute.Metaclass_Reroute_Response.__import_type_support__()


class Reroute(metaclass=Metaclass_Reroute):
    from autodrive_msgs.srv._reroute import Reroute_Request as Request
    from autodrive_msgs.srv._reroute import Reroute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
