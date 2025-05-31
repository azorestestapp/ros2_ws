autodrive_msgs/GeneralDetection detection
uint64[] corresponding_lane
uint64[] associated_sign
uint64[] associated_stop_line

uint32 STOP = 0
uint32 YIELD = 1
uint32 DO_NOT_ENTER = 2
uint32 NO_LEFT = 3
uint32 NO_STRAIGHT = 4
uint32 NO_U_TURN = 5
uint32 NO_RIGHT_ON_RED = 6 # also refers to NO TURN ON RED sign
uint32 RAILWAY_CROSSING = 7
uint32 ONE_WAY = 8
uint32 ROAD_CLOSED = 9
uint32 NO_RIGHT = 10
uint32 OTHER = 11

# sign
uint32 sign_type
float32 sign_type_confidence

# do not turn left during times shown
uint32 start_time # 8pm = 20, military time
uint32 end_time
string start_day
string end_day
