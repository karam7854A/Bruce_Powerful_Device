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
- Design files and prototypes in [`Firmware/Desings/`](Firmware/Desings/).
- Bill of materials in [`BOM.csv`](BOM.csv).

![Project design sketch](https://github.com/user-attachments/assets/084159ca-ff31-42ff-8e44-21ac85a95e44)

## Features

- Touchscreen interface for navigating the device.
- ESP32-C5-based wireless and embedded platform.
- Bruce firmware features adapted to the project’s connected modules.
- Expandable sensor and module connections for experimentation.
- Open-source firmware, board definitions, libraries, enclosure designs, and supporting files.

## Quick start

The firmware is a PlatformIO project inside `Firmware/`.

```bash
git clone https://github.com/karam7854A/Bruce_Powerful_Device.git
cd Bruce_Powerful_Device/Firmware
pio run
```

To build the ESP32-C5 TFT target when it is available in your PlatformIO installation:

```bash
pio run -e esp32-c5-tft
```

Connect the appropriate ESP32-C5 board over USB and upload using the matching environment from [`Firmware/platformio.ini`](Firmware/platformio.ini). Check the board-specific files in [`Firmware/boards/`](Firmware/boards/) before flashing a physical device; pin mappings and display settings vary between boards.

### Requirements

- PlatformIO Core or Visual Studio Code with the PlatformIO extension.
- A compatible ESP32 board and USB data cable.
- The dependencies declared in [`Firmware/platformio.ini`](Firmware/platformio.ini).
- The correct board configuration for the display and modules being used.

## Repository layout

All project folders are grouped under [`Firmware/`](Firmware/) so the repository has one clear project root while this README remains easy to find on GitHub.

| Path | Purpose |
| --- | --- |
| `Firmware/src/` | Main firmware source and modules |
| `Firmware/include/` | Project headers and generated interfaces |
| `Firmware/lib/` | Local libraries and hardware abstraction code |
| `Firmware/boards/` | Board definitions, pin mappings, and PlatformIO environments |
| `Firmware/Desings/` | Enclosure prototypes, sketches, and 3D files |
| `Firmware/media/` | Project and hardware reference media |
| `Firmware/pcbs/` | PCB experiments and board documentation |
| `Firmware/sd_files/` | Files used by the device’s SD-card workflows |
| `Firmware/embedded_resources/` | Web interface and embedded resources |
| `Firmware/tools/` | Build and development utilities |
| `Firmware/docker/` | Container and CI build helpers |
| `Firmware/.vscode/` | Editor tasks and settings |

## How it works

The ESP32-C5 runs Bruce firmware and presents its tools through the touchscreen. Project-specific board files define the display, pins, and connected hardware, while the firmware’s modules provide the reusable device functionality. PlatformIO manages the framework, libraries, board configuration, and build scripts.

The current prototype prioritizes learning and rapid iteration: modules are wired directly instead of routed through a finished PCB. This makes the design easier to change while testing, and the saved enclosure and PCB work provide a foundation for a more robust next version.

## Project story and progress

This project started as a hands-on way to learn electrical engineering, embedded programming, and cybersecurity hardware. The first enclosure was built under time pressure, so it intentionally documents both the working result and the areas that still need improvement: cleaner wiring, a finalized PCB, clearer sensor pinout documentation, and a repeatable assembly guide.

For a Stardance submission, the project should be accompanied by a short walkthrough video and development log showing the prototype, touchscreen interaction, sensor tests, firmware changes, and the next hardware revision. Those links will be added here when published:

- **Demo / walkthrough video:** _To be added_
- **Development log:** _To be added_
- **Build notes and wiring diagram:** _In progress_

## Safety and responsible use

This device is intended for learning, testing owned hardware, and authorized security research. Do not use wireless, NFC, USB, or other capabilities against systems, networks, devices, or credentials without explicit permission. Follow local laws and the licenses of all included third-party software.

## Credits and acknowledgements

- [Bruce](https://github.com/pr3y/Bruce), the open-source firmware project this device builds upon.
- The maintainers of the libraries and board support packages listed in [`Firmware/THIRD_PARTY.md`](Firmware/THIRD_PARTY.md).
- PlatformIO and Espressif’s Arduino framework.

The project’s third-party notices and license information are in [`Firmware/THIRD_PARTY.md`](Firmware/THIRD_PARTY.md) and [`Firmware/LICENSE`](Firmware/LICENSE).

## Stardance shipping checklist

- [x] Public, cloneable GitHub repository.
- [x] Clear project description and hardware photo.
- [x] Quick-start and local build instructions.
- [x] Feature list and technical explanation.
- [x] Credits and third-party notices.
- [ ] Publish a short hardware walkthrough video.
- [ ] Add a development log with dated progress updates.
- [ ] Add a final wiring diagram and reproducible assembly instructions.

This README follows the [Stardance README guidance](https://stardance.hackclub.com/resources/great_readme). Stardance hardware projects can use photos, a walkthrough video, printable enclosure files, and PCB documentation as their demo materials; see the [Stardance shipping guidance](https://stardance.hackclub.com/resources/what_is_shipping).
