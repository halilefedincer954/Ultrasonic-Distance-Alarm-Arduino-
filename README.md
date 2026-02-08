# Ultrasonic-Distance-Alarm-Arduino-
Ultrasonic distance-based alarm system using Arduino, HC-SR04 sensor, LED and buzzer. Built with the NewPing library.
This project uses an HC-SR04 ultrasonic sensor to measure distance and trigger
an LED and buzzer warning system based on proximity.

## Features
- Distance measurement using HC-SR04
- LED and buzzer warning
- Warning speed increases as object gets closer
- Uses NewPing library for reliable ultrasonic readings

## Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Active Buzzer
- LED + 220Ω resistor

## Pin Connections
| Component | Arduino Pin |
|---------|-------------|
| HC-SR04 TRIG | D11 |
| HC-SR04 ECHO | D10 |
| Buzzer | D7 |
| LED | D2 |
| VCC | 5V |
| GND | GND |

## Library
This project uses the **NewPing** library.

Install via Arduino IDE:

