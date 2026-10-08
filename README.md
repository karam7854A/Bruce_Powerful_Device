# Bruce Powerful Device

A custom ESP32-C5 handheld cybersecurity and electronics device that combines Bruce firmware, a 4-inch touchscreen, and multiple sensors in a 3D-printed enclosure.

<img width="226" alt="Assembled Bruce Powerful Device" src="https://github.com/user-attachments/assets/00cc368d-b93d-4473-9120-4b64158d8b74" />

> **Project type:** Open-source hardware and embedded software
> **Status:** Working prototype; documentation and hardware revisions are ongoing
> **Repository:** [github.com/karam7854A/Bruce_Powerful_Device](https://github.com/karam7854A/Bruce_Powerful_Device)

## What it is

Bruce Powerful Device is a self-built enclosure and electronics project based on an ESP32-C5 development board. It packages Bruce firmware with a large touchscreen and four or more attached sensors/modules into a portable device for learning embedded systems, electronics, and cybersecurity tooling.

The enclosure was assembled without a custom PCB in the first prototype. That choice made it possible to test the idea quickly while leaving a clear path for a future PCB revision and cleaner wiring.

## Hardware

- ESP32-C5 development board with Wi-Fi 6 and 5 GHz support.
- 4-inch touchscreen for interacting with the firmware.
- Four or more sensors/modules connected to the device; the exact wiring is documented as the hardware is revised.
- Custom enclosure designed for the prototype.
- Design files and prototypes in [`Cad_Designs/`](Cad_Designs/).
- Bill of materials in [`BOM.csv`](BOM.csv).

![Project design sketch](https://github.com/user-attachments/assets/084159ca-ff31-42ff-8e44-21ac85a95e44)

## Features

- Touchscreen interface for navigating the device.
- ESP32-C5-based wireless and embedded platform.
- Bruce firmware features adapted to the project’s connected modules.
- Expandable sensor and module connections for experimentation.
- Open-source firmware, board definitions, libraries, enclosure designs, and supporting files.

## Quick start

The firmware is a PlatformIO project inside `Bruce_Firmware/`.

```bash
git clone https://github.com/karam7854A/Bruce_Powerful_Device.git
cd Bruce_Powerful_Device/Firmware
pio run
```

To build the ESP32-C5 TFT target when it is available in your PlatformIO installation:

```bash
pio run -e esp32-c5-tft
```

Connect the appropriate ESP32-C5 board over USB and upload using the matching environment from [`Bruce_Firmware/platformio.ini`](Bruce_Firmware/platformio.ini). Check the board-specific files in [`Bruce_Firmware/boards/`](Bruce_Firmware/boards/) before flashing a physical device; pin mappings and display settings vary between boards.

### Requirements

- PlatformIO Core or Visual Studio Code with the PlatformIO extension.
- A compatible ESP32 board and USB data cable.
- The dependencies declared in [`Bruce_Firmware/platformio.ini`](Bruce_Firmware/platformio.ini).
- The correct board configuration for the display and modules being used.

## Repository layout

All project folders are grouped under [`Bruce_Firmware/`](Bruce_Firmware/) so the repository has one clear project root while this README remains easy to find on GitHub.

## How it works

The ESP32-C5 runs Bruce firmware and presents its tools through the touchscreen. Project-specific board files define the display, pins, and connected hardware, while the firmware’s modules provide the reusable device functionality. PlatformIO manages the framework, libraries, board configuration, and build scripts.

The current prototype prioritizes learning and rapid iteration: modules are wired directly instead of routed through a finished PCB. This makes the design easier to change while testing, and the saved enclosure and PCB work provide a foundation for a more robust next version.

## Credits 

- [Bruce](https://github.com/pr3y/Bruce), the open-source firmware project this device builds upon.
- The maintainers of the libraries and board support packages listed in [`Bruce_Firmware/THIRD_PARTY.md`](Bruce_Firmware/THIRD_PARTY.md).
- PlatformIO and Espressif’s Arduino framework.

The project’s third-party notices and license information are in [`Bruce_Firmware/THIRD_PARTY.md`](Bruce_Firmware/THIRD_PARTY.md) and [`Bruce_Firmware/LICENSE`](Bruce_Firmware/LICENSE).
