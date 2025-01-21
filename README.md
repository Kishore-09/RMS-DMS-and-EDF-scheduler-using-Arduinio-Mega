# Implementation of RMS, DMS, and EDF Schedulers on Arduino Mega

This project demonstrates the implementation of **Rate-Monotonic Scheduling (RMS)**, **Deadline-Monotonic Scheduling (DMS)**, and **Earliest Deadline First (EDF)** scheduling algorithms using an **Arduino Mega** microcontroller.

---

## Project Description
The project explores the fundamental concepts of real-time scheduling in embedded systems by implementing three popular scheduling algorithms:
1. **RMS**: Schedules tasks based on their fixed priority, derived from their periodic rate.
2. **DMS**: Prioritizes tasks based on their deadlines.
3. **EDF**: Dynamically schedules tasks with the nearest deadline first.

The implementation showcases how these schedulers handle task execution and meet deadlines under various load conditions.

---

## Hardware Requirements
- **Arduino Mega 2560**
- LEDs (for task simulation)
- Breadboard and jumper wires

---

## Software Requirements
- **Arduino IDE**
- **VScode**

---

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Kishore-09/RMS-DMS-and-EDF-scheduler-using-Arduinio-Mega
