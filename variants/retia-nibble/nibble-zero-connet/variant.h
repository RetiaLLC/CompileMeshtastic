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

// --- Virtual Trackball (Input Broker) ---
#define HAS_TRACKBALL 1
#define TB_UP 40      
#define TB_DOWN 45    
#define TB_LEFT 41    
#define TB_RIGHT 42   
#define TB_PRESS 2    
#define TB_DIRECTION FALLING 

// --- Safety for Flipper (Pin 18) ---
#define PIN_FLIPPER_DETECT 18
