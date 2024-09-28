## Rotary Encoder Controlled LEDs

## Overview

This project demonstrates how to control the brightness of an LED using a rotary encoder and display the brightness level on a 16x2 I2C LCD. The rotary encoder allows for fine adjustment of the LED's brightness, making it an ideal user interface for brightness control.

## Components Used

- **Arduino Nano/Uno**
- **16x2 I2C LCD Display**
- **Rotary Encoder**
- **LED**
- **Breadboard**
- **Jumper Wires**

## Wiring Instructions

### Rotary Encoder
- **CLK (A)** -> Pin 2 on Arduino
- **DT (B)** -> Pin 3 on Arduino
- **SW (Button)** -> Pin 4 on Arduino (optional for resetting brightness)
- **GND** -> GND on Arduino
- **VCC** -> 5V on Arduino

### 16x2 I2C LCD Display
- **VCC** -> 5V on Arduino
- **GND** -> GND on Arduino
- **SCL** -> A5 on Arduino Nano / Uno
- **SDA** -> A4 on Arduino Nano / Uno

### LED
- **Positive** -> Pin 9 on Arduino (PWM control)
- **Negative** -> GND

## How It Works

- **Rotary Encoder**: The rotary encoder is used to increase or decrease the brightness of the LED. When rotated clockwise, the brightness increases, and when rotated counterclockwise, it decreases.
- **LCD Display**: The brightness level is displayed on the 16x2 I2C LCD display.
- **Button Control**: The rotary encoder's button can be pressed to reset the LED brightness to zero.

## Setup Instructions

1. **Wiring**: Connect the rotary encoder, LED, and LCD to the Arduino as described above.
2. **Install Libraries**: Install the `LiquidCrystal_I2C` library using the Arduino IDE's Library Manager.
3. **Upload Code**: Upload the provided code to your Arduino board.
4. **Test**: Power the Arduino and rotate the encoder to adjust the LED brightness. The current brightness level will be displayed on the LCD.

## Features

- **Rotary Encoder Control**: Allows precise control of the LED brightness.
- **LCD Feedback**: Displays real-time brightness level on a 16x2 I2C LCD display.
- **Button Functionality**: Resets brightness to zero when the button on the rotary encoder is pressed.

## Customization

- **Multiple LEDs**: You can control multiple LEDs by adding more pins and adjusting the code accordingly.
- **Additional Controls**: Add more buttons or encoders for controlling different parameters.
- **RGB LED**: Extend this project to control the color of an RGB LED by mapping the encoder values to red, green, and blue channels.

## Applications

- **User Interfaces**: Rotary encoders are widely used in control interfaces for adjusting values such as volume, brightness, and other parameters.
- **Dimmer Switch**: This project can be used as a simple LED dimmer switch in DIY lighting projects.
- **Interactive Projects**: Ideal for building interactive displays or control panels where manual adjustments are needed.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project for personal or commercial purposes.
