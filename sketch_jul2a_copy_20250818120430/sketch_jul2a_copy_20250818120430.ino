#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "logo_bitmap.h"
 // Include your image bitmap

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1  // or use the correct reset pin if available

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // I2C address 0x3C
  display.clearDisplay();

  // Draw bitmap at top-left (0,0)
display.drawBitmap(0, 0, logo_bitmap, 128, 64, WHITE);
  display.display();
}

void loop() {
  // No need to refresh continuously
}
