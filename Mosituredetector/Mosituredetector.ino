#define MOISTURE_SENSOR A0  // Sensor connected to A0

void setup() {
  Serial.begin(9600); // Start serial monitor
}

void loop() {
  int moistureValue = analogRead(MOISTURE_SENSOR); // Read sensor value
  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue); // Print value in Serial Monitor

  delay(1000); // Wait 1 second
}


