```cpp
#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "dash_1794814147815";

// Create KiwisIoT Object
KiwisIoT kiwisiot(ssid, pass, topic);

// Initialize Data Value
int testValue = 1;

void setup() {

  // Initialize Serial Communication
  Serial.begin(115200);

  Serial.println();
  Serial.println("ESP8266 IoT Connection");

  // Initialize KiwisIoT
  kiwisiot.begin();

  Serial.println("KiwisIoT Initialized");
}

void loop() {

  // Maintain KiwisIoT Connection
  kiwisiot.run();

  // Send Data to KiwisIoT Platform
  kiwisiot.send("0", testValue);

  // Display Transmitted Value
  Serial.print("Data sent to KiwisIoT: ");
  Serial.println(testValue);

  // Increment Data Value
  testValue++;

  // Reset Counter After 100
  if (testValue > 100) {
    testValue = 1;
  }

  // Wait for 3 Seconds
  delay(3000);
}
```
