## --------------------
## MAVLink Commands:
## --------------------

File location
`ardupilot/build/sitl/libraries/GCS_MAVLink/include/mavlink/v2.0/ardupilotmega/ardupilotmega.h`

Useful commands
`MAV_CMD_NAV_WAYPOINT=16` /* Navigate to waypoint.*
`MAV_CMD_NAV_CONTINUE_AND_CHANGE_ALT=30` /* Continue on the current course and climb/descend to specified altitude.*
`MAV_CMD_NAV_LOITER_TO_ALT=31` /* Begin loiter at the specified Latitude and Longitude. Don't leave loiter until the altitude has been reached.*



## --------------------
## MAVProxy Commands:
## --------------------

From Copter:
mode guided
arm throttle
takeoff 40

mode circle --> loses altitude, run command "rc 3 1500" first (sets throttle to mid-stick)

guided <LAT> <LON> <ALT>
--> go to specific location

wp load <MISSIONFILE>
arm throttle
mode auto
--> Load mission file, run mission



## --------------------
## Example Mission File
## --------------------

<START>
QGC WPL 110
0   0   0   16  0.000000	0.000000	0.000000	0.000000	-35.363262	149.165238	584.090027	1
1	0	3	22	15.000000	0.000000	0.000000	0.000000	-35.359833	149.164703	41.029999	1
2	0	3	16	0.000000	0.000000	0.000000	0.000000	-35.359585	149.161392	120.000000	1
3	0	10	31	0.000000	0.000000	0.000000	0.000000	-35.365938	149.134220	30.000000	1
4	0	10	31	0.000000	0.000000	0.000000	0.000000	-35.372569	149.142725	300.000000	1
<EOF>



Commented version:
<START>
header: QGroundControl, Waypoint List, version
QGC WPL 110

INDEX|CURRENT WP|COORD FRAME|COMMAND|PARAM1|PARAM2|PARAM3|PARAM4|PARAM5/X/LATITUDE|PARAM6/Y/LONGITUDE|PARAM7/Z/ALTITUDE|AUTOCONTINUE
0   0   0   16  0.000000	0.000000	0.000000	0.000000	-35.363262	149.165238	584.090027	1


1	0	3	22	15.000000	0.000000	0.000000	0.000000	-35.359833	149.164703	41.029999	1
2	0	3	16	0.000000	0.000000	0.000000	0.000000	-35.359585	149.161392	120.000000	1
3	0	10	31	0.000000	0.000000	0.000000	0.000000	-35.365938	149.134220	30.000000	1
4	0	10	31	0.000000	0.000000	0.000000	0.000000	-35.372569	149.142725	300.000000	1
<EOF>

Note: the PARAM values are dependent on the command, look up definitions in the ardupilotmega.h file
