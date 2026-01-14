# 🚆 Train Collision Avoidance System (TCAS)

This project presents a **Train Collision Avoidance System (TCAS)** using **Arduino Uno**, **PIR sensor**, **servo motor**, **LCD display**, **LED**, and **buzzer**.  
The system detects obstacles on railway tracks and automatically stops the train while generating visual and audio alerts.

---

## 📌 Project Description
Railway accidents often occur due to the absence of real-time obstacle detection systems.  
This project proposes a **low-cost, embedded safety solution** that helps prevent collisions by detecting obstacles and controlling train movement automatically.

The system has been designed and simulated using **Tinkercad**.

---

## 🔧 Components Used
- Arduino Uno  
- PIR Sensor  
- Servo Motor  
- 16×2 LCD Display  
- LED  
- Buzzer  
- Breadboard  
- Potentiometer  
- Jumper Wires  

---

## ⚙️ Working Principle
1. The PIR sensor continuously monitors the railway track.
2. When an object is detected:
   - The servo motor stops the train
   - LED and buzzer are activated
   - LCD displays **!!! WARNING !!!** and **Object Detected**
3. When no object is detected:
   - The train runs normally
   - LCD displays **TCAS System – Status: SAFE**
4. On startup, the system performs a self-test and displays **Checking… OK**.

---

## 🖥️ Features
- Automatic obstacle detection
- Train stop and resume mechanism
- Visual and audio alerts
- LCD-based status display
- Startup self-check functionality
- Low-cost and easy-to-implement design

---

## 🔌 Pin Configuration

| Component | Arduino Pin |
|----------|-------------|
| PIR Sensor (OUT) | D6 |
| Servo Motor | D9 |
| LED | D5 |
| Buzzer | D4 |
| LCD Display | I2C / Parallel |

---

## 🧪 Simulation
- Simulated using **Tinkercad**
- PIR sensor detection is manually triggered during simulation
- Circuit diagram included in the repository

---

## 📂 Project Files
TCAS_PIR_LCD.ino
Train Collision Avoidance System.pdf
Train Collision Avoidance System.png
Presentation.pptx
README.md

---

## 📸 Circuit Diagram
![Circuit Diagram](Train%20Collision%20Avoidance%20System.png)

---

## 🎓 Applications
- Railway safety systems
- Embedded systems mini-projects
- IoT and automation learning
- Academic demonstrations

---

## 🔮 Future Scope
- Use ultrasonic sensor for distance measurement
- Integrate GPS and wireless communication
- Implement IoT-based remote monitoring
- Real-time railway signaling integration

---

## 👩‍💻 Author
**Fatima Faiz**  
B.Tech (ECE)  
Embedded Systems & IoT Enthusiast  

GitHub: https://github.com/fatimafaiz29

---

## 📜 License
This project is developed for **educational and academic purposes**.
