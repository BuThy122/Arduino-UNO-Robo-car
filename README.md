# 🚗 Arduino Bluetooth Controlled Car

## 👨‍💻 Author
**Bu_Thy**

---

## 📌 Project Overview
This project is a **Bluetooth-controlled robotic car** built using **Arduino Uno** and controlled wirelessly via an **HC-05 Bluetooth module**.  
The car can move in multiple directions using commands sent from a mobile device (App).

---

## 🔥 Features
- 📱 Wireless control using Bluetooth (HC-05)
- 🚗 Forward, Backward, Left, Right movement
- ⚡ Powered by Li-ion battery pack (11.1V)
- 🎮 Control via Bluetooth mobile apps
- 🔧 Expandable for advanced robotics projects

---

## 🧰 Components Required

1. Arduino Uno  
2. Motor Driver (L298N)  
3. DC Motors (500 RPM × 4)  
4. HC-05 Bluetooth Module  
5. Jumper Wires  
6. 3 × 3.7V Li-ion Battery (11.1V total)  
7. Chassis with 4 wheels  

### 🔧 Optional
- Battery Management System (BMS)  
- Switch  
- Boost & Buck Converter
## COMPONENT IMAGE
##  "motor driver  L298N"
<img width="573" height="576" alt="motor driver  L298N" src="https://github.com/user-attachments/assets/58bfb951-be06-49eb-af7b-f1fc0eca315d" />

## "Arduino UNO"
<img width="572" height="573" alt="Arduino UNO" src="https://github.com/user-attachments/assets/81abc4ce-bcb6-4d8b-8348-4e37516fd4ff" />

## "HC-05 Bluetooth Module"
<img width="576" height="567" alt="HC-05 Bluetooth Module" src="https://github.com/user-attachments/assets/1daa8aee-a73f-4bc4-a9e7-28eeae441488" />

## "Jumper Wire Set - M2M, M2F, F2F"
<img width="570" height="577" alt="Jumper Wire Set - M2M, M2F, F2F" src="https://github.com/user-attachments/assets/c34dc98c-a931-4d72-9d8e-4277edeb65af" />




---

## 🔌 CONNECTIONS DIAGRAM

<img width="1257" height="698" alt="circuit diagram" src="https://github.com/user-attachments/assets/4446338d-a951-4bb3-b0a7-176d7d01f4d7" />


### 🔋 Power Connections

- Battery (+) → **12V (VCC) of L298N** AND **VIN of Arduino**
- Battery (−) → **GND of L298N** AND **GND of Arduino**

⚠️ Notes:
- Keep **common GND**
💀 Wrong wiring = dead Arduino

---

### 📡 HC-05 to Arduino
- VCC → 5V  
- GND → GND  
- TX → RX (Pin 0)  
- RX → TX (Pin 1) 

⚠️ Disconnect RX/TX while uploading code

---

### ⚙️ L298N to Arduino
- ENA → D5 (PWM)  
- IN1 → D6  
- IN2 → D7  
- IN3 → D8  
- IN4 → D9  
- ENB → D10 (PWM)  

---

## 🎮 Control Apps

You can use any Bluetooth controller app:

1. Arduino Bluetooth Control  
2. Arduino Car  
3. Bluetooth RC Controller  

---

## 🧠 How It Works

1. Mobile sends command via Bluetooth  
2. HC-05 receives the signal  
3. Arduino reads the command  
4. L298N controls motors  
5. Car moves accordingly  

---

## ⚠️ Common Mistakes

- ❌ No common GND  
- ❌ Wrong RX/TX connection  
- ❌ Weak battery  
- ❌ Overloading L298N
- ❌ Do NOT connect battery to Arduino 5V pin  
