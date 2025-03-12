int relayPin = 3;         // Relay module connected to pin 3
int moistureThreshold = 500; 

void setup() {
  pinMode(relayPin, OUTPUT); // Output pin for relay
}

void loop() {
  int moistureValue = 500; 
  controlWaterPump(moistureValue);
  delay(1000); // Wait before next activation
}

void controlWaterPump(int moistureValue) {
  if (moistureValue > moistureThreshold) { 
    digitalWrite(relayPin, HIGH); // Turn ON water pump if soil is dry
  } else {
    digitalWrite(relayPin, LOW);  // Turn OFF water pump if soil is moist
  }
}
