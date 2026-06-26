## Specs

```
# Board
STM32F103C8T6 Development Board Blue Pill

# Flash
64 KB

# SRAM
20 KB
```

## Dev Notes

for now, i'll just use Arduino IDE since i don't wanna dive to deep on this particular chip for now. maybe later when i had more time to spare.

```
# STLink Driver
https://www.st.com/en/development-tools/stsw-link009.html

# FTDI FT232RL
https://ftdichip.com/drivers/

# Arduino IDE
https://www.arduino.cc/en/software/

# File -> Preferences -> Additional Boards Manager URLs
https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json

# Board Manager
Tools -> Board -> Boards Manager (ctrl + shift + b)
Install STM32 MCU Based Boards by STMicroelectronics

# Board
Generic STM32F1 Series

# Board Part Number
BluePill F103C8

# Upload Method
STM32CubeProgrammer # SWD for ST-Link, Serial for FTDI

# Pin Config
BOOT0 HIGH for FTDI, BOOT0 LOW for ST-Link

```
