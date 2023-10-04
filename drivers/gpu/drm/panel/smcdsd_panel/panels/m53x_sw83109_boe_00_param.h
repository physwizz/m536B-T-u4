/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SW83109_BOE_00_PARAM_H__
#define __SW83109_BOE_00_PARAM_H__

#include <linux/types.h>
#include <drm/drm_mipi_dsi.h>

#include "../smcdsd_dsi_msg.h"
#include "m53x_sw83109_boe_00_param_brightness.h"
#include "m53x_sw83109_boe_00_param_selfmask.h"

#define LCD_TYPE_VENDOR		"BOE"

#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xAD
#define LDI_REG_DATE		0xA9
#define LDI_REG_CHIP_ID		0xEA
#define LDI_REG_TRIM		0xEB

/* len is read length */
#define LDI_LEN_ID		3
#define LDI_LEN_DATE		10	/* A9h 1st ... 11th but ap max rx length is 10 */
#define LDI_LEN_CHIP_ID		10	/* EAh 1st ... 10th */
#define LDI_LEN_TRIM		9

#define NORMAL_TEMPERATURE	25	/* 25 degrees Celsius */

static unsigned char SW83109_BOE_00_SLEEP_IN[] = { 0x10 };
static unsigned char SW83109_BOE_00_DISPLAY_OFF[] = { 0x28 };
static unsigned char SW83109_BOE_00_DISPLAY_ON[] = { 0x29 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_0[] = { 0xB0, 0xCA };
static unsigned char SW83109_BOE_00_LEVEL_KEY_1[] = { 0xB0, 0xA1 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_2[] = { 0xB0, 0xA2 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_3[] = { 0xB0, 0xA3 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_4[] = { 0xB0, 0xA4 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_5[] = { 0xB0, 0xA5 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_6[] = { 0xB0, 0xA6 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_7[] = { 0xB0, 0xA7 };
static unsigned char SW83109_BOE_00_LEVEL_KEY_8[] = { 0xB0, 0xA8 };

static unsigned char SW83109_BOE_00_INIT_001[] = {
	//0x0A,
	0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x09, 0x60, 0x04, 0x38,
	0x00, 0x3C, 0x02, 0x1C, 0x02, 0x1C, 0x02, 0x00, 0x02, 0x0E,
	0x00, 0x20, 0x05, 0xD2, 0x00, 0x07, 0x00, 0x0C, 0x01, 0xA1,
	0x01, 0xB2, 0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
	0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38, 0x46, 0x54,
	0x62, 0x69, 0x70, 0x77, 0x79, 0x7B, 0x7D, 0x7E, 0x01, 0x02,
	0x01, 0x00, 0x09, 0x40, 0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA,
	0x19, 0xF8, 0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
	0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_002[] = {
	0xB0,
	0xA1,
};

static unsigned char SW83109_BOE_00_INIT_003[] = {
	0xB1,
	0x11, 0x0C, 0x00, 0x80, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_004[] = {
	0xB3,
	0x23, 0x22, 0x23, 0x22, 0x50, 0x4F, 0x23, 0x22, 0x10, 0x00,
	0x0F, 0x00, 0x90, 0x09, 0x0F, 0x00, 0x10, 0x00, 0x0F, 0x00,
	0x10, 0x00, 0x0F, 0x00, 0x3B, 0x3B, 0x3C, 0x3C, 0x5F, 0x5F,
	0x78, 0x78, 0x10, 0x00, 0x0F, 0x00, 0x1E, 0x22, 0x14, 0x00,
	0x0B, 0x00, 0x78,
};

static unsigned char SW83109_BOE_00_INIT_005[] = {
	0xC1,
	0xC0, 0x60, 0xB1, 0x3F, 0x1A, 0x99, 0x99, 0x00, 0x15, 0x00,
	0x39, 0x07, 0x00, 0x80, 0x05, 0x0F, 0x02, 0x99, 0x99, 0x99,
	0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x01, 0x00, 0x00, 0x00,
	0x40,
};

static unsigned char SW83109_BOE_00_INIT_006[] = {
	0xCA,
	0x00, 0xA0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x60, 0x00, 0x01, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_007[] = {
	0xB6,
	0x01,
};

static unsigned char SW83109_BOE_00_INIT_008[] = {
	0xB0,
	0xA2,
};

static unsigned char SW83109_BOE_00_INIT_009[] = {
	0xB3,
	0x00, 0x00, 0x2C, 0x66, 0x07, 0x33, 0x00, 0x10, 0x87, 0x33,
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00,
	0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x15, 0x15, 0x00, 0x00, 0x00, 0x11, 0x38, 0x45, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66,
	0x22, 0x00, 0x00, 0x00, 0x00, 0x38, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_010[] = {
	0xBB,
	0x26, 0x1E, 0x0C, 0x20, 0x10, 0x20, 0x14, 0x20, 0x18, 0x20,
	0x20, 0x18, 0x1C, 0x18, 0x1C, 0x18, 0x01, 0x21, 0x33, 0x32,
	0x42, 0x30, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x00,
};

static unsigned char SW83109_BOE_00_INIT_011[] = {
	0xB0,
	0xA6,
};

static unsigned char SW83109_BOE_00_INIT_012[] = {
	0xF7,
	0xAC,
};

static unsigned char SW83109_BOE_00_INIT_013[] = {
	0xFC,
	0x00, 0x00, 0x00, 0x81, 0x80, 0xAD, 0x44,
};

static unsigned char SW83109_BOE_00_INIT_014[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_INIT_015[] = {
	0x2A,
	0x00, 0x00, 0x04, 0x37,
};

static unsigned char SW83109_BOE_00_INIT_016[] = {
	0x2B,
	0x00, 0x00, 0x09, 0x5F,
};

static unsigned char SW83109_BOE_00_INIT_017[] = {
	0x30,
	0x00, 0x00, 0x09, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_018[] = {
	0x31,
	0x00, 0x00, 0x04, 0x37,
};

static unsigned char SW83109_BOE_00_INIT_019[] = {
	0x35,
	0x00,
};

static unsigned char SW83109_BOE_00_INIT_020[] = {
	0x4D,
	0x19,
};

static unsigned char SW83109_BOE_00_INIT_021[] = {
	0x3D,
	0x00, 0x01,
};

static unsigned char SW83109_BOE_00_INIT_022[] = {
	0x53,
	0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_023[] = {
	0x55,
	0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00,
	0x72, 0xD0, 0x1C, 0x70, 0xD0, 0xE1,
};

static unsigned char SW83109_BOE_00_INIT_024[] = {
	0x68,
	0x08, 0x02,
};

static unsigned char SW83109_BOE_00_INIT_025[] = {
	0x69,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_026[] = {
	0x11,
};

static unsigned char SW83109_BOE_00_INIT_027[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_INIT_028[] = {
	0x53,
	0x20, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_029[] = {
	0xB0,
	0xA3,
};

static unsigned char SW83109_BOE_00_INIT_030[] = {
	0xB3,
	0x20, 0xE2, 0x40, 0x00, 0x08, 0x06, 0x40, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_031[] = {
	0xB0,
	0xA4,
};

static unsigned char SW83109_BOE_00_INIT_032[] = {
	0xB1,
	0x07, 0xF4, 0xFF, 0x3F, 0xFF, 0x3F, 0x7F, 0x87, 0x20, 0x80,
	0x68, 0x88, 0x68, 0x89, 0x89, 0x69, 0x2F, 0xFF, 0x4F, 0xFF,
	0x6E, 0xEE, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0x04, 0x04, 0x00, 0x37, 0x09,
	0x00, 0x5F, 0xC0, 0xC0, 0x20,
};

static unsigned char SW83109_BOE_00_INIT_033[] = {
	0xB0,
	0xA1,
};

static unsigned char SW83109_BOE_00_INIT_034[] = {
	0xF0,
	0x32, 0x03, 0x8B, 0x03, 0x8C, 0x01, 0x0E, 0x01, 0x0F, 0x80,
	0xDD, 0x01, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_035[] = {
	0xB0,
	0xA7,
};

static unsigned char SW83109_BOE_00_INIT_036[] = {
	0xB1,
	0xE0, 0x00,
};

static unsigned char SW83109_BOE_00_INIT_037[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_INIT_038[] = {
	0x57,
	0x01,
};

static unsigned char SW83109_BOE_00_INIT_039[] = {
	0x51,
	0x00, 0x00,
};

#if 0
static unsigned char SW83109_BOE_00_INIT_040[] = {
	0x29,
};
#endif

static unsigned char SW83109_BOE_00_MIPI_806[] = {
	0xF0,
	0x32, 0x03, 0x8B, 0x03, 0x8C, 0x01, 0x0E, 0x01, 0x0F, 0x80,
	0xDD, 0x01, 0x00,
};

static unsigned char SW83109_BOE_00_MIPI_822[] = {
	0xF0,
	0x32, 0x03, 0x8C, 0x03, 0x8D, 0x01, 0x12, 0x01, 0x13, 0x80,
	0xD4, 0x01, 0x00,
};

static unsigned char SW83109_BOE_00_MIPI_824[] = {
	0xF0,
	0x32, 0x03, 0x8C, 0x03, 0x8D, 0x01, 0x12, 0x01, 0x13, 0x80,
	0xD3, 0x01, 0x00,
};

static unsigned char SW83109_BOE_00_AOD_INIT_001[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_AOD_INIT_002[] = {
	0x53,
	0x00, 0x00,
};

#if 0
static unsigned char SW83109_BOE_00_AOD_INIT_003[] = {
	0x51,
	0x0F, 0xFF,
};
#endif

static unsigned char SW83109_BOE_00_AOD_INIT_60NIT[] = {
	0x51,
	0x0F, 0xFF,
};

static unsigned char SW83109_BOE_00_AOD_INIT_30NIT[] = {
	0x51,
	0x0B, 0xAC,
};

static unsigned char SW83109_BOE_00_AOD_INIT_10NIT[] = {
	0x51,
	0x06, 0x44,
};

static unsigned char SW83109_BOE_00_AOD_INIT_02NIT[] = {
	0x51,
	0x00, 0x03,
};

static unsigned char SW83109_BOE_00_AOD_INIT_004[] = {
	0x12,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_001[] = {
	0xB0,
	0xCA,
};

#if 0
static unsigned char SW83109_BOE_00_AOD_EXIT_002[] = {
	0x51,
	0x0F, 0xFF,
};
#endif

static unsigned char SW83109_BOE_00_AOD_EXIT_60NIT[] = {
	0x51,
	0x04, 0xE9,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_30NIT[] = {
	0x51,
	0x03, 0xAF,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_10NIT[] = {
	0x51,
	0x02, 0x85,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_02NIT[] = {
	0x51,
	0x00, 0x03,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_003[] = {
	0x13,
};

static unsigned char SW83109_BOE_00_AOD_EXIT_004[] = {
	0x53,
	0x20, 0x00,
};

static unsigned char SW83109_BOE_00_60HZ_INIT_001[] = {
	0xB0,
	0xA6,
};

static unsigned char SW83109_BOE_00_60HZ_INIT_002[] = {
	0xFC,
	0x00, 0x00, 0x00, 0x81, 0x80, 0xAD, 0x44,
};

static unsigned char SW83109_BOE_00_60HZ_INIT_003[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_60HZ_INIT_004[] = {
	0x57,
	0x01,
};

static unsigned char SW83109_BOE_00_120HZ_INIT_001[] = {
	0xB0,
	0xA6,
};

static unsigned char SW83109_BOE_00_120HZ_INIT_002[] = {
	0xFC,
	0x00, 0x00, 0x00, 0x81, 0x80, 0x8B, 0x44,
};

static unsigned char SW83109_BOE_00_120HZ_INIT_003[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_120HZ_INIT_004[] = {
	0x57,
	0x03,
};

static unsigned char SW83109_BOE_00_TEMPERATURE_01_OR_MORE[] = {	/* Temp. >= 1 */
	0x4D,
	0x19,
};

static unsigned char SW83109_BOE_00_TEMPERATURE_00[] = {		/* Temp. = 0 */
	0x4D,
	0x00,
};

static unsigned char SW83109_BOE_00_TEMPERATURE_MINUS_01_OR_MORE[] = {	/* -1 >= Temp. >= -14 */
	0x4D,
	0x8E,
};

static unsigned char SW83109_BOE_00_TEMPERATURE_MINUS_15_OR_LESS[] = {	/* -15 >= Temp. >= -20 */
	0x4D,
	0x94,
};

static unsigned char SW83109_BOE_00_PCD_INIT_001[] = {
	0xB0,
	0xA1,
};

static unsigned char SW83109_BOE_00_PCD_INIT_002[] = {
	0xC0,
	0x04, 0x00, 0x00, 0x02, 0x00,
};

static unsigned char SW83109_BOE_00_PCD_INIT_003[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_PCD_INIT_004[] = {
	0x69,
	0x00, 0x00, 0x08, 0x00,
};

static unsigned char SW83109_BOE_00_PCD_INIT_005[] = {
	0xB0,
	0xA2,
};

static unsigned char SW83109_BOE_00_PCD_INIT_006[] = {
	0xBD,
	0x12, 0x11, 0x12, 0x12, 0x07, 0x07, 0x09, 0x09, 0x0A, 0x0A,
	0x00, 0x00, 0x03, 0x03, 0x02, 0x02,
};

static unsigned char SW83109_BOE_00_PCD_INIT_007[] = {
	0xBE,
	0x12, 0x11, 0x12, 0x12, 0x07, 0x07, 0x09, 0x09, 0x0A, 0x0A,
	0x00, 0x00, 0x03, 0x03, 0x02, 0x02,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_001[] = {
	0xB0,
	0xA3,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_002[] = {
	0xB6,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_003[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_004[] = {
	0x69,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_005[] = {
	0xB0,
	0xA2,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_006[] = {
	0xBD,
	0x12, 0x0F, 0x12, 0x12, 0x07, 0x07, 0x09, 0x09, 0x0A, 0x0A,
	0x00, 0x00, 0x03, 0x03, 0x02, 0x02,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_007[] = {
	0xBE,
	0x12, 0x0F, 0x12, 0x12, 0x07, 0x07, 0x09, 0x09, 0x0A, 0x0A,
	0x00, 0x00, 0x03, 0x03, 0x02, 0x02,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_008[] = {
	0xB0,
	0xA3,
};

static unsigned char SW83109_BOE_00_PCD_EXIT_009[] = {
	0xB6,
	0x90, 0x24, 0x5C, 0x71, 0x85, 0xFB, 0x71, 0x85, 0xFB, 0x71,
	0x85, 0xFB, 0x62, 0xF4, 0x8C, 0x45, 0x3A, 0x46, 0x26, 0x89,
	0xF7, 0x08, 0xA0, 0xE0, 0x08, 0xFA, 0x86, 0x09, 0x06, 0x7A,
};

static unsigned char SW83109_BOE_00_ACL_INIT_001[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_ACL_INIT_002[] = {
	0x69,
	0x40, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_ACL_EXIT_001[] = {
	0xB0,
	0xCA,
};

static unsigned char SW83109_BOE_00_ACL_EXIT_002[] = {
	0x69,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SW83109_BOE_00_ACL_15P_001[] = {
	0xB0,
	0xA5,
};

static unsigned char SW83109_BOE_00_ACL_15P_002[] = {
	0xC7,
	0x35, 0x0F, 0x77, 0x77, 0x77, 0x77, 0x00,
};

static unsigned char SW83109_BOE_00_ACL_15P_003[] = {
	0xC8,
	0x05, 0xAF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF,
};

static unsigned char SW83109_BOE_00_ACL_15P_004[] = {
	0xC9,
	0x05, 0xAF, 0x7F, 0xFF, 0x7F, 0xFF, 0x59, 0xD3, 0x46, 0xBE,
};

static unsigned char SW83109_BOE_00_ACL_08P_001[] = {
	0xB0,
	0xA5,
};

static unsigned char SW83109_BOE_00_ACL_08P_002[] = {
	0xC7,
	0x35, 0x0F, 0x77, 0x77, 0x77, 0x77, 0x00,
};

static unsigned char SW83109_BOE_00_ACL_08P_003[] = {
	0xC8,
	0x05, 0xAF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF,
};

static unsigned char SW83109_BOE_00_ACL_08P_004[] = {
	0xC9,
	0x05, 0xAF, 0x7F, 0xFF, 0x7F, 0xFF, 0x69, 0xE4, 0x60, 0xDC,
};

static struct msg_segment MSG_SW83109_BOE_00_EXIT[] = {
	{MSG_TX(SW83109_BOE_00_DISPLAY_OFF)},
	{MSG_TX(SW83109_BOE_00_SLEEP_IN), MSG_MSLEEP(83)},	/* Wait 5 Frames(83ms @60Hz) */
};

static struct msg_segment MSG_SW83109_BOE_00_INIT[] = {
	{MSG_TX(SW83109_BOE_00_INIT_001), .modes = BIT(MSG_MODE_SINGLE_TRANSFER), .dsi_msg.type = MIPI_DSI_PICTURE_PARAMETER_SET},
	{MSG_TX(SW83109_BOE_00_INIT_002), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_003), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_004), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_005), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_006), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_007), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_008), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_009), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_010), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_011), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_012), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_013), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_014), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_015), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_016), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_017), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_018), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_019), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_020), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_021), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_022), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_023), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_024), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_025), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_026), .modes = BIT(MSG_MODE_SINGLE_TRANSFER), MSG_MSLEEP(50)},	/* Delay 50ms */
	{MSG_TX(SW83109_BOE_00_INIT_027), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_028), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_029), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_030), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_031), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_032), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
#ifndef CONFIG_SMCDSD_DYNAMIC_MIPI
	{MSG_TX(SW83109_BOE_00_INIT_033), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_034), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},	/* 806 */
#endif
	{MSG_TX(SW83109_BOE_00_INIT_035), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_036), .modes = BIT(MSG_MODE_SINGLE_TRANSFER), MSG_MSLEEP(8)},	/* Delay 8ms */
	{MSG_TX(SW83109_BOE_00_INIT_037), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_038), .modes = BIT(MSG_MODE_SINGLE_TRANSFER)},
	{MSG_TX(SW83109_BOE_00_INIT_039), .modes = BIT(MSG_MODE_SINGLE_TRANSFER), MSG_MSLEEP(50)},	/* Delay 50ms */
};

static struct msg_segment MSG_SW83109_BOE_00_MIPI_806[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_1)},
	{MSG_TX(SW83109_BOE_00_MIPI_806)},
};

static struct msg_segment MSG_SW83109_BOE_00_MIPI_822[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_1)},
	{MSG_TX(SW83109_BOE_00_MIPI_822)},
};

static struct msg_segment MSG_SW83109_BOE_00_MIPI_824[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_1)},
	{MSG_TX(SW83109_BOE_00_MIPI_824)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_INIT_60NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_INIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_002)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_60NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_004), .modes = BIT(MSG_MODE_BLOCKING)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_INIT_30NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_INIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_002)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_30NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_004), .modes = BIT(MSG_MODE_BLOCKING)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_INIT_10NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_INIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_002)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_10NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_004), .modes = BIT(MSG_MODE_BLOCKING)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_INIT_02NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_INIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_002)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_02NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_INIT_004), .modes = BIT(MSG_MODE_BLOCKING)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_EXIT_60NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_60NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_003), MSG_MSLEEP(50)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_EXIT_30NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_30NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_003), MSG_MSLEEP(50)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_EXIT_10NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_10NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_003), MSG_MSLEEP(50)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_AOD_EXIT_02NIT[] = {
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_02NIT)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_003), MSG_MSLEEP(50)},
	{MSG_TX(SW83109_BOE_00_AOD_EXIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_60HZ_INIT[] = {
	{MSG_TX(SW83109_BOE_00_60HZ_INIT_001)},
	{MSG_TX(SW83109_BOE_00_60HZ_INIT_002)},
	{MSG_TX(SW83109_BOE_00_60HZ_INIT_003)},
	{MSG_TX(SW83109_BOE_00_60HZ_INIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_120HZ_INIT[] = {
	{MSG_TX(SW83109_BOE_00_120HZ_INIT_001)},
	{MSG_TX(SW83109_BOE_00_120HZ_INIT_002)},
	{MSG_TX(SW83109_BOE_00_120HZ_INIT_003)},
	{MSG_TX(SW83109_BOE_00_120HZ_INIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_TEMPERATURE_01_OR_MORE[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
	{MSG_TX(SW83109_BOE_00_TEMPERATURE_01_OR_MORE)},
};

static struct msg_segment MSG_SW83109_BOE_00_TEMPERATURE_00[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
	{MSG_TX(SW83109_BOE_00_TEMPERATURE_00)},
};

static struct msg_segment MSG_SW83109_BOE_00_TEMPERATURE_MINUS_01_OR_MORE[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
	{MSG_TX(SW83109_BOE_00_TEMPERATURE_MINUS_01_OR_MORE)},
};

static struct msg_segment MSG_SW83109_BOE_00_TEMPERATURE_MINUS_15_OR_LESS[] = {
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
	{MSG_TX(SW83109_BOE_00_TEMPERATURE_MINUS_15_OR_LESS)},
};

static struct msg_segment MSG_SW83109_BOE_00_PCD_INIT[] = {
	{MSG_TX(SW83109_BOE_00_PCD_INIT_001)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_002)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_003)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_004), MSG_MSLEEP(8)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_005)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_006)},
	{MSG_TX(SW83109_BOE_00_PCD_INIT_007)},
};

static struct msg_segment MSG_SW83109_BOE_00_PCD_EXIT[] = {
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_002)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_003)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_004), MSG_MSLEEP(17)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_005)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_006)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_007), MSG_MSLEEP(8)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_008)},
	{MSG_TX(SW83109_BOE_00_PCD_EXIT_009)},
};

static struct msg_segment MSG_SW83109_BOE_00_ACL_EXIT[] = {
	{MSG_TX(SW83109_BOE_00_ACL_EXIT_001)},
	{MSG_TX(SW83109_BOE_00_ACL_EXIT_002)},
};

#if 0
static struct msg_segment MSG_SW83109_BOE_00_ACL_15P[] = {
	{MSG_TX(SW83109_BOE_00_ACL_15P_001)},
	{MSG_TX(SW83109_BOE_00_ACL_15P_002)},
	{MSG_TX(SW83109_BOE_00_ACL_15P_003)},
	{MSG_TX(SW83109_BOE_00_ACL_15P_004)},
	{MSG_TX(SW83109_BOE_00_ACL_INIT_001)},
	{MSG_TX(SW83109_BOE_00_ACL_INIT_002)},
};
#endif

static struct msg_segment MSG_SW83109_BOE_00_ACL_08P[] = {
	{MSG_TX(SW83109_BOE_00_ACL_08P_001)},
	{MSG_TX(SW83109_BOE_00_ACL_08P_002)},
	{MSG_TX(SW83109_BOE_00_ACL_08P_003)},
	{MSG_TX(SW83109_BOE_00_ACL_08P_004)},
	{MSG_TX(SW83109_BOE_00_ACL_INIT_001)},
	{MSG_TX(SW83109_BOE_00_ACL_INIT_002)},
};

static struct msg_segment MSG_SW83109_BOE_00_MASK_INIT_START[] = {
	{MSG_TX(SW83109_BOE_00_SELF_MASK_OFF_001)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_OFF_002)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_INIT_001)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_INIT_002)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_INIT_003), .modes = BIT(MSG_MODE_BLOCKING), MSG_MSLEEP(1)},
	//{MSG_TX(SW83109_BOE_00_SELF_MASK_DATA), .modes = BIT(MSG_MODE_BLOCKING), MSG_MSLEEP(1)}, //todo
	//{MSG_TX(SW83109_BOE_00_SELF_MASK_INIT_004)},
};

static struct msg_segment MSG_SW83109_BOE_00_MASK_INIT_END[] = {
	{MSG_TX(SW83109_BOE_00_SELF_MASK_INIT_004)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
};

static struct msg_segment MSG_SW83109_BOE_00_SELF_MASK_ON[] = {
	{MSG_TX(SW83109_BOE_00_SELF_MASK_ON_001)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_ON_002)},
};

static struct msg_segment MSG_SW83109_BOE_00_SELF_MASK_ON_FAC[] = {
	{MSG_TX(SW83109_BOE_00_SELF_MASK_ON_FAC_001)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_ON_FAC_002)},
};

static struct msg_segment MSG_SW83109_BOE_00_SELF_MASK_OFF[] = {
	{MSG_TX(SW83109_BOE_00_SELF_MASK_OFF_001)},
	{MSG_TX(SW83109_BOE_00_SELF_MASK_OFF_002)},
};

static struct msg_segment MSG_SW83109_BOE_SINGLE_COMMAND[] = {
	{MSG_TX(SW83109_BOE_00_DISPLAY_ON), .modes = BIT(MSG_MODE_BLOCKING)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_0)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_1)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_2)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_3)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_4)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_5)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_6)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_7)},
	{MSG_TX(SW83109_BOE_00_LEVEL_KEY_8)},
	{ .ndarray = &SW83109_BOE_00_BRIGHTNESS_NDARRAY, },
};

enum {
	ENUM_APPEND(MSG_SW83109_BOE_00_DISPLAY_ON)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_0)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_1)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_2)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_3)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_4)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_5)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_6)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_7)
	ENUM_APPEND(MSG_SW83109_BOE_00_LEVEL_KEY_8)
	ENUM_APPEND(MSG_SW83109_BOE_00_BRIGHTNESS)
	ENUM_APPEND(MSG_SW83109_BOE_00_EXIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_INIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_MIPI_806)
	ENUM_APPEND(MSG_SW83109_BOE_00_MIPI_822)
	ENUM_APPEND(MSG_SW83109_BOE_00_MIPI_824)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_INIT_60NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_INIT_30NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_INIT_10NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_INIT_02NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_EXIT_60NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_EXIT_30NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_EXIT_10NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_AOD_EXIT_02NIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_60HZ_INIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_120HZ_INIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_TEMPERATURE_01_OR_MORE)
	ENUM_APPEND(MSG_SW83109_BOE_00_TEMPERATURE_00)
	ENUM_APPEND(MSG_SW83109_BOE_00_TEMPERATURE_MINUS_01_OR_MORE)
	ENUM_APPEND(MSG_SW83109_BOE_00_TEMPERATURE_MINUS_15_OR_LESS)
	ENUM_APPEND(MSG_SW83109_BOE_00_PCD_INIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_PCD_EXIT)
	ENUM_APPEND(MSG_SW83109_BOE_00_ACL_EXIT)
	//ENUM_APPEND(MSG_SW83109_BOE_00_ACL_15P)
	ENUM_APPEND(MSG_SW83109_BOE_00_ACL_08P)
	ENUM_APPEND(MSG_SW83109_BOE_00_MASK_INIT_START)
	ENUM_APPEND(MSG_SW83109_BOE_00_MASK_INIT_END)
	ENUM_APPEND(MSG_SW83109_BOE_00_SELF_MASK_ON)
	ENUM_APPEND(MSG_SW83109_BOE_00_SELF_MASK_ON_FAC)
	ENUM_APPEND(MSG_SW83109_BOE_00_SELF_MASK_OFF)
};

static struct msg_package PACKAGE_SW83109_BOE[] = {
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_DISPLAY_ON)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_0)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_1)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_2)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_3)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_4)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_5)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_6)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_7)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_LEVEL_KEY_8)], 1)},
	{ADDRESS(MSG_SW83109_BOE_SINGLE_COMMAND[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_BRIGHTNESS)], 1)},
	{ADDRESS(MSG_SW83109_BOE_00_EXIT)},
	{ADDRESS(MSG_SW83109_BOE_00_INIT)},
	{ADDRESS(MSG_SW83109_BOE_00_MIPI_806)},
	{ADDRESS(MSG_SW83109_BOE_00_MIPI_822)},
	{ADDRESS(MSG_SW83109_BOE_00_MIPI_824)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_INIT_60NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_INIT_30NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_INIT_10NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_INIT_02NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_EXIT_60NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_EXIT_30NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_EXIT_10NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_AOD_EXIT_02NIT)},
	{ADDRESS(MSG_SW83109_BOE_00_60HZ_INIT)},
	{ADDRESS(MSG_SW83109_BOE_00_120HZ_INIT)},
	{ADDRESS(MSG_SW83109_BOE_00_TEMPERATURE_01_OR_MORE)},
	{ADDRESS(MSG_SW83109_BOE_00_TEMPERATURE_00)},
	{ADDRESS(MSG_SW83109_BOE_00_TEMPERATURE_MINUS_01_OR_MORE)},
	{ADDRESS(MSG_SW83109_BOE_00_TEMPERATURE_MINUS_15_OR_LESS)},
	{ADDRESS(MSG_SW83109_BOE_00_PCD_INIT)},
	{ADDRESS(MSG_SW83109_BOE_00_PCD_EXIT)},
	{ADDRESS(MSG_SW83109_BOE_00_ACL_EXIT)},
	//{ADDRESS(MSG_SW83109_BOE_00_ACL_15P)},
	{ADDRESS(MSG_SW83109_BOE_00_ACL_08P)},
	{ADDRESS(MSG_SW83109_BOE_00_MASK_INIT_START)},
	{ADDRESS(MSG_SW83109_BOE_00_MASK_INIT_END)},
	{ADDRESS(MSG_SW83109_BOE_00_SELF_MASK_ON)},
	{ADDRESS(MSG_SW83109_BOE_00_SELF_MASK_ON_FAC)},
	{ADDRESS(MSG_SW83109_BOE_00_SELF_MASK_OFF)},
};

#if defined(CONFIG_SMCDSD_DOZE)
enum {
	ALPM_OFF,
	ALPM_ON_LOW,	/* ALPM 2 NIT */
	HLPM_ON_LOW,	/* HLPM 2 NIT */
	ALPM_ON_HIGH,	/* ALPM 60 NIT */
	HLPM_ON_HIGH,	/* HLPM 60 NIT */
	ALPM_MODE_MAX
};

enum {
	AOD_MODE_OFF,
	AOD_MODE_ALPM,
	AOD_MODE_HLPM,
	AOD_MODE_MAX
};

static const char *AOD_HLPM_STATE_NAME[] = {
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_02NIT)] = "AOD_INIT_02NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_10NIT)] = "AOD_INIT_10NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_30NIT)] = "AOD_INIT_30NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_60NIT)] = "AOD_INIT_60NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_02NIT)] = "AOD_EXIT_02NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_10NIT)] = "AOD_EXIT_10NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_30NIT)] = "AOD_EXIT_30NIT",
	[GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_60NIT)] = "AOD_EXIT_60NIT",
};

static unsigned int lpm_old_table[ALPM_MODE_MAX] = {
	GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_02NIT),	/* FAC 4, 2, 0 = 60NIT, 2NIT, EXIT */
	GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_02NIT),
	GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_02NIT),
	GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_60NIT),
	GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_60NIT),
};

static unsigned int lpm_init_table[EXTEND_BRIGHTNESS + 1] = {
	[0 ... 11]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_02NIT),
	[12 ... 31]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_10NIT),
	[32 ... 54]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_30NIT),
	[55 ... EXTEND_BRIGHTNESS]	= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_INIT_60NIT),
};

static unsigned int lpm_exit_table[EXTEND_BRIGHTNESS + 1] = {
	[0 ... 11]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_02NIT),
	[12 ... 31]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_10NIT),
	[32 ... 54]			= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_30NIT),
	[55 ... EXTEND_BRIGHTNESS]	= GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_AOD_EXIT_60NIT),
};

static unsigned int acl_table[] = {
	[0] = GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_ACL_EXIT),
	[1 ... 100] = GET_ENUM_WITH_NAME(MSG_SW83109_BOE_00_ACL_08P),
};
#endif

#endif /* __SW83109_BOE_00_PARAM_H__ */
