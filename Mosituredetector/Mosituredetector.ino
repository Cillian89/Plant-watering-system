
int readMoistureLevel() {
  int moistureValue = analogRead(moistureSensor); // Read moisture level
  Serial.print("Moisture Level: "); 
  Serial.println(moistureValue);  // Print moisture value
  return moistureValue; // Return value to loop()
}

