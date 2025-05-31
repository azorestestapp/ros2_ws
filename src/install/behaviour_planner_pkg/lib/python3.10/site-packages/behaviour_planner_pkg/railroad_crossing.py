from py_trees.common import Status
from py_trees.composites import Sequence
from behaviour_planner_pkg.utilities import (
    Placeholder,
    SetSpeed,
    ResetSpeed
    )
from autodrive_msgs.msg import RailroadCrossing
from py_trees.decorators import Inverter

class isActiveCondition(Behaviour):
    def __init__(self, name: str, bt_instance):
        super(isActiveCondition, self).__init__(name)
        self.bt_instance = bt_instance

    def setup(self):
        self.logger.debug(f"{self.name}::setup")

    def initialise(self):
        self.logger.debug(f"{self.name}::initialise")

    def update(self):
        self.logger.debug(f"{self.name}::update")

        self.isActive = self.bt_instance.detection.active

        if self.isActive :
            return Status.SUCCESS
        return Status.FAILURE

    def terminate(self, new_status):
        self.logger.debug(f"{self.name}::terminate to {new_status}")

# an instance of a railroad being active has been created 
def get_railroad_isActive_tree(bt_instance):
    railroad_is_active_sequence = Sequence("railroad is active", memory = True) # when we return running if bar is still active we want to not start from beginning of sequnce 
    railroad_is_active_sequence.add_children([
        # active condition
        isActiveCondition("railroad_active", bt_instance),
        # decelerate to zero based on lanelits 
        SetSpeed("stop", bt_instance, 0.0, SpeedLimit.MPS, 15, start_ahead_distance=4), # param
        # repeatedly check activity level
        Placeholder("Stay running", Status.FAILURE)
        # when the tree gets destroyed we would fall back to reaching the speed limit speed anyways  
        ])
    return railroad_is_active_sequence


    # an instance of a railroad being not active has been created 
def get_railroad_isNotActive_tree(bt_instance):
    railroad_isNot_active_sequence = Sequence("railroad not active", memory = True) # when we return running if bar is still active we want to not start from beginning of sequnce 
    railroad_isNot_active_sequence.add_children([
        # not active condition
        Inverter("railroad_is_inactive", RailroadActiveCondition("railroad_is_inactive", bt_instance)),
        #reset speed
        ResetSpeed("reset_speed", bt_instance),
        #slowly proceed
        SetSpeed("stop", bt_instance, 8.33, SpeedLimit.MPS, 15, start_ahead_distance=4), # param
        Placeholder("Stay running", Status.FAILURE)
        ])
    return railroad_isNot_active_sequence


def get_railroad_tree(bt_instance):
    activity_selector = Selector(name="sign_selector", memory=True)
    activity_selector.add_children([
        get_railroad_isActive_tree(bt_instance),
        get_railroad_isNotActive_tree(bt_instance)
    ])
    return activity_selector


    