#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "variant.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

// I2C
static const uint8_t SDA = 8;
static const uint8_t SCL = 7;

// SPI
static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;

#define SPI_MOSI (11)
#define SPI_SCK (12)
#define SPI_MISO (13)
#define SPI_CS (10)

// Standard Green LED
#define LED_BUILTIN (39)
#define BUILTIN_LED (39)

// NeoPixel (RGB) - Using 21 per your request
// We undefine it first just in case the base ESP32 libs set it.
#undef RGB_BUILTIN
#define RGB_BUILTIN (21)
#define RGB_BRIGHTNESS 64

#endif /* Pins_Arduino_h */
