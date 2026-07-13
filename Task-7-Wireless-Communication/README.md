# Task 7 - Wireless Communication (Wi-Fi)

## Objective
To connect the ESP32 to a Wi-Fi network and display the connection status and IP address using the Serial Monitor.

## Components Used
- ESP32
- Wokwi Simulator

## Software Used
- Arduino Framework
- WiFi Library

## Arduino Code

```cpp
#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

void setup() {
  Serial.begin(115200);

  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
```

## Working
The ESP32 connects to the Wi-Fi network named **Wokwi-GUEST**. After a successful connection, the connection status and the assigned IP address are displayed on the Serial Monitor.

## Result
The ESP32 successfully connected to the Wi-Fi network, and the IP address was displayed on the Serial Monitor.
