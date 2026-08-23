# Arduino Bluetooth Controlled Car

## Author
**Bu_Thy**

---

## 📌 Project Overview

This project is a **Bluetooth-controlled robotic car** built using an **Arduino Uno** and an **HC-05 Bluetooth module**.

The car can be controlled wirelessly using a mobile device and supports movement in multiple directions, including **Forward, Backward, Left, and Right**.

---

## Features

- Wireless control using Bluetooth (HC-05)
- Forward, Backward, Left, and Right movement
- Powered by a 3S Li-ion battery pack (11.1V nominal)
- Control through Bluetooth mobile applications
- Simple and expandable robotics platform

---

## Components Required

1. Arduino Uno
2. L298N Motor Driver
3. 500 RPM DC Motors × 4
4. HC-05 Bluetooth Module
5. Jumper Wires
6. 3 × 3.7V Li-ion Batteries (3S, 11.1V nominal)
7. 4-Wheel Chassis
8. Switch

### Optional Components

- Battery Management System (BMS)
- Boost/Buck Converter
- 3S Li-ion Battery Charging Module

---

## Project Cost

| # | Component | Price (₹) |
|---|---|---:|
| 1 | Arduino Uno | ₹209 |
| 2 | L298N Motor Driver | ₹149 |
| 3 | 500 RPM DC Motors (4 pieces) | ₹672 |
| 4 | HC-05 Bluetooth Module | ₹199 |
| 5 | Jumper Wire (Male-Female) | ₹45 |
| 6 | 3.7V Li-ion Batteries (3 pieces) | ₹135 |
| 7 | Wheel Pack (4 wheels) | ₹79 |
| 8 | Switch | ₹10 |

### Total Project Cost

**₹1,498**

> Note: The total cost includes the components listed above. Optional components such as the BMS, charging module, and converter are not included.

---

## Component Images

### L298N Motor Driver

<img width="573" height="576" alt="L298N Motor Driver" src="https://github.com/user-attachments/assets/58bfb951-be06-49eb-af7b-f1fc0eca315d" />

### Arduino UNO

<img width="572" height="573" alt="Arduino UNO" src="https://github.com/user-attachments/assets/81abc4ce-bcb6-4d8b-8348-4e37516fd4ff" />

### HC-05 Bluetooth Module

<img width="576" height="567" alt="HC-05 Bluetooth Module" src="https://github.com/user-attachments/assets/1daa8aee-a73f-4bc4-a9e7-28eeae441488" />

### Jumper Wire Set

<img width="570" height="577" alt="Jumper Wire Set - M2M, M2F, F2F" src="https://github.com/user-attachments/assets/c34dc98c-a931-4d72-9d8e-4277edeb65af" />

---

## 🔌 Connections Diagram

<img width="1257" height="698" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/4446338d-a951-4bb3-b0a7-176d7d01f4d7" />

### Power Connections

- Battery (+) → **12V/VCC of L298N** and **VIN of Arduino**
- Battery (−) → **GND of L298N** and **GND of Arduino**

### Important

- Ensure that the Arduino, L298N, and HC-05 share a **common GND**.
- Do **not** connect the battery directly to the Arduino 5V pin.
- Check the polarity and wiring before powering the circuit.
- A fully charged 3S Li-ion battery can reach approximately **12.6V**.

---

## HC-05 to Arduino

| HC-05 | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| TX | RX (Pin 0) |
| RX | TX (Pin 1) |

> **Note:** Disconnect the HC-05 RX/TX connections while uploading the Arduino code.

---

## L298N to Arduino

| L298N | Arduino |
|---|---|
| ENA | D5 (PWM) |
| IN1 | D6 |
| IN2 | D7 |
| IN3 | D8 |
| IN4 | D9 |
| ENB | D10 (PWM) |

---

## 🎮 Control Apps

The car can be controlled using compatible Bluetooth controller applications, such as:

1. Arduino Bluetooth Control
2. Arduino Car
3. Bluetooth RC Controller

---

## How It Works

1. The mobile application sends a movement command through Bluetooth.
2. The HC-05 Bluetooth module receives the command.
3. The Arduino Uno reads and processes the command.
4. The Arduino sends control signals to the L298N motor driver.
5. The L298N drives the motors according to the selected direction.

---

## ⚠️ Common Mistakes

- No common GND between components
- Incorrect RX/TX connections
- Weak or insufficient battery
- Overloading the L298N motor driver
- Connecting the battery to the Arduino 5V pin
- Forgetting to disconnect RX/TX while uploading code
- Incorrect battery polarity

---

## License

This project is open for learning, modification, and personal robotics experimentation.
