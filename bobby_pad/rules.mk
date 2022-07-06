#this file describes features of the mcu
# MCU Name
MCU = RP2040

#Bootloader selection
BOOTLOADER = rp2040

#build options
TAP_DANCE_ENABLE = yes
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes      # Mouse keys
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes          # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
WS2812_DRIVER = vendor        #
AUDIO_ENABLE = no          # Audio output
ENCODER_ENABLE = yes       # Enable encoder
OLED_ENABLE = yes          # Enable OLED
OLED_DRIVER = SSD1306      # Enable Support for SSD1306 or SH1106 OLED Displays; Communicating over I2C
WPM_ENABLE = yes           # Enable WPM Counter 