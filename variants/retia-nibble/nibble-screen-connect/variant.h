#define PIN_GPIO01_SW1          1  
#define PIN_GPIO02_SW2          2  
#define PIN_GPIO38_SW3          38 
#define PIN_GPIO39_SW4          39 
#define PIN_GPIO40_SW5          40 
#define PIN_GPIO41_SW6          41 

#define PIN_GPIO03_WIO_RF_SW    3  
#define PIN_GPIO04_WIO_DIO1     4  
#define PIN_GPIO05_WIO_BUSY     5  
#define PIN_GPIO06_WIO_RESET    6  
#define PIN_GPIO10_WIO_CS       10 

#define PIN_GPIO11_SPI_MOSI     11 
#define PIN_GPIO12_SPI_SCK      12 
#define PIN_GPIO13_SPI_MISO     13 

#define PIN_GPIO07_I2C0_SCL     7  
#define PIN_GPIO08_I2C0_SDA     8  

#define PIN_GPIO09_CS_ACCESSORY 9  
#define PIN_GPIO17_SPARE_01     17 
#define PIN_GPIO18_SPARE_02     18 
#define PIN_GPIO42_SPARE_03     42 
#define PIN_GPIO45_SPARE_04     45 

#define PIN_GPIO43_UART_TX      43 
#define PIN_GPIO44_UART_RX      44 
#define I2C_SDA                 PIN_GPIO08_I2C0_SDA

#define I2C_SCL                 PIN_GPIO07_I2C0_SCL

#define LED_PIN                 PIN_GPIO09_CS_ACCESSORY 

#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT          1
#define NEOPIXEL_DATA           21 
#define NEOPIXEL_TYPE           (NEO_GRB + NEO_KHZ800)

#define ENABLE_AMBIENTLIGHTING

#define BUTTON_PIN              PIN_GPIO01_SW1 
#define BUTTON_NEED_PULLUP

#define USE_SX1262

#define LORA_MISO               PIN_GPIO13_SPI_MISO
#define LORA_SCK                PIN_GPIO12_SPI_SCK
#define LORA_MOSI               PIN_GPIO11_SPI_MOSI
#define LORA_CS                 PIN_GPIO10_WIO_CS

#define LORA_RESET              PIN_GPIO06_WIO_RESET
#define LORA_DIO1               PIN_GPIO04_WIO_DIO1
#define LORA_DIO2               PIN_GPIO05_WIO_BUSY 
#define LORA_RF_SW              PIN_GPIO03_WIO_RF_SW

#ifdef USE_SX1262
  #define SX126X_CS             LORA_CS
  #define SX126X_DIO1           LORA_DIO1
  #define SX126X_BUSY           LORA_DIO2
  #define SX126X_RESET          LORA_RESET

  #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

#define USE_SSD1306
#define DISPLAY_HEIGHT 64
#define DISPLAY_WIDTH 128
