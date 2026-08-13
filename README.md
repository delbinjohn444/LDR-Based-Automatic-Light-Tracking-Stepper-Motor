# LDR-Based Automatic Light Tracking Stepper Motor

An Arduino-based **automatic light-tracking system** that uses two LDR sensors to detect the direction of light and a stepper motor to automatically rotate toward the stronger light source.

The project combines **embedded electronics, sensor interfacing, motor control, and custom 3D-printed mechanical parts**.

## Features

- 🌞 Automatic light tracking
- 🔆 Dual LDR-based light detection
- ⚙️ Stepper motor control
- 🎯 Adjustable light detection threshold
- 🔄 Automatic left/right movement
- 🛑 Software-based position limits
- 🧩 Custom 3D-printed mechanical parts
- 🔌 Arduino-based embedded control

## Components

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| 28BYJ-48 Stepper Motor | 1 |
| ULN2003 Stepper Motor Driver | 1 |
| LDR Sensor | 2 |
| 10kΩ Resistor | 2 |
| Jumper Wires | As required |
| Breadboard | 1 |
| 5V Power Supply | 1 |
| 3D-Printed Parts | 1 set |

## 3D-Printed Parts

The mechanical structure of the project was **custom designed and 3D printed**.

The 3D-printed parts are used for:

- Stepper motor mounting
- LDR sensor mounting
- Rotating platform
- Sensor alignment
- Mechanical support
- Assembly of the tracking mechanism

The custom mechanical design allows the sensors and rotating mechanism to work together as a compact light-tracking system.

## How It Works

Two LDR sensors are positioned on the left and right sides of the mechanism.

The Arduino continuously reads the light intensity from both sensors and compares their values.

```text
              LIGHT SOURCE
                   ↓
          ┌─────────────────┐
          │                 │
       LEFT LDR          RIGHT LDR
          │                 │
          └────────┬────────┘
                   ↓
                ARDUINO
                   ↓
             ULN2003 DRIVER
                   ↓
            STEPPER MOTOR
                   ↓
        3D-PRINTED MECHANISM
```

### Light Detection

The Arduino reads the analog values from both LDR sensors.

- If the **left LDR detects significantly more light**, the stepper motor rotates left.
- If the **right LDR detects significantly more light**, the stepper motor rotates right.
- If both sensors receive approximately the same amount of light, the motor remains stationary.

A threshold is used to prevent unnecessary movement caused by small differences between the two sensors.

## System Workflow

```text
Start
  ↓
Initialize Arduino
  ↓
Read Left LDR
  ↓
Read Right LDR
  ↓
Compare Light Levels
  ↓
Determine Light Direction
  ↓
Check Position Limit
  ↓
Rotate Stepper Motor
  ↓
Update Position
  ↓
Repeat
```

## Circuit Connections

### LDR Sensors

| Component | Arduino Pin |
|---|---|
| Left LDR | A0 |
| Right LDR | A1 |

The LDR sensors are connected using voltage-divider circuits to provide analog voltage readings to the Arduino.

### Stepper Motor Driver

| ULN2003 Pin | Arduino |
|---|---|
| IN1 | D8 |
| IN2 | D10 |
| IN3 | D9 |
| IN4 | D11 |
| VCC | 5V |
| GND | GND |

The 28BYJ-48 stepper motor is connected directly to the ULN2003 driver.

> **Note:** A suitable external 5V power supply is recommended for the stepper motor. If an external supply is used, connect its GND to the Arduino GND.

## Software

The project is developed using:

- **Arduino IDE**
- **Arduino C/C++**
- **Stepper Library**

The program continuously reads both LDR sensors, compares their values, and controls the stepper motor according to the detected light direction.

## Position Control

The stepper motor position is tracked in software.

Minimum and maximum position limits are defined to prevent the mechanism from rotating beyond its intended operating range.

This helps protect the 3D-printed mechanism from excessive rotation.

## Key Concepts

This project demonstrates:

- Embedded Systems
- Arduino Programming
- Analog Sensor Interfacing
- LDR Light Detection
- ADC / Analog Reading
- Stepper Motor Control
- Motor Driver Interfacing
- Threshold-Based Control
- Position Tracking
- Feedback-Based Control
- 3D-Printed Mechanical Design
- Hardware-Software Integration

## Applications

This concept can be adapted for:

- ☀️ Solar panel tracking
- 🌞 Sunlight tracking systems
- 💡 Smart lighting
- 🤖 Robotics
- 📷 Automatic camera positioning
- 🔧 Embedded automation
- 🎓 Educational electronics projects

## Future Improvements

Possible upgrades include:

- [ ] Dual-axis light tracking
- [ ] Solar panel integration
- [ ] Limit switches
- [ ] OLED display
- [ ] ESP32 IoT monitoring
- [ ] Wireless control
- [ ] Battery-powered operation
- [ ] Automatic sensor calibration
- [ ] PID-based tracking
- [ ] Real-time light intensity display

## Project Highlights

| Feature | Details |
|---|---|
| Microcontroller | Arduino Uno |
| Sensors | 2 × LDR |
| Stepper Motor | 28BYJ-48 |
| Motor Driver | ULN2003 |
| Mechanical Parts | Custom 3D Printed |
| Control Method | Differential LDR Sensing |
| Programming | Arduino C/C++ |

## Project Structure

```text
LDR-Based-Automatic-Light-Tracking-Stepper-Motor/
│
├── README.md
├── src/
│   └── light_tracking.ino
│
├── 3D-Models/
│   └── 3D-print-files/
│
├── images/
│   └── project-images/
│
└── LICENSE
```

## Author

**Delbin John**

Developed as an embedded systems and automation project integrating **Arduino, sensors, stepper motor control, and 3D-printed mechanical design**.

## License

This project is open-source and available for educational and personal use.
