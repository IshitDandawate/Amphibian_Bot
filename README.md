# Amphibian Bot – Dual-Terrain Robotic Vehicle

**Amphibian Bot** is a terrain-adaptive robotic system designed to operate seamlessly on both **land and water**. Built using an Arduino-based embedded control system, it features a hybrid locomotion mechanism capable of navigating complex environments for use in exploration, rescue operations, or rugged robotics challenges.

---

## Features

- **Amphibious mobility**: Land and water navigation
- **Wireless control** via FlySky FS-i6 transmitter/receiver
- **Modular firmware** with PWM motor control
- **Waterproof chassis** for buoyancy and durability
- Powered by **Arduino UNO** + **L298N Motor Driver**

---

## Components Used

| Component                | Quantity |
|--------------------------|----------|
| Arduino UNO              | 1        |
| L298N Motor Driver       | 1        |
| FlySky FS-i6 Transmitter | 1        |
| FlySky FS-iA6 Receiver   | 1        |
| DC Gear Motors           | 2–4      |
| Waterproof Servo Motor   | 1–2      |
| Propellers               | 1–2      |
| 12V Battery Pack         | 1        |
| Chassis (Waterproofed)   | 1        |
| Wheels & Axle            | 2–4      |

## 📡 Controller Configuration

The FlySky FS-i6 is configured with the following channel mappings:

- **CH1** – Steering (Horizontal stick)
- **CH2** – Throttle (Vertical stick)
- **CH5/CH6** – Terrain mode toggle (Switch)

---

## How to Use

1. Upload the firmware from `firmware/amphibian_bot.ino` to your Arduino UNO.
2. Power the bot using a 12V battery or power bank.
3. Pair the FS-i6 controller with the receiver.
4. Use the joystick to move on land or in water.
5. Switch terrain mode using assigned FS-i6 switch.

---

## Skills Demonstrated

- Embedded Systems Programming (C/C++)
- Real-Time PWM Control
- RF Communication
- Motor Driver Integration
- Mechanical Design & Waterproofing

---

## Author

**Ishit Dandawate**  
📫 [LinkedIn](https://www.linkedin.com/in/ishit-dandawate) | 📧 [Email](ishit1561@gmail.com)

---

> ⭐ *Star this repo if you like the project or find it useful!*  



