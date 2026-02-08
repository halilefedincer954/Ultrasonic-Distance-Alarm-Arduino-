# Ultrasonic Distance Alarm (Arduino)
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
1. Open Arduino IDE  
2. Go to **Sketch → Include Library → Manage Libraries**  
3. Search for **NewPing**  
4. Install the library  


## Behavior
| Distance (cm) | Buzzer Speed |
|-------------|--------------|
| > 50 | Slow |
| 30 – 50 | Medium |
| 10 – 30 | Fast |
| < 10 | Very fast |

## Notes
- Designed for **active buzzer**
- If using a passive buzzer, replace `digitalWrite()` with `tone()`

## License
MIT  bunu nasıl edecez

