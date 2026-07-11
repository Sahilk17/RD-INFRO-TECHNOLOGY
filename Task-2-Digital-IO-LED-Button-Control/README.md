# Task 2 - Digital I/O (LED and Button Control)

## Objective
To control an LED using a push button with Arduino Uno.

## Components Used
- Arduino Uno
- LED
- Push Button
- Wokwi Simulator

## Connections
- LED → Pin 13 and GND
- Push Button → Pin 2 and GND

## Arduino Code

```cpp
const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```

## Working
When the push button is pressed, the LED turns ON. When the button is released, the LED turns OFF.

## Result
The LED was successfully controlled using the push button.
