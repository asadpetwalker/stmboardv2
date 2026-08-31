#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1 
#define SCREEN_ADDRESS 0x3C 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  Wire.begin(); 

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    while (true);
  }

  display.clearDisplay();
  
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  
  display.println(F("STM32Duino Initialized"));
  display.println(F("----------------------"));
  display.print(F("I2C Address: 0x"));
  display.println(SCREEN_ADDRESS, HEX);
  display.println(F("Status: ONLINE"));

  display.display();
}

void loop() {
  display.fillCircle(120, 56, 4, SSD1306_WHITE);
  display.display();
  delay(500);
  
  display.fillCircle(120, 56, 4, SSD1306_BLACK);
  display.display();
  delay(500);
}