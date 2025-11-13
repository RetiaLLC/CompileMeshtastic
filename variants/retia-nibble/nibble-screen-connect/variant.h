// Pin definitions to match schematics drawing
#define PIN_GPIO01_IO_01 1
#define PIN_GPIO02_IO_02 2
#define PIN_GPIO03_WIO_RF_SW 3
#define PIN_GPIO04_WIO_DIO1 4
#define PIN_GPIO05_WIO_BUSY 5
#define PIN_GPIO06_WIO_RESET 6
#define PIN_GPIO09_I2C0_SCL 7
#define PIN_GPIO08_I2C0_SDA 8
#define PIN_GPIO09_CS_ACCESSORY 9
#define PIN_GPIO10_WIO_CS 10
#define PIN_GPIO11_SPI_MOSI 11
#define PIN_GPIO12_SPI_MISO 12
#define PIN_GPIO13_SPI_SCK 13
#define PIN_GPIO43_UART_TX 43
#define PIN_GPIO44_UART_RX 44
// End pin definitions

#define I2C_SDA PIN_GPIO08_I2C0_SDA // I2C pins for this board
#define I2C_SCL PIN_GPIO09_I2C0_SCL

#define LED_PIN PIN_GPIO09_CS_ACCESSORY // If defined we will blink this LED

#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 21                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#define ENABLE_AMBIENTLIGHTING

#define BUTTON_PIN PIN_GPIO01_IO_01 // If defined, this will be used for user button presses
#define BUTTON_NEED_PULLUP

// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1280

#define LORA_MISO PIN_GPIO12_SPI_MISO
#define LORA_SCK PIN_GPIO13_SPI_SCK
#define LORA_MOSI PIN_GPIO11_SPI_MOSI
#define LORA_CS PIN_GPIO10_WIO_CS

#define LORA_RESET PIN_GPIO06_WIO_RESET
#define LORA_DIO1 PIN_GPIO04_WIO_DIO1
#define LORA_DIO2 PIN_GPIO05_WIO_BUSY

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// #define USE_SSD1306
// #define DISPLAY_HEIGHT 32
// #define DISPLAY_WIDTH 128
// #define TFT_HEIGHT 32
// #define TFT_WIDTH 128