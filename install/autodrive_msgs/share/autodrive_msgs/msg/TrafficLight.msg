autodrive_msgs/GeneralDetection detection
uint64[] corresponding_lane
uint64[] associated_light
uint64[] associated_stop_line

int8 OFF = 0
int8 RED = 1
int8 YELLOW = 2
int8 GREEN = 3

int8 main_bulb
float32 main_bulb_confidence
int8 left_turn 
float32 left_bulb_confidence
int8 right_turn
float32 right_bulb_confidence

bool flashing

int8 THREE_BULB = 0
int8 FOUR_BULB = 1
int8 DOGHOUSE = 2
int8 TRIANGLE = 3

int8 shape_category
float32 shape_confidence
