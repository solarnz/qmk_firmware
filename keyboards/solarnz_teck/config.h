#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002
#define MANUFACTURER    Truly Ergonomic
#define PRODUCT         Truly Ergonomic 107
#define DESCRIPTION     t.m.k. keyboard firmware for Truly Ergonomic

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 13

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {D2, F0, F4, F1, F6, F7, F5}
#define MATRIX_COL_PINS {D3, D1, D0, D4, C6, B4, B5, D7, E6, B6, D6, B7, C7}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
