#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>
// GPIO27 = onboard addressable RGB LED on DevKitC-1t hold -1) and triggers "Invalid IO 255 selected" crashes.
// Using #define keeps -1 as a real int sentinel, matching the other RGB macros.
#define LED_BUILTIN -1
// DISABLED
#define PIN_RGB_LED -1 // DISABLED: Prevents the RISC-V kernel panic loop
#define BUILTIN_LED -1
#define RGB_BUILTIN -1
#define RGB_BRIGHTNESS 0
#define HAS_RGB_LED 0 // DISABLED: Completely skips FastLED setup
#define RGB_LED 27    // GPIO27 = onboard addressable RGB LED on DevKitC-1  // DISABLED

// Dummy placeholder values — required only so led_control.cpp compiles.
// Since HAS_RGB_LED is 0, the actual FastLED init/animation code paths
// are runtime-gated and never touch RGB_LED (-1), so these numbers are
// otherwise inert.
#define LED_COUNT 1
#define LED_TYPE WS2812B
#define LED_ORDER GRB
#define LED_COLOR_STEP 1

static const uint8_t TX = 11;
static const uint8_t RX = 12;

static const uint8_t USB_DM = 13;
static const uint8_t USB_DP = 14;

static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

static const uint8_t SS = 9; // PN532 RFID Chip Select line
static const uint8_t MOSI = 7;
static const uint8_t MISO = 2; // Shared hardware SPI data return lane
static const uint8_t SCK = 6;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;

// LP I2C Pins are fixed on ESP32-C5
static const uint8_t LP_SDA = 4;
static const uint8_t LP_SCL = 5;
#define WIRE1_PIN_DEFINED
#define SDA1 LP_SDA
#define SCL1 LP_SCL

// LP UART Pins are fixed on ESP32-C5
static const uint8_t LP_RX = 12;
static const uint8_t LP_TX = 11;

/* Communication Buses*/
// UART
#define SERIAL_TX 11
#define SERIAL_RX 12
// I2C
#define GROVE_SDA 4
#define GROVE_SCL 5
// SPI
#define SPI_SCK_PIN 6
#define SPI_MOSI_PIN 7
#define SPI_MISO_PIN 2
#define SPI_SS_PIN 9

/* TFT definitions */
#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT (uint8_t)1
#define USER_SETUP_LOADED 1

/* ---------------------   */
// ILI9488 native panel resolution is 320x480 (portrait); ROTATION 1 flips it to 480x320 landscape at runtime.
#define ILI9488_DRIVER 1
#define TFT_HEIGHT 480
#define TFT_WIDTH 320

/* ---------------------   */
// Common TFT definitions
#define TFT_BACKLIGHT_ON 1
#define TFT_BL 25
#define TFT_RST 1 // Screen reset wire mapped to GPIO 15
#define TFT_DC 24
#define TFT_MISO 5 // Touch panel T_DO data line mapped to GPIO 5
#define TFT_MOSI 7
#define TFT_SCLK 6
#define TFT_CS 23
#define TOUCH_CS 0 // Touch panel CS wire mapped to GPIO 0
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 16000000
#define SPI_READ_FREQUENCY 16000000
#define SPI_TOUCH_FREQUENCY 500000
#define TFT_RGB_ORDER TFT_BGR
/*  Peripheral settings  */
// Bad USB with CH9329
#define BAD_RX 4
#define BAD_TX 5
// GPS Bus
#define GPS_SERIAL_TX 5
#define GPS_SERIAL_RX 4

// Touch Interface Polling Configuration
#define USE_TFT_eSPI_TOUCH 1
#define HAS_TOUCH 1
#define TOUCH_INT -1
#define BTN_ACT LOW
#define DEEPSLEEP_WAKEUP_PIN -1

#define SEL_BTN -1
#define DW_BTN -1
#define UP_BTN -1

// Infrared Array Setup
#define HAS_IR 1
#define RXLED 26 // IR Receiver Signal connected to GPIO 26
#define TXLED 10 // IR Transmitter LED connected to GPIO 10
#define LED_ON HIGH
#define LED_OFF LOW

// PN532 RFID reader maps (Faking SD variables to avoid compiler failures)
#define SDCARD_CS 28
#define SDCARD_SCK SPI_SCK_PIN
#define SDCARD_MISO SPI_MISO_PIN
#define SDCARD_MOSI SPI_MOSI_PIN

// 433Mhz ASK Simple Transceiver Setup
#define RF_RX_PIN 8 // ASK Receiver DATA pin connected to GPIO 8
#define RF_TX_PIN 3 // ASK Transmitter DATA pin connected to GPIO 3

// FIXED UNUSED BLOCKS: Redirected to open pin 28 to pass compiler assertions safely
#define CC1101_GDO0_PIN 28
#define CC1101_SS_PIN 28
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

#define NRF24_CE_PIN 28
#define NRF24_SS_PIN 28
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

#define W5500_INT_PIN 28
#define W5500_SS_PIN 28
#define W5500_MOSI_PIN SPI_MOSI_PIN
#define W5500_SCK_PIN SPI_SCK_PIN
#define W5500_MISO_PIN SPI_MISO_PIN
#endif /* Pins_Arduino_h */
