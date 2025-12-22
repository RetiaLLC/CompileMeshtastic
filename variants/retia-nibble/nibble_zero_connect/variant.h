#define I2C_SDA 8
#define I2C_SCL 7

#define USE_SX1262

#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 10
#define LORA_RESET 6

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 4
#define SX126X_BUSY 5
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// #define PIN_LED1 39

#define BUTTON_PIN 1
#define BUTTON_NEED_PULLUP