#pragma once
#include "config_common.h"

#define VENDOR_ID 0x1234
#define PRODUCT_ID 0x9876
#define DEVICE_VER 0
#define PRODUCT fracture_55

#define MATRIX_ROWS 8
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { C6, F4, F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_ROW_PINS_RIGHT { D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F6, F7, B1, B3, B2, B6, C6, F4, F5 }
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define RGB_DI_PIN D1
#define DIODE_DIRECTION COL2ROW

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
