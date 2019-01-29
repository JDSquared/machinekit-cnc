/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.3-dev at Tue Jan 29 13:41:01 2019. */

#ifndef PB_FIRMWARE_NPB_H_INCLUDED
#define PB_FIRMWARE_NPB_H_INCLUDED
#include <pb.h>

#include "machinetalk/protobuf/nanopb.npb.h"
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _machinetalk_Connector {
    bool has_name;
    char name[20];
    bool has_pins;
    int32_t pins;
} machinetalk_Connector;

typedef struct _machinetalk_Firmware {
    bool has_build_sha;
    char build_sha[40];
    bool has_fpga_part_number;
    char fpga_part_number[20];
    pb_size_t connector_count;
    machinetalk_Connector connector[16];
    bool has_num_leds;
    int32_t num_leds;
    bool has_board_name;
    char board_name[30];
    bool has_comment;
    char comment[80];
} machinetalk_Firmware;

/* Default values for struct fields */

/* Initializer values for message structs */
#define machinetalk_Connector_init_default       {false, "", false, 0}
#define machinetalk_Firmware_init_default        {false, "", false, "", 0, {machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default, machinetalk_Connector_init_default}, false, 0, false, "", false, ""}
#define machinetalk_Connector_init_zero          {false, "", false, 0}
#define machinetalk_Firmware_init_zero           {false, "", false, "", 0, {machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero, machinetalk_Connector_init_zero}, false, 0, false, "", false, ""}

/* Field tags (for use in manual encoding/decoding) */
#define machinetalk_Connector_name_tag           1
#define machinetalk_Connector_pins_tag           2
#define machinetalk_Firmware_build_sha_tag       1
#define machinetalk_Firmware_fpga_part_number_tag 2
#define machinetalk_Firmware_connector_tag       3
#define machinetalk_Firmware_num_leds_tag        4
#define machinetalk_Firmware_board_name_tag      5
#define machinetalk_Firmware_comment_tag         6

/* Struct field encoding specification for nanopb */
extern const pb_field_t machinetalk_Connector_fields[3];
extern const pb_field_t machinetalk_Firmware_fields[7];

/* Maximum encoded size of messages (where known) */
#define machinetalk_Connector_size               27
#define machinetalk_Firmware_size                647

/* helper macros for message type ids if set with */
/* option (nanopb_msgopt).msgid = <id>; */

#ifdef PB_MSGID
#define PB_MSG_380 machinetalk_Connector
#define PB_MSG_385 machinetalk_Firmware

#define FIRMWARE_MESSAGES \
	PB_MSG(380,27,machinetalk_Connector) \
	PB_MSG(385,647,machinetalk_Firmware) \

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
