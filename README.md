GPIO PERIPHERAL DRIVER:
A bare-metal GPIO driver for the STM32F401CCU6 (ARM Cortex-M4) microcontroller, written entirely from scratch in C. This project demonstrates register-level programming and provides low-level control of the GPIO peripheral without using HAL or CubeMX.

FEATURES:
1)Enable clocks for GPIO ports (A, B, C, E, H).

2)Configure GPIO pins as input, output, analog, or alternate function.

3)Set pull-up / pull-down / no pull configuration for input pins.

4)Read pin state using the Input Data Register (IDR).

5)Write output values using the Output Data Register (ODR).

6)Fully bare-metal, lightweight, and easy to understand.

NOTES:
1)Tested on STM32F401CCU6.
2)Works reliably at -O0 compiler optimization level.
3)Bitfield layout is compiler-dependent, it is verified for STM32CubeIDE/GCC.


For Reference:
For the usage of driver go through the main.c, it is an example that demonstartes the blinking of internal LED (PC13) present on the microcontroller.
