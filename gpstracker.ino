#include <SoftwareSerial.h>

// RX to D4, TX to D3
SoftwareSerial gpsSerial(4, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  Serial.println("Waiting for GPS...");
}

void loop() {
  while (gpsSerial.available()) {
    char c = gpsSerial.read();
    Serial.write(c); // Print GPS data to Serial Monitor
  }
}
