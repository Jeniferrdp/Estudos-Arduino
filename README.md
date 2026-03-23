# 🌡️ Electronic Circuits Project - IoT

This project was developed as part of an IoT course challenge from DIO, aiming to simulate a greenhouse system using the Tinkercad simulator and the Arduino platform.

---

## 📌 Project Description

The system consists of an electronic circuit capable of monitoring ambient temperature and making automatic decisions based on the collected data.

The following components were used:

- Temperature sensor (TMP36)
- Red LED
- Buzzer
- Motor (simulating a fan)
- Arduino
---

## ⚙️ Features

The system implements the following rules:

- 🌡️ Temperature Reading
T  -he sensor continuously reads the ambient temperature
- 🌀 Ventilation Control
  - When the temperature is equal to or above 30°C, the motor is activated
- 🚨 Emergency Alert
  - When the temperature exceeds 50°C:
- The red LED is turned on
  - The buzzer is activateda

---

## 🖼️ Tinkercad Circuit

![Circuito](imagem1.png)

---

## 💻 Implementation

- All system logic was developed using C language on the Arduino platform.

- The code performs:

  - Analog sensor reading
  - Conversion to temperature in Celsius
  - Conditional structures for decision-making
  - Component control using digitalWrite

---

## 🚀 Objective

To simulate an automated temperature control system, demonstrating basic concepts of IoT, sensors, and actuators using Arduino.
