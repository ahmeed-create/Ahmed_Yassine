# Arduino-Based Linear Actuator with Stepper Motor – Ongoing Project

This repository documents the design, partial construction, and testing of a linear actuator driven by a **28BYJ-48 stepper motor** and **Arduino Nano**, intended for precision movement applications (e.g., small CNC systems or automated mechanisms).

## 📝 Project Status

⚠️ **Note:** This project is **not fully complete**. The mechanical assembly and basic wiring are done, but there are errors to correct and improvements to finalize (both in hardware and code). This repository will be updated as the work progresses.

## 🔧 Materials & Tools

- **Stepper motor:** 28BYJ-48 + ULN2003 driver board.
- **Controller:** Arduino Nano.
- **Wiring:** Dupont jumper wires, breadboard or soldered connections.
- **Mechanical:** 
  - 3D-printed components:
    - `gear.stl`
    - `bearing_holder.stl`
    - `pen_holder.stl`
    - `X_axis_rail.stl`
    - `X_axis_sliding_piece.stl`
    - `Y_axis_rail.stl`
    - `Y_axis_sliding_piece.stl`
  - Wood/MDF baseplate.
  - Screws and basic assembly tools.

## ⚙️ Assembly Overview

The linear actuator uses a rack-and-pinion system, where:
- The **stepper motor** drives the pinion gear to move the rack (sliding piece) linearly.
- The Arduino controls the motor via the ULN2003 board, offering fine control of steps.
- The mechanical structure is 3D-printed for easy prototyping and adjustment.

Photos of the current prototype are included for clarity.

## 🖥️ Software

The Arduino sketch (to be added soon) controls:
- Step count & speed for the actuator.
- Basic calibration routine.

## 🔍 Issues & Planned Fixes

- Improve the mechanical precision of 3D-printed parts (small alignment errors currently).
- Tune the stepper motor torque and speed to avoid slipping.
- Implement end-stop detection to prevent over-travel.
- Code improvements for smoother motion.

## 📎 Documentation

The detailed report (in **French**) explains the concept, design choices, and analysis:
- `Rapport_MCG2501_French_Version.pdf`

## 🚧 What's Next?

- Debug and finalize Arduino code.
- Fine-tune assembly to ensure reliable performance.
- Document full testing results.

---

💬 Feel free to contribute ideas or report suggestions to improve this project!
