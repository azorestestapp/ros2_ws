# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autodrive_msgs:msg/CanState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CanState(type):
    """Metaclass of message 'CanState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STARTUP': 0,
        'PASSIVE': 1,
        'ACTIVATION_FAILURE': 2,
        'ACTIVATION_CONDITION_CHECK': 3,
        'BRAKE_ACTIVATION': 4,
        'WAIT_FOR_BRAKE_RELEASE': 5,
        'STEERING_ACTIVATION': 6,
        'PROPULSION_ACTIVATION': 7,
        'ACTIVE_MODE_LOOP': 8,
        'DEACTIVATION': 9,
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
                'autodrive_msgs.msg.CanState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STARTUP': cls.__constants['STARTUP'],
            'PASSIVE': cls.__constants['PASSIVE'],
            'ACTIVATION_FAILURE': cls.__constants['ACTIVATION_FAILURE'],
            'ACTIVATION_CONDITION_CHECK': cls.__constants['ACTIVATION_CONDITION_CHECK'],
            'BRAKE_ACTIVATION': cls.__constants['BRAKE_ACTIVATION'],
            'WAIT_FOR_BRAKE_RELEASE': cls.__constants['WAIT_FOR_BRAKE_RELEASE'],
            'STEERING_ACTIVATION': cls.__constants['STEERING_ACTIVATION'],
            'PROPULSION_ACTIVATION': cls.__constants['PROPULSION_ACTIVATION'],
            'ACTIVE_MODE_LOOP': cls.__constants['ACTIVE_MODE_LOOP'],
            'DEACTIVATION': cls.__constants['DEACTIVATION'],
        }

    @property
    def STARTUP(self):
        """Message constant 'STARTUP'."""
        return Metaclass_CanState.__constants['STARTUP']

    @property
    def PASSIVE(self):
        """Message constant 'PASSIVE'."""
        return Metaclass_CanState.__constants['PASSIVE']

    @property
    def ACTIVATION_FAILURE(self):
        """Message constant 'ACTIVATION_FAILURE'."""
        return Metaclass_CanState.__constants['ACTIVATION_FAILURE']

    @property
    def ACTIVATION_CONDITION_CHECK(self):
        """Message constant 'ACTIVATION_CONDITION_CHECK'."""
        return Metaclass_CanState.__constants['ACTIVATION_CONDITION_CHECK']

    @property
    def BRAKE_ACTIVATION(self):
        """Message constant 'BRAKE_ACTIVATION'."""
        return Metaclass_CanState.__constants['BRAKE_ACTIVATION']

    @property
    def WAIT_FOR_BRAKE_RELEASE(self):
        """Message constant 'WAIT_FOR_BRAKE_RELEASE'."""
        return Metaclass_CanState.__constants['WAIT_FOR_BRAKE_RELEASE']

    @property
    def STEERING_ACTIVATION(self):
        """Message constant 'STEERING_ACTIVATION'."""
        return Metaclass_CanState.__constants['STEERING_ACTIVATION']

    @property
    def PROPULSION_ACTIVATION(self):
        """Message constant 'PROPULSION_ACTIVATION'."""
        return Metaclass_CanState.__constants['PROPULSION_ACTIVATION']

    @property
    def ACTIVE_MODE_LOOP(self):
        """Message constant 'ACTIVE_MODE_LOOP'."""
        return Metaclass_CanState.__constants['ACTIVE_MODE_LOOP']

    @property
    def DEACTIVATION(self):
        """Message constant 'DEACTIVATION'."""
        return Metaclass_CanState.__constants['DEACTIVATION']


class CanState(metaclass=Metaclass_CanState):
    """
    Message class 'CanState'.

    Constants:
      STARTUP
      PASSIVE
      ACTIVATION_FAILURE
      ACTIVATION_CONDITION_CHECK
      BRAKE_ACTIVATION
      WAIT_FOR_BRAKE_RELEASE
      STEERING_ACTIVATION
      PROPULSION_ACTIVATION
      ACTIVE_MODE_LOOP
      DEACTIVATION
    """

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'state' field must be an integer in [-128, 127]"
        self._state = value
