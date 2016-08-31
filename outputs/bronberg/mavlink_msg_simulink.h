// MESSAGE SIMULINK PACKING

#define MAVLINK_MSG_ID_SIMULINK 150

MAVPACKED(
typedef struct __mavlink_simulink_t {
 uint64_t time_usec; /*< Timestamp*/
 uint64_t counter; /*< Debug counter*/
 float stick_input0; /*< Stick0*/
 float stick_input1; /*< Stick1*/
 float stick_input2; /*< Stick2*/
 float stick_input3; /*< Stick3*/
 float stick_input4; /*< Stick4*/
 float pos_x; /*< local x NED*/
 float pos_y; /*< local y NED*/
 float pos_z; /*< local z NED*/
 float v_x; /*< local vx NED*/
 float v_y; /*< local vy NED*/
 float v_z; /*< local vz NED*/
 float roll; /*< roll*/
 float pitch; /*< pitch*/
 float yaw; /*< yaw*/
 float rollspeed; /*< rollspeed*/
 float pitchspeed; /*< pitchspeed*/
 float yawspeed; /*< yawspeed*/
 float signal_1; /*< misc. signals*/
 float signal_2; /*< misc. signals*/
 float signal_3; /*< misc. signals*/
 float probe_1; /*< misc. signals*/
 float probe_2; /*< misc. signals*/
 float probe_3; /*< misc. signals*/
 float probe_4; /*< misc. signals*/
 float probe_5; /*< misc. signals*/
 float probe_6; /*< misc. signals*/
}) mavlink_simulink_t;

#define MAVLINK_MSG_ID_SIMULINK_LEN 120
#define MAVLINK_MSG_ID_SIMULINK_MIN_LEN 120
#define MAVLINK_MSG_ID_150_LEN 120
#define MAVLINK_MSG_ID_150_MIN_LEN 120

#define MAVLINK_MSG_ID_SIMULINK_CRC 80
#define MAVLINK_MSG_ID_150_CRC 80



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMULINK { \
	150, \
	"SIMULINK", \
	28, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simulink_t, time_usec) }, \
         { "counter", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_simulink_t, counter) }, \
         { "stick_input0", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_simulink_t, stick_input0) }, \
         { "stick_input1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_simulink_t, stick_input1) }, \
         { "stick_input2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_simulink_t, stick_input2) }, \
         { "stick_input3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_simulink_t, stick_input3) }, \
         { "stick_input4", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_simulink_t, stick_input4) }, \
         { "pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_simulink_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_simulink_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_simulink_t, pos_z) }, \
         { "v_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_simulink_t, v_x) }, \
         { "v_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_simulink_t, v_y) }, \
         { "v_z", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_simulink_t, v_z) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_simulink_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_simulink_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_simulink_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_simulink_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_simulink_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_simulink_t, yawspeed) }, \
         { "signal_1", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_simulink_t, signal_1) }, \
         { "signal_2", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_simulink_t, signal_2) }, \
         { "signal_3", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_simulink_t, signal_3) }, \
         { "probe_1", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_simulink_t, probe_1) }, \
         { "probe_2", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_simulink_t, probe_2) }, \
         { "probe_3", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_simulink_t, probe_3) }, \
         { "probe_4", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_simulink_t, probe_4) }, \
         { "probe_5", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_simulink_t, probe_5) }, \
         { "probe_6", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_simulink_t, probe_6) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMULINK { \
	"SIMULINK", \
	28, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simulink_t, time_usec) }, \
         { "counter", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_simulink_t, counter) }, \
         { "stick_input0", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_simulink_t, stick_input0) }, \
         { "stick_input1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_simulink_t, stick_input1) }, \
         { "stick_input2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_simulink_t, stick_input2) }, \
         { "stick_input3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_simulink_t, stick_input3) }, \
         { "stick_input4", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_simulink_t, stick_input4) }, \
         { "pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_simulink_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_simulink_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_simulink_t, pos_z) }, \
         { "v_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_simulink_t, v_x) }, \
         { "v_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_simulink_t, v_y) }, \
         { "v_z", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_simulink_t, v_z) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_simulink_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_simulink_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_simulink_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_simulink_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_simulink_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_simulink_t, yawspeed) }, \
         { "signal_1", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_simulink_t, signal_1) }, \
         { "signal_2", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_simulink_t, signal_2) }, \
         { "signal_3", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_simulink_t, signal_3) }, \
         { "probe_1", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_simulink_t, probe_1) }, \
         { "probe_2", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_simulink_t, probe_2) }, \
         { "probe_3", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_simulink_t, probe_3) }, \
         { "probe_4", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_simulink_t, probe_4) }, \
         { "probe_5", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_simulink_t, probe_5) }, \
         { "probe_6", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_simulink_t, probe_6) }, \
         } \
}
#endif

/**
 * @brief Pack a simulink message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp
 * @param counter Debug counter
 * @param stick_input0 Stick0
 * @param stick_input1 Stick1
 * @param stick_input2 Stick2
 * @param stick_input3 Stick3
 * @param stick_input4 Stick4
 * @param pos_x local x NED
 * @param pos_y local y NED
 * @param pos_z local z NED
 * @param v_x local vx NED
 * @param v_y local vy NED
 * @param v_z local vz NED
 * @param roll roll
 * @param pitch pitch
 * @param yaw yaw
 * @param rollspeed rollspeed
 * @param pitchspeed pitchspeed
 * @param yawspeed yawspeed
 * @param signal_1 misc. signals
 * @param signal_2 misc. signals
 * @param signal_3 misc. signals
 * @param probe_1 misc. signals
 * @param probe_2 misc. signals
 * @param probe_3 misc. signals
 * @param probe_4 misc. signals
 * @param probe_5 misc. signals
 * @param probe_6 misc. signals
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simulink_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, uint64_t counter, float stick_input0, float stick_input1, float stick_input2, float stick_input3, float stick_input4, float pos_x, float pos_y, float pos_z, float v_x, float v_y, float v_z, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, float signal_1, float signal_2, float signal_3, float probe_1, float probe_2, float probe_3, float probe_4, float probe_5, float probe_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SIMULINK_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint64_t(buf, 8, counter);
	_mav_put_float(buf, 16, stick_input0);
	_mav_put_float(buf, 20, stick_input1);
	_mav_put_float(buf, 24, stick_input2);
	_mav_put_float(buf, 28, stick_input3);
	_mav_put_float(buf, 32, stick_input4);
	_mav_put_float(buf, 36, pos_x);
	_mav_put_float(buf, 40, pos_y);
	_mav_put_float(buf, 44, pos_z);
	_mav_put_float(buf, 48, v_x);
	_mav_put_float(buf, 52, v_y);
	_mav_put_float(buf, 56, v_z);
	_mav_put_float(buf, 60, roll);
	_mav_put_float(buf, 64, pitch);
	_mav_put_float(buf, 68, yaw);
	_mav_put_float(buf, 72, rollspeed);
	_mav_put_float(buf, 76, pitchspeed);
	_mav_put_float(buf, 80, yawspeed);
	_mav_put_float(buf, 84, signal_1);
	_mav_put_float(buf, 88, signal_2);
	_mav_put_float(buf, 92, signal_3);
	_mav_put_float(buf, 96, probe_1);
	_mav_put_float(buf, 100, probe_2);
	_mav_put_float(buf, 104, probe_3);
	_mav_put_float(buf, 108, probe_4);
	_mav_put_float(buf, 112, probe_5);
	_mav_put_float(buf, 116, probe_6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMULINK_LEN);
#else
	mavlink_simulink_t packet;
	packet.time_usec = time_usec;
	packet.counter = counter;
	packet.stick_input0 = stick_input0;
	packet.stick_input1 = stick_input1;
	packet.stick_input2 = stick_input2;
	packet.stick_input3 = stick_input3;
	packet.stick_input4 = stick_input4;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.v_x = v_x;
	packet.v_y = v_y;
	packet.v_z = v_z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	packet.signal_1 = signal_1;
	packet.signal_2 = signal_2;
	packet.signal_3 = signal_3;
	packet.probe_1 = probe_1;
	packet.probe_2 = probe_2;
	packet.probe_3 = probe_3;
	packet.probe_4 = probe_4;
	packet.probe_5 = probe_5;
	packet.probe_6 = probe_6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMULINK_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SIMULINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
}

/**
 * @brief Pack a simulink message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp
 * @param counter Debug counter
 * @param stick_input0 Stick0
 * @param stick_input1 Stick1
 * @param stick_input2 Stick2
 * @param stick_input3 Stick3
 * @param stick_input4 Stick4
 * @param pos_x local x NED
 * @param pos_y local y NED
 * @param pos_z local z NED
 * @param v_x local vx NED
 * @param v_y local vy NED
 * @param v_z local vz NED
 * @param roll roll
 * @param pitch pitch
 * @param yaw yaw
 * @param rollspeed rollspeed
 * @param pitchspeed pitchspeed
 * @param yawspeed yawspeed
 * @param signal_1 misc. signals
 * @param signal_2 misc. signals
 * @param signal_3 misc. signals
 * @param probe_1 misc. signals
 * @param probe_2 misc. signals
 * @param probe_3 misc. signals
 * @param probe_4 misc. signals
 * @param probe_5 misc. signals
 * @param probe_6 misc. signals
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simulink_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,uint64_t counter,float stick_input0,float stick_input1,float stick_input2,float stick_input3,float stick_input4,float pos_x,float pos_y,float pos_z,float v_x,float v_y,float v_z,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed,float signal_1,float signal_2,float signal_3,float probe_1,float probe_2,float probe_3,float probe_4,float probe_5,float probe_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SIMULINK_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint64_t(buf, 8, counter);
	_mav_put_float(buf, 16, stick_input0);
	_mav_put_float(buf, 20, stick_input1);
	_mav_put_float(buf, 24, stick_input2);
	_mav_put_float(buf, 28, stick_input3);
	_mav_put_float(buf, 32, stick_input4);
	_mav_put_float(buf, 36, pos_x);
	_mav_put_float(buf, 40, pos_y);
	_mav_put_float(buf, 44, pos_z);
	_mav_put_float(buf, 48, v_x);
	_mav_put_float(buf, 52, v_y);
	_mav_put_float(buf, 56, v_z);
	_mav_put_float(buf, 60, roll);
	_mav_put_float(buf, 64, pitch);
	_mav_put_float(buf, 68, yaw);
	_mav_put_float(buf, 72, rollspeed);
	_mav_put_float(buf, 76, pitchspeed);
	_mav_put_float(buf, 80, yawspeed);
	_mav_put_float(buf, 84, signal_1);
	_mav_put_float(buf, 88, signal_2);
	_mav_put_float(buf, 92, signal_3);
	_mav_put_float(buf, 96, probe_1);
	_mav_put_float(buf, 100, probe_2);
	_mav_put_float(buf, 104, probe_3);
	_mav_put_float(buf, 108, probe_4);
	_mav_put_float(buf, 112, probe_5);
	_mav_put_float(buf, 116, probe_6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMULINK_LEN);
#else
	mavlink_simulink_t packet;
	packet.time_usec = time_usec;
	packet.counter = counter;
	packet.stick_input0 = stick_input0;
	packet.stick_input1 = stick_input1;
	packet.stick_input2 = stick_input2;
	packet.stick_input3 = stick_input3;
	packet.stick_input4 = stick_input4;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.v_x = v_x;
	packet.v_y = v_y;
	packet.v_z = v_z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	packet.signal_1 = signal_1;
	packet.signal_2 = signal_2;
	packet.signal_3 = signal_3;
	packet.probe_1 = probe_1;
	packet.probe_2 = probe_2;
	packet.probe_3 = probe_3;
	packet.probe_4 = probe_4;
	packet.probe_5 = probe_5;
	packet.probe_6 = probe_6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMULINK_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SIMULINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
}

/**
 * @brief Encode a simulink struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simulink C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simulink_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simulink_t* simulink)
{
	return mavlink_msg_simulink_pack(system_id, component_id, msg, simulink->time_usec, simulink->counter, simulink->stick_input0, simulink->stick_input1, simulink->stick_input2, simulink->stick_input3, simulink->stick_input4, simulink->pos_x, simulink->pos_y, simulink->pos_z, simulink->v_x, simulink->v_y, simulink->v_z, simulink->roll, simulink->pitch, simulink->yaw, simulink->rollspeed, simulink->pitchspeed, simulink->yawspeed, simulink->signal_1, simulink->signal_2, simulink->signal_3, simulink->probe_1, simulink->probe_2, simulink->probe_3, simulink->probe_4, simulink->probe_5, simulink->probe_6);
}

/**
 * @brief Encode a simulink struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simulink C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simulink_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simulink_t* simulink)
{
	return mavlink_msg_simulink_pack_chan(system_id, component_id, chan, msg, simulink->time_usec, simulink->counter, simulink->stick_input0, simulink->stick_input1, simulink->stick_input2, simulink->stick_input3, simulink->stick_input4, simulink->pos_x, simulink->pos_y, simulink->pos_z, simulink->v_x, simulink->v_y, simulink->v_z, simulink->roll, simulink->pitch, simulink->yaw, simulink->rollspeed, simulink->pitchspeed, simulink->yawspeed, simulink->signal_1, simulink->signal_2, simulink->signal_3, simulink->probe_1, simulink->probe_2, simulink->probe_3, simulink->probe_4, simulink->probe_5, simulink->probe_6);
}

/**
 * @brief Send a simulink message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp
 * @param counter Debug counter
 * @param stick_input0 Stick0
 * @param stick_input1 Stick1
 * @param stick_input2 Stick2
 * @param stick_input3 Stick3
 * @param stick_input4 Stick4
 * @param pos_x local x NED
 * @param pos_y local y NED
 * @param pos_z local z NED
 * @param v_x local vx NED
 * @param v_y local vy NED
 * @param v_z local vz NED
 * @param roll roll
 * @param pitch pitch
 * @param yaw yaw
 * @param rollspeed rollspeed
 * @param pitchspeed pitchspeed
 * @param yawspeed yawspeed
 * @param signal_1 misc. signals
 * @param signal_2 misc. signals
 * @param signal_3 misc. signals
 * @param probe_1 misc. signals
 * @param probe_2 misc. signals
 * @param probe_3 misc. signals
 * @param probe_4 misc. signals
 * @param probe_5 misc. signals
 * @param probe_6 misc. signals
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simulink_send(mavlink_channel_t chan, uint64_t time_usec, uint64_t counter, float stick_input0, float stick_input1, float stick_input2, float stick_input3, float stick_input4, float pos_x, float pos_y, float pos_z, float v_x, float v_y, float v_z, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, float signal_1, float signal_2, float signal_3, float probe_1, float probe_2, float probe_3, float probe_4, float probe_5, float probe_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SIMULINK_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint64_t(buf, 8, counter);
	_mav_put_float(buf, 16, stick_input0);
	_mav_put_float(buf, 20, stick_input1);
	_mav_put_float(buf, 24, stick_input2);
	_mav_put_float(buf, 28, stick_input3);
	_mav_put_float(buf, 32, stick_input4);
	_mav_put_float(buf, 36, pos_x);
	_mav_put_float(buf, 40, pos_y);
	_mav_put_float(buf, 44, pos_z);
	_mav_put_float(buf, 48, v_x);
	_mav_put_float(buf, 52, v_y);
	_mav_put_float(buf, 56, v_z);
	_mav_put_float(buf, 60, roll);
	_mav_put_float(buf, 64, pitch);
	_mav_put_float(buf, 68, yaw);
	_mav_put_float(buf, 72, rollspeed);
	_mav_put_float(buf, 76, pitchspeed);
	_mav_put_float(buf, 80, yawspeed);
	_mav_put_float(buf, 84, signal_1);
	_mav_put_float(buf, 88, signal_2);
	_mav_put_float(buf, 92, signal_3);
	_mav_put_float(buf, 96, probe_1);
	_mav_put_float(buf, 100, probe_2);
	_mav_put_float(buf, 104, probe_3);
	_mav_put_float(buf, 108, probe_4);
	_mav_put_float(buf, 112, probe_5);
	_mav_put_float(buf, 116, probe_6);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMULINK, buf, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
#else
	mavlink_simulink_t packet;
	packet.time_usec = time_usec;
	packet.counter = counter;
	packet.stick_input0 = stick_input0;
	packet.stick_input1 = stick_input1;
	packet.stick_input2 = stick_input2;
	packet.stick_input3 = stick_input3;
	packet.stick_input4 = stick_input4;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.v_x = v_x;
	packet.v_y = v_y;
	packet.v_z = v_z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	packet.signal_1 = signal_1;
	packet.signal_2 = signal_2;
	packet.signal_3 = signal_3;
	packet.probe_1 = probe_1;
	packet.probe_2 = probe_2;
	packet.probe_3 = probe_3;
	packet.probe_4 = probe_4;
	packet.probe_5 = probe_5;
	packet.probe_6 = probe_6;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMULINK, (const char *)&packet, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
#endif
}

/**
 * @brief Send a simulink message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simulink_send_struct(mavlink_channel_t chan, const mavlink_simulink_t* simulink)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simulink_send(chan, simulink->time_usec, simulink->counter, simulink->stick_input0, simulink->stick_input1, simulink->stick_input2, simulink->stick_input3, simulink->stick_input4, simulink->pos_x, simulink->pos_y, simulink->pos_z, simulink->v_x, simulink->v_y, simulink->v_z, simulink->roll, simulink->pitch, simulink->yaw, simulink->rollspeed, simulink->pitchspeed, simulink->yawspeed, simulink->signal_1, simulink->signal_2, simulink->signal_3, simulink->probe_1, simulink->probe_2, simulink->probe_3, simulink->probe_4, simulink->probe_5, simulink->probe_6);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMULINK, (const char *)simulink, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMULINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simulink_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint64_t counter, float stick_input0, float stick_input1, float stick_input2, float stick_input3, float stick_input4, float pos_x, float pos_y, float pos_z, float v_x, float v_y, float v_z, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, float signal_1, float signal_2, float signal_3, float probe_1, float probe_2, float probe_3, float probe_4, float probe_5, float probe_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint64_t(buf, 8, counter);
	_mav_put_float(buf, 16, stick_input0);
	_mav_put_float(buf, 20, stick_input1);
	_mav_put_float(buf, 24, stick_input2);
	_mav_put_float(buf, 28, stick_input3);
	_mav_put_float(buf, 32, stick_input4);
	_mav_put_float(buf, 36, pos_x);
	_mav_put_float(buf, 40, pos_y);
	_mav_put_float(buf, 44, pos_z);
	_mav_put_float(buf, 48, v_x);
	_mav_put_float(buf, 52, v_y);
	_mav_put_float(buf, 56, v_z);
	_mav_put_float(buf, 60, roll);
	_mav_put_float(buf, 64, pitch);
	_mav_put_float(buf, 68, yaw);
	_mav_put_float(buf, 72, rollspeed);
	_mav_put_float(buf, 76, pitchspeed);
	_mav_put_float(buf, 80, yawspeed);
	_mav_put_float(buf, 84, signal_1);
	_mav_put_float(buf, 88, signal_2);
	_mav_put_float(buf, 92, signal_3);
	_mav_put_float(buf, 96, probe_1);
	_mav_put_float(buf, 100, probe_2);
	_mav_put_float(buf, 104, probe_3);
	_mav_put_float(buf, 108, probe_4);
	_mav_put_float(buf, 112, probe_5);
	_mav_put_float(buf, 116, probe_6);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMULINK, buf, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
#else
	mavlink_simulink_t *packet = (mavlink_simulink_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->counter = counter;
	packet->stick_input0 = stick_input0;
	packet->stick_input1 = stick_input1;
	packet->stick_input2 = stick_input2;
	packet->stick_input3 = stick_input3;
	packet->stick_input4 = stick_input4;
	packet->pos_x = pos_x;
	packet->pos_y = pos_y;
	packet->pos_z = pos_z;
	packet->v_x = v_x;
	packet->v_y = v_y;
	packet->v_z = v_z;
	packet->roll = roll;
	packet->pitch = pitch;
	packet->yaw = yaw;
	packet->rollspeed = rollspeed;
	packet->pitchspeed = pitchspeed;
	packet->yawspeed = yawspeed;
	packet->signal_1 = signal_1;
	packet->signal_2 = signal_2;
	packet->signal_3 = signal_3;
	packet->probe_1 = probe_1;
	packet->probe_2 = probe_2;
	packet->probe_3 = probe_3;
	packet->probe_4 = probe_4;
	packet->probe_5 = probe_5;
	packet->probe_6 = probe_6;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMULINK, (const char *)packet, MAVLINK_MSG_ID_SIMULINK_MIN_LEN, MAVLINK_MSG_ID_SIMULINK_LEN, MAVLINK_MSG_ID_SIMULINK_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMULINK UNPACKING


/**
 * @brief Get field time_usec from simulink message
 *
 * @return Timestamp
 */
static inline uint64_t mavlink_msg_simulink_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field counter from simulink message
 *
 * @return Debug counter
 */
static inline uint64_t mavlink_msg_simulink_get_counter(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field stick_input0 from simulink message
 *
 * @return Stick0
 */
static inline float mavlink_msg_simulink_get_stick_input0(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field stick_input1 from simulink message
 *
 * @return Stick1
 */
static inline float mavlink_msg_simulink_get_stick_input1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field stick_input2 from simulink message
 *
 * @return Stick2
 */
static inline float mavlink_msg_simulink_get_stick_input2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field stick_input3 from simulink message
 *
 * @return Stick3
 */
static inline float mavlink_msg_simulink_get_stick_input3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field stick_input4 from simulink message
 *
 * @return Stick4
 */
static inline float mavlink_msg_simulink_get_stick_input4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field pos_x from simulink message
 *
 * @return local x NED
 */
static inline float mavlink_msg_simulink_get_pos_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field pos_y from simulink message
 *
 * @return local y NED
 */
static inline float mavlink_msg_simulink_get_pos_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field pos_z from simulink message
 *
 * @return local z NED
 */
static inline float mavlink_msg_simulink_get_pos_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field v_x from simulink message
 *
 * @return local vx NED
 */
static inline float mavlink_msg_simulink_get_v_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field v_y from simulink message
 *
 * @return local vy NED
 */
static inline float mavlink_msg_simulink_get_v_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field v_z from simulink message
 *
 * @return local vz NED
 */
static inline float mavlink_msg_simulink_get_v_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field roll from simulink message
 *
 * @return roll
 */
static inline float mavlink_msg_simulink_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field pitch from simulink message
 *
 * @return pitch
 */
static inline float mavlink_msg_simulink_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field yaw from simulink message
 *
 * @return yaw
 */
static inline float mavlink_msg_simulink_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field rollspeed from simulink message
 *
 * @return rollspeed
 */
static inline float mavlink_msg_simulink_get_rollspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field pitchspeed from simulink message
 *
 * @return pitchspeed
 */
static inline float mavlink_msg_simulink_get_pitchspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field yawspeed from simulink message
 *
 * @return yawspeed
 */
static inline float mavlink_msg_simulink_get_yawspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field signal_1 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_signal_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field signal_2 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_signal_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field signal_3 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_signal_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field probe_1 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Get field probe_2 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  100);
}

/**
 * @brief Get field probe_3 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  104);
}

/**
 * @brief Get field probe_4 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  108);
}

/**
 * @brief Get field probe_5 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  112);
}

/**
 * @brief Get field probe_6 from simulink message
 *
 * @return misc. signals
 */
static inline float mavlink_msg_simulink_get_probe_6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  116);
}

/**
 * @brief Decode a simulink message into a struct
 *
 * @param msg The message to decode
 * @param simulink C-struct to decode the message contents into
 */
static inline void mavlink_msg_simulink_decode(const mavlink_message_t* msg, mavlink_simulink_t* simulink)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	simulink->time_usec = mavlink_msg_simulink_get_time_usec(msg);
	simulink->counter = mavlink_msg_simulink_get_counter(msg);
	simulink->stick_input0 = mavlink_msg_simulink_get_stick_input0(msg);
	simulink->stick_input1 = mavlink_msg_simulink_get_stick_input1(msg);
	simulink->stick_input2 = mavlink_msg_simulink_get_stick_input2(msg);
	simulink->stick_input3 = mavlink_msg_simulink_get_stick_input3(msg);
	simulink->stick_input4 = mavlink_msg_simulink_get_stick_input4(msg);
	simulink->pos_x = mavlink_msg_simulink_get_pos_x(msg);
	simulink->pos_y = mavlink_msg_simulink_get_pos_y(msg);
	simulink->pos_z = mavlink_msg_simulink_get_pos_z(msg);
	simulink->v_x = mavlink_msg_simulink_get_v_x(msg);
	simulink->v_y = mavlink_msg_simulink_get_v_y(msg);
	simulink->v_z = mavlink_msg_simulink_get_v_z(msg);
	simulink->roll = mavlink_msg_simulink_get_roll(msg);
	simulink->pitch = mavlink_msg_simulink_get_pitch(msg);
	simulink->yaw = mavlink_msg_simulink_get_yaw(msg);
	simulink->rollspeed = mavlink_msg_simulink_get_rollspeed(msg);
	simulink->pitchspeed = mavlink_msg_simulink_get_pitchspeed(msg);
	simulink->yawspeed = mavlink_msg_simulink_get_yawspeed(msg);
	simulink->signal_1 = mavlink_msg_simulink_get_signal_1(msg);
	simulink->signal_2 = mavlink_msg_simulink_get_signal_2(msg);
	simulink->signal_3 = mavlink_msg_simulink_get_signal_3(msg);
	simulink->probe_1 = mavlink_msg_simulink_get_probe_1(msg);
	simulink->probe_2 = mavlink_msg_simulink_get_probe_2(msg);
	simulink->probe_3 = mavlink_msg_simulink_get_probe_3(msg);
	simulink->probe_4 = mavlink_msg_simulink_get_probe_4(msg);
	simulink->probe_5 = mavlink_msg_simulink_get_probe_5(msg);
	simulink->probe_6 = mavlink_msg_simulink_get_probe_6(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMULINK_LEN? msg->len : MAVLINK_MSG_ID_SIMULINK_LEN;
        memset(simulink, 0, MAVLINK_MSG_ID_SIMULINK_LEN);
	memcpy(simulink, _MAV_PAYLOAD(msg), len);
#endif
}
