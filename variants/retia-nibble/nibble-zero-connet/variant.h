#ifndef _VARIANT_NIBBLE_ZERO_CONNECT_
#define _VARIANT_NIBBLE_ZERO_CONNECT_

// --- Display ---
#define I2C_SDA 8
#define I2C_SCL 7
#define OLED_SDA I2C_SDA
#define OLED_SCL I2C_SCL

// --- LoRa Radio ---
#define USE_SX1262
#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 10
#define LORA_RESET 6
#define LORA_DIO1 4
#define LORA_BUSY 5
#define LORA_TXEN 3

#ifdef USE_SX1262
  #define SX126X_CS LORA_CS
  #define SX126X_DIO1 LORA_DIO1
  #define SX126X_BUSY LORA_BUSY
  #define SX126X_RESET LORA_RESET
  #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// --- Status LED ---
#define PIN_LED1 39
#define LED_ON 1 
#define LED_INV 0 

// --- Primary Button ---
#define BUTTON_PIN 1
#define BUTTON_NEED_PULLUP

// --- Input Broker (Virtual Trackball) ---
#define HAS_TRACKBALL 1
#define TB_UP 40      
#define TB_DOWN 45    
#define TB_LEFT 41    
#define TB_RIGHT 42   
#define TB_PRESS 2    
#define TB_DIRECTION FALLING 

// --- Safety for Flipper ---
#define PIN_FLIPPER_DETECT 18

#endif
