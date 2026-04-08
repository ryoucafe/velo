# Velo - Connected Bike Parking System

A student demonstration project for a secure, connected bike parking elevator system. This is a **Terminale STI2D** capstone project featuring an automated bike storage solution with IoT connectivity.

## Project Overview

**Problem Statement:** How to securely and easily park bicycles in cities?

This project tackles urban bike parking challenges by creating an intelligent two-level elevator system with automated bike racks, secure locking mechanisms, and an interactive terminal interface.

### Key Features

- **User-Friendly Interface:** Touch-based code entry kiosk system
- **Automated Locking:** Servo motor-controlled secure locks
- **IoT Connectivity:** ESP32 microcontroller with WiFi capabilities
- **Real-Time Feedback:** 16x2 LCD display for user interaction as well as a website to access the status of the bike parking (UNFINISHED)

## Technical Stack

- **Microcontroller:** Arduino Uno (OLD), ESP32 (CURRENT)
- **Programming Language:** C++ (Arduino/embedded)
- **Hardware Components:**
  - Servo motor for lock control
  - 4x4 Keypad for code entry
  - 16x2 LCD Display (I2C interface)
  - Lifting mechanism (under development)

## How It Works

1. **User Interface:** Enter a 4-digit code using the keypad
2. **Verification:** System generates a random code and validates the entry
3. **Access Control:** Upon correct code, servo motor unlocks the storage unit
4. **Feedback:** LCD display provides real-time feedback (success/error messages)

### Key Functions
- **`passwordGen()`** - Generates random security codes
- **`keyP()`** - Handles numeric keypad input
- **`verif()`** - Validates entered code against generated code
- **`Incorrect_Screen()`** / **`Correct_Screen()`** - Display status feedback
- **`backspace()`** - Allows users to correct input


## Getting Started

### Prerequisites
- Arduino IDE (for code development & deployment)
- Arduino Uno or ESP32 microcontroller
- Required libraries:
  - `Keypad.h`
  - `LiquidCrystal_I2C.h`
  - `Servo.h`

### Installation
1. Clone the repository
2. Open `code_esp/code_esp.ino` in Arduino IDE
3. Install required libraries via Library Manager
4. Configure pin definitions according to your hardware setup
5. Upload to your microcontroller

## Documentation

- **[French Project Review](docs/ITEC_REVIEW1_FR.md)** - Detailed French version with existing bike parking analysis
- **[English Project Review](docs/ITEC_REVIEW1_EN.md)** - English translation with specification details

## Development Status

- [x] Keypad input system
- [x] LCD display management
- [x] Code generation & verification logic
- [x] Servo motor control
- [X] ESP32 migration & wireless connectivity
- [ ] Website interface
- [ ] Cloud backend integration
- [ ] Multi-level elevator mechanics
- [ ] Pulley system integration

## Future Enhancements

- IoT integration for remote monitoring
- Mobile app for code generation and access (Maybe)
- Real-time parking availability tracking
- Multi-site management system


## Contact

If you have any questions or anything to share, please post an [Issue](https://github.com/ryoucafe/velo/issues).
