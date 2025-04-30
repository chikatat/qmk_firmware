#pragma once

#include "config_common.h"

#define MATRIX_ROWS 4
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D0, D1, D2, D3 }
#define MATRIX_COL_PINS { D4, D5, D6, D7, D8, D9 }

#define DIODE_DIRECTION COL2ROW

// USBデバイス名など（任意）
#define DEVICE_VER 0x0001
#define MANUFACTURER MyName
#define PRODUCT MyKeyboard
