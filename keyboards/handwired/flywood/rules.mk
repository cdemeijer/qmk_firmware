# MCU name
MCU = at90usb1286

# Bootloader selection
BOOTLOADER = halfkay

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no					# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no						# Mouse keys
EXTRAKEY_ENABLE = no      			# Audio control and System control
CONSOLE_ENABLE = no        			# Console for debug
COMMAND_ENABLE = yes        		# Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       		# Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           		# USB Nkey Rollover
BACKLIGHT_ENABLE = no       		# Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        		# Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       		# Enable Bluetooth
AUDIO_ENABLE = no           		# Audio output
