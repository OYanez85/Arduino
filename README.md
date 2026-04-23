# Arduino
FLynt CS50 IoT Bootcamp

---
marp: true
theme: default
paginate: true
---

# Arduino Fan Speed Control
### Serial Input Controlled PWM Motor

---

## Overview

- Control a DC fan using Arduino
- Speed adjusted via **Serial input (0–9)**
- Uses **PWM (Pulse Width Modulation)**
- Simple, interactive, and scalable

---

## Hardware Requirements

- Arduino board (e.g., Uno)
- DC motor / fan
- Transistor or motor driver (recommended)
- Power supply
- Jumper wires

---

## Core Concept

### PWM Control

- `analogWrite()` outputs PWM signal
- Range: **0–255**
- Higher value → faster motor speed

---

## User Interaction

- Open Serial Monitor
- Enter a number:
  - `0` → motor OFF
  - `9` → maximum speed
- Real-time speed adjustment

---

## Code Structure

### Setup Function

```cpp
void setup() {
  pinMode(motorPin, OUTPUT);
  analogWrite(motorPin, 0);
  Serial.begin(9600);
  Serial.println("Enter a number between 0 and 9: ");
}
