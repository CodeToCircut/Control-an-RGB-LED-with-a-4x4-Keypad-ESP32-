# 🔌 Standalone ESP32 4x4 Keypad & Direct RGB LED Controller

A completely standalone desktop hardware project built with a standard 30-pin ESP32, a 4x4 membrane keypad, and a single multi-color RGB LED. Pressing different keys on the matrix directly triggers custom color mixes on the LED indicator.

## 🌟 Features
* **100% Standalone:** Requires no computer connection, software drivers, or wireless pairing; can run entirely off a standard USB phone charger or power bank.
* **Direct Pin Control:** Maps keypad matrix scanning directly to PWM-driven RGB color states.
* **Safe GPIO Layout:** Uses verified non-conflicting digital pins on the classic 30-pin ESP32 DevKit.

## 🛠️ Hardware Requirements
* 1x Standard 30-Pin ESP32 Development Board (WROOM-32)
* 1x 4x4 Membrane Keypad
* 1x Common Cathode RGB LED
* 3x 220Ω Resistors
* Breadboard & Jumper Wires

## 🔌 Wiring Guide

### 1. Keypad Matrix Pins (8 Wires)
* **Row 1-4 (Pins 1-4):** Connected to ESP32 GPIOs `13, 12, 14, 27`
* **Col 1-4 (Pins 5-8):** Connected to ESP32 GPIOs `26, 25, 33, 32`

### 2. RGB LED Pins (Common Cathode)
* **Longest Pin (Cathode / GND):** Connect to **GND**
* **Red Pin:** Connect through a 220Ω resistor to ESP32 GPIO `23`
* **Green Pin:** Connect through a 220Ω resistor to ESP32 GPIO `22`
* **Blue Pin:** Connect through a 220Ω resistor to ESP32 GPIO `21`

## 📦 Software Library Required
* **Keypad** by Mark Stanley (Install via Arduino Library Manager)

## 🚀 Usage
1. Open the sketch in the Arduino IDE.
2. Select your 30-pin ESP32 board and correct COM port.
3. Hit **Upload**.
4. Press keys on your 4x4 keypad to watch the single RGB LED instantly shift colors!                          
