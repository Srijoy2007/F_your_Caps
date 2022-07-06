#pragma once
#define DEVICE_VER 0x0005
#define PRODUCT_ID 0x6063



#define TAPPING_TERM 200
#define RP2040_FLASH_AT25SF128A
#define RP2040_FLASH_GD25Q64CS
#define RP2040_FLASH_W25X10CL
#define RP2040_FLASH_GENERIC_03H
#define RP2040_FLASH_IS25LP080

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

#define DEBUG_MATRIX_SCAN_RAT

