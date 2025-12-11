// Pin definitions based on "Nibble Zero Connect" Schematic (Rev 01) 
// Source: ESP32 S3 ZERO PINOUT DEFINITION block 

// --- Buttons ---
#define PIN_GPIO01_SW1          1  // General IO / SW1
#define PIN_GPIO02_SW2          2  // General IO / SW2
#define PIN_GPIO38_SW3          38 // Digital IO / SW 03
#define PIN_GPIO39_SW4          39 // Digital IO / SW 04
#define PIN_GPIO40_SW5          40 // Digital IO / SW 05
#define PIN_GPIO41_SW6          41 // Digital IO / SW 06

// --- LoRa Radio (SX1262) ---
#define PIN_GPIO03_WIO_RF_SW    3  // General IO / RF SW for Lora Module
#define PIN_GPIO04_WIO_DIO1     4  // General IO / DIO1 for Lora Module
#define PIN_GPIO05_WIO_BUSY     5  // General IO / Busy for Lora Module
#define PIN_GPIO06_WIO_RESET    6  // General IO / Rest for Lora Module
#define PIN_GPIO10_WIO_CS       10 // General IO / SPI CS Lora Module

// --- SPI Bus ---
#define PIN_GPIO11_SPI_MOSI     11 // General IO / SPI MOSI
#define PIN_GPIO12_SPI_SCK      12 // General IO / SPI SCK (Note: Changed from 13)
#define PIN_GPIO13_SPI_MISO     13 // General IO / SPI MISO (Note: Changed from 12)

// --- I2C Bus ---
#define PIN_GPIO07_I2C0_SCL     7  // General IO / I2C SCL (Note: Changed from 9)
#define PIN_GPIO08_I2C0_SDA     8  // General IO / I2C SDA

// --- Accessories / Spares ---
#define PIN_GPIO09_CS_ACCESSORY 9  // General IO / SPI CS Accessory (Used as LED_PIN)
#define PIN_GPIO17_SPARE_01     17 // General IO / SPARE 01
#define PIN_GPIO18_SPARE_02     18 // General IO / SPARE 02
#define PIN_GPIO42_SPARE_03     42 // Digital IO / SPARE 03
#define PIN_GPIO45_SPARE_04     45 // Digital IO / SPARE 04

// --- UART ---
#define PIN_GPIO43_UART_TX      43 // UART TX
#define PIN_GPIO44_UART_RX      44 // UART RX

// -----------------------------------------------------------------------------
// PlatformIO / Arduino Mappings
// -----------------------------------------------------------------------------

#define I2C_SDA                 PIN_GPIO08_I2C0_SDA
#define I2C_SCL                 PIN_GPIO07_I2C0_SCL

// Defined as CS Accessory in schematic, but matches usage in old file 
#define LED_PIN                 PIN_GPIO09_CS_ACCESSORY 

#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT          1
// ESP32-S3-Zero default Neopixel is typically GPIO 21. 
// Schematic shows discrete D7 WS2812B but no explicit pin mapping in text block[cite: 31, 82].
#define NEOPIXEL_DATA           21 
#define NEOPIXEL_TYPE           (NEO_GRB + NEO_KHZ800)

#define ENABLE_AMBIENTLIGHTING

#define BUTTON_PIN              PIN_GPIO01_SW1 
#define BUTTON_NEED_PULLUP

// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1280

#define LORA_MISO               PIN_GPIO13_SPI_MISO
#define LORA_SCK                PIN_GPIO12_SPI_SCK
#define LORA_MOSI               PIN_GPIO11_SPI_MOSI
#define LORA_CS                 PIN_GPIO10_WIO_CS

#define LORA_RESET              PIN_GPIO06_WIO_RESET
#define LORA_DIO1               PIN_GPIO04_WIO_DIO1
#define LORA_DIO2               PIN_GPIO05_WIO_BUSY // Used as BUSY on SX1262
#define LORA_RF_SW              PIN_GPIO03_WIO_RF_SW

#ifdef USE_SX1262
  #define SX126X_CS             LORA_CS
  #define SX126X_DIO1           LORA_DIO1
  #define SX126X_BUSY           LORA_DIO2
  #define SX126X_RESET          LORA_RESET
  // Schematic defines explicit RF Switch pin (IO_03), 
  // so we might not be using DIO2 for this anymore depending on library config.
  // #define SX126X_DIO2_AS_RF_SWITCH 
  #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// Schematic uses SSD1315 (compatible with SSD1306) [cite: 24]
#define USE_SSD1306
#define DISPLAY_HEIGHT 64
#define DISPLAY_WIDTH 128