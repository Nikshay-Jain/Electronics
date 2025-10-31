# Electronics Projects Collection

A comprehensive collection of Arduino-based electronics and robotics projects featuring microcontroller programming, sensor integration, motor control, and IoT connectivity.

## Features

- **Robot Control Systems**: Autonomous obstacle avoidance, Bluetooth RC control, and motor driver implementations
- **Sensor Integration**: Ultrasonic distance sensing, temperature monitoring with MPU6050, and analog joystick interfacing
- **Display Technologies**: OLED graphics and text rendering using U8G2 library
- **IoT Connectivity**: ESP32/ESP8266 WiFi integration and web server implementations
- **Hardware Testing Utilities**: Component validation sketches for motors, sensors, and displays

## Quick Start

### Prerequisites

- Arduino IDE (1.8.x or 2.x)
- ESP32/ESP8266 or compatible Arduino board
- USB cable for programming
- Required hardware components (see individual project folders)

### Installation

1. **Clone the repository**
```bash
git clone https://github.com/Nikshay-Jain/Electronics.git
cd Electronics
```

2. **Install required libraries**

Copy the contents of the `libraries/` folder to your Arduino libraries directory:
- Windows: `Documents\Arduino\libraries\`
- macOS: `~/Documents/Arduino/libraries/`
- Linux: `~/Arduino/libraries/`

Alternatively, install libraries via Arduino Library Manager:
- Adafruit GFX, SSD1306, MPU6050
- U8g2 (OLED displays)
- AsyncTCP, ESPAsyncWebServer (for ESP32)
- RTClib (real-time clock)

3. **Select your board**

In Arduino IDE: Tools → Board → Select your board (ESP32, ESP8266, or Arduino)

4. **Upload a sketch**

Open any project folder, select the `.ino` file, and click Upload.

## Usage

### Basic LED Control
```arduino
// Blinking_built-in_LED
// Simple LED blink example for testing your board
Open: Blinking_built-in_LED/Blinking_built-in_LED.ino
```

### Motor Control
```arduino
// Motor_testing
// L298N motor driver control with directional movement functions
Open: Motor_testing/Motor_testing.ino
// Configure pins: ENA, IN1, IN2, IN3, IN4, ENB
```

### Obstacle Avoidance Robot
```arduino
// Obstacle_avoidance_robot
// Autonomous navigation using HC-SR04 ultrasonic sensor
Open: Obstacle_avoidance_robot/Obstacle_avoidance_robot.ino
// Connects ultrasonic sensor + L298N motor driver
```

### Bluetooth RC Robot
```arduino
// RC_Robot
// Remote control via Bluetooth using ESP32
Open: RC_Robot/RC_Robot.ino
// Pair with Bluetooth terminal app, send commands: F/B/L/R/S
```

### WiFi Temperature Monitor
```arduino
// Temperature_Sensor
// MPU6050 temperature reading with web server interface
Open: Temperature_Sensor/Temperature_Sensor.ino
// Access sensor data via browser at ESP's IP address
```

### OLED Display Graphics
```arduino
// OLED
// U8G2 library graphics and text rendering
Open: OLED/OLED.ino
// Displays shapes, lines, and text on I2C OLED screen
```

## Project Structure

```
Electronics/
├── Blinking_built-in_LED/     # Basic LED blink test
├── Joystick_Motion_Plotter/   # Analog joystick input reading
├── Motor_testing/             # DC motor control with L298N
├── OLED/                      # OLED display graphics
├── Obstacle_avoidance_robot/  # Autonomous navigation robot
├── RC_Robot/                  # Bluetooth remote control robot
├── Temperature_Sensor/        # WiFi temperature monitoring
├── Ultrasonic_sensor_testing/ # HC-SR04 distance measurement
├── Wifi_Connection/           # ESP32/ESP8266 WiFi setup
└── libraries/                 # Required Arduino libraries
```

## Hardware Requirements

**Core Components (varies by project):**
- ESP32/ESP8266 or Arduino boards
- L298N motor driver module
- HC-SR04 ultrasonic sensor
- MPU6050 gyroscope/accelerometer
- 128x64 OLED display (I2C)
- DC motors and wheels
- Joystick module (analog)
- Jumper wires and breadboard
- Power supply (batteries or adapter)

## Technologies

- **Languages**: C/C++ (Arduino)
- **Platforms**: ESP32, ESP8266, Arduino
- **Libraries**: Adafruit (GFX, SSD1306, MPU6050), U8g2, AsyncTCP, ESPAsyncWebServer, RTClib
- **Protocols**: I2C, UART, WiFi, Bluetooth
- **Hardware Interfaces**: GPIO, ADC, PWM

## License

This project is open source and available for educational purposes.

## Author

**Nikshay Jain**  
GitHub: [@Nikshay-Jain](https://github.com/Nikshay-Jain)
