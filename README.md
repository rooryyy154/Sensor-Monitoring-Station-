# Sensor monitoring station (work in progress).

**Author:** Jesus Arturo Martinez Bazan.
**Target Hardware:** STM32 Microcontroller (ARM Cortex-M)
**Status: In Development** (Expected completion: May 2026)

# Project Overview
This project is an embedded system designed to monitor analog and digital sensors, process the data, and trigger local alerts. It is being developed in C using STM32CubeIDE, focusing on efficient hardware resource management.

# Core Architecture & Features (Planned)
* **Bare-metal & HAL integration:** Utilizing STM32 Hardware Abstraction Layer alongside direct register manipulation for critical sections.
* **Interrupt Service Routines:** EXTI lines configured for non-blocking button inputs and state machines.
* **Peripheral Communication (UART):** For serial debugging and data transmission to a host PC.
* **I2C/SPI:** For interfacing with external environmental/motion sensors.
* **Direct Memory Access (DMA):** Offloading ADC (Analog-to-Digital Converter) continuous reads to memory to optimize CPU usage.
* **Hardware Timers:** Utilizing PWM to control alert indicators (LEDs/Buzzers) with precise timing.

# Tech Stack
* **Language:** C (Embedded)
* **IDE:** STM32CubeIDE
* **Version Control:** Git

# Repository Structure
`/Core`: Main application code.
`/Drivers`: Hardware specific HAL and custom sensor drivers.`/Docs`: Datasheets and architectural diagrams.

---
*Note: This repository is currently under active development. Commits are being pushed as modules are tested and validated.*
