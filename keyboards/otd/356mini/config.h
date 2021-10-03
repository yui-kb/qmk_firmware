#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x6969
#define PRODUCT_ID 0x6969
#define DEVICE_VER 0x0001
#define MANUFACTURER OTD
#define PRODUCT 356Mini

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS 9

/*
 * Keyboard Matrix Assignments
 */
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5, A6, A7, C7, C6, C5, C4, C1, C0, D7 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, D6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 3