# Task 3 - Analog Sensor Data Reading

## Objective
To read analog values from an LDR sensor using Arduino Uno.

## Components Used
- Arduino Uno
- LDR Sensor Module
- Jumper Wires
- Wokwi Simulator

## Connections
- VCC → 5V
- GND → GND
- AO → A0

## Arduino Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value);
  delay(500);
}
```

## Working
The LDR sensor detects the light intensity. Arduino reads the analog value from pin A0 using the `analogRead()` function and displays the values on the Serial Monitor. When the light level changes, the analog values also change.

## Result
The analog values were successfully read from the LDR sensor and displayed on the Serial Monitor.
