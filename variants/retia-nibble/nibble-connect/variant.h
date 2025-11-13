#define UART_TX 43
#define UART_RX 44
#define SPI_SCK 13
#define SPI_MISO 12
#define SPI_MOSI 11
#define WIO_CS 10
#define CS_ACCESSORY 9
#define I2C0_SDA 8
#define I2C0_SCL 7
#define WIO_RESET 6
#define WIO_BUSY 5
#define WIO_DIO1 4
#define WIO_RF_SW 3
#define IO_GENERAL 2
#define LED_DEBUG 1

#define I2C_SDA I2C0_SDA // I2C pins for this board
#define I2C_SCL I2C0_SCL

#define LED_PIN LED_DEBUG // If defined we will blink this LED

#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 21                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#define ENABLE_AMBIENTLIGHTING

#define BUTTON_PIN 0 // If defined, this will be used for user button presses
#define BUTTON_NEED_PULLUP

// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1280

#define LORA_MISO SPI_MISO
#define LORA_SCK SPI_SCK
#define LORA_MOSI SPI_MOSI
#define LORA_CS WIO_CS

#define LORA_RESET WIO_RESET
#define LORA_DIO1 WIO_DIO1
#define LORA_DIO2 WIO_BUSY

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif