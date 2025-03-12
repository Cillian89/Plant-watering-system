int moistureSensor = A0;  // Moisture sensor connected to A0
int relayPin = 3;         // Relay module connected to pin 3
int moistureThreshold = 500; // Threshold for water dispensing

void setup() {
  pinMode(relayPin, OUTPUT); // Output pin for relay
  Serial.begin(9600);        // Start Serial Monitor for debugging
}

void loop() {
  int moistureValue = analogRead(moistureSensor); // Read moisture level
  Serial.print("Moisture Level: "); 
  Serial.println(moistureValue);  // Print moisture value

  if (moistureValue > moistureThreshold) { 
    digitalWrite(relayPin, HIGH); // Turn ON water pump if soil is dry
  } else {
    digitalWrite(relayPin, LOW);  // Turn OFF water pump if soil is moist
  }
  
  delay(1000); // Wait before the next reading
}
