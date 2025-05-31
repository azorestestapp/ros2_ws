# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:srv/SetDestination.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetDestination_Request(type):
    """Metaclass of message 'SetDestination_Request'."""

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
                'autodrive_msgs.srv.SetDestination_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_destination__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_destination__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_destination__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_destination__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_destination__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDestination_Request(metaclass=Metaclass_SetDestination_Request):
    """Message class 'SetDestination_Request'."""

    __slots__ = [
        '_latitude',
        '_longitude',
        '_parking_lot',
        '_rand',
        '_rand_mindist',
        '_auto_re',
        '_skip_confirm',
        '_local_coord',
    ]

    _fields_and_field_types = {
        'latitude': 'double',
        'longitude': 'double',
        'parking_lot': 'boolean',
        'rand': 'boolean',
        'rand_mindist': 'int8',
        'auto_re': 'boolean',
        'skip_confirm': 'boolean',
        'local_coord': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.parking_lot = kwargs.get('parking_lot', bool())
        self.rand = kwargs.get('rand', bool())
        self.rand_mindist = kwargs.get('rand_mindist', int())
        self.auto_re = kwargs.get('auto_re', bool())
        self.skip_confirm = kwargs.get('skip_confirm', bool())
        self.local_coord = kwargs.get('local_coord', bool())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.parking_lot != other.parking_lot:
            return False
        if self.rand != other.rand:
            return False
        if self.rand_mindist != other.rand_mindist:
            return False
        if self.auto_re != other.auto_re:
            return False
        if self.skip_confirm != other.skip_confirm:
            return False
        if self.local_coord != other.local_coord:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def parking_lot(self):
        """Message field 'parking_lot'."""
        return self._parking_lot

    @parking_lot.setter
    def parking_lot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parking_lot' field must be of type 'bool'"
        self._parking_lot = value

    @builtins.property
    def rand(self):
        """Message field 'rand'."""
        return self._rand

    @rand.setter
    def rand(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rand' field must be of type 'bool'"
        self._rand = value

    @builtins.property
    def rand_mindist(self):
        """Message field 'rand_mindist'."""
        return self._rand_mindist

    @rand_mindist.setter
    def rand_mindist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rand_mindist' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'rand_mindist' field must be an integer in [-128, 127]"
        self._rand_mindist = value

    @builtins.property
    def auto_re(self):
        """Message field 'auto_re'."""
        return self._auto_re

    @auto_re.setter
    def auto_re(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_re' field must be of type 'bool'"
        self._auto_re = value

    @builtins.property
    def skip_confirm(self):
        """Message field 'skip_confirm'."""
        return self._skip_confirm

    @skip_confirm.setter
    def skip_confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'skip_confirm' field must be of type 'bool'"
        self._skip_confirm = value

    @builtins.property
    def local_coord(self):
        """Message field 'local_coord'."""
        return self._local_coord

    @local_coord.setter
    def local_coord(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_coord' field must be of type 'bool'"
        self._local_coord = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetDestination_Response(type):
    """Metaclass of message 'SetDestination_Response'."""

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
                'autodrive_msgs.srv.SetDestination_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_destination__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_destination__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_destination__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_destination__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_destination__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDestination_Response(metaclass=Metaclass_SetDestination_Response):
    """Message class 'SetDestination_Response'."""

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


class Metaclass_SetDestination(type):
    """Metaclass of service 'SetDestination'."""

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
                'autodrive_msgs.srv.SetDestination')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_destination

            from autodrive_msgs.srv import _set_destination
            if _set_destination.Metaclass_SetDestination_Request._TYPE_SUPPORT is None:
                _set_destination.Metaclass_SetDestination_Request.__import_type_support__()
            if _set_destination.Metaclass_SetDestination_Response._TYPE_SUPPORT is None:
                _set_destination.Metaclass_SetDestination_Response.__import_type_support__()


class SetDestination(metaclass=Metaclass_SetDestination):
    from autodrive_msgs.srv._set_destination import SetDestination_Request as Request
    from autodrive_msgs.srv._set_destination import SetDestination_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
