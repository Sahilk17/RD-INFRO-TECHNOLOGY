# Task 4 - I2C OLED Display

## Objective
To interface an OLED display with Arduino Uno using I2C communication and display text.

## Components Used
- Arduino Uno
- OLED Display (SSD1306 I2C)
- Wokwi Simulator

## Connections
- GND → GND
- VCC → 5V
- SDA → A4
- SCL → A5

## Arduino Code

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 20);
  display.println("Hello!");
  display.display();
}

void loop() {
}
```

## Result
The OLED display was successfully interfaced with Arduino Uno using I2C communication. The text "Hello!" was displayed on the OLED screen.
