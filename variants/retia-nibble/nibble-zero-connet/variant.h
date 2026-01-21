#ifndef _VARIANT_NIBBLE_ZERO_CONNECT_
#define _VARIANT_NIBBLE_ZERO_CONNECT_

// --- Display (Schematic: SDA=8, SCL=7) ---
#define I2C_SDA 8
#define I2C_SCL 7
#define OLED_SDA I2C_SDA
#define OLED_SCL I2C_SCL

// --- LoRa Radio (Schematic: SX-1262 PINOUT) ---
#define USE_SX1262
#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 10
#define LORA_RESET 6
#define LORA_DIO1 4
#define LORA_BUSY 5

// RF Switch is on GPIO 3 (High=TX, Low=RX)
#define LORA_TXEN 3
// Do NOT define SX126X_DIO2_AS_RF_SWITCH

#ifdef USE_SX1262
  #define SX126X_CS LORA_CS
  #define SX126X_DIO1 LORA_DIO1
  #define SX126X_BUSY LORA_BUSY
  #define SX126X_RESET LORA_RESET
  #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// --- Status LED (Green LED on GPIO 39) ---
#define PIN_LED1 39
#define LED_ON 1 
#define LED_INV 0 

// --- Primary User Button (SW1 / GPIO 1) ---
#define BUTTON_PIN 1
#define BUTTON_NEED_PULLUP

// --- Input Broker (Virtual Trackball) ---
// Maps side buttons (SW3-SW6) to D-Pad for keyboard navigation
#define HAS_TRACKBALL 1
#define TB_UP 40      // SW3
#define TB_DOWN 45    // SW6
#define TB_LEFT 41    // SW4
#define TB_RIGHT 42   // SW5
#define TB_PRESS 2    // SW2 (Enter)
#define TB_DIRECTION FALLING 

#endif
