# Task 8 - Embedded Project Deployment and Power Optimization

## Objective
To demonstrate a simple power optimization technique using Arduino.

## Components Used
- Arduino Uno
- Wokwi Simulator

## Arduino Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("System Active");
  delay(5000);
  Serial.println("System Woke Up");
}
```

## Working
The Arduino prints a message, waits for 5 seconds to simulate a low-power idle period, and then prints another message. This demonstrates a basic power optimization concept.

## Result
The Arduino successfully demonstrated a simple power-saving behavior using delay().
