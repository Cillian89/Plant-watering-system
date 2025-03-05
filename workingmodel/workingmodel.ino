int moistureSensor = A0;    // Pin for moisture sensor
int relayPin = 7;           // Pin for the relay (connected to D7 on Base Shield)
int moistureValue = 0;      // Variable to store sensor value

void setup() {
  pinMode(relayPin, OUTPUT);  // Set relay pin as output
  Serial.begin(9600);         // Start serial communication for debugging
}

void loop() {
  moistureValue = analogRead(moistureSensor); // Read moisture sensor value
  Serial.println(moistureValue);  // Print value for debugging

  if (moistureValue <= 500) {  // Threshold for dry soil
    digitalWrite(relayPin, HIGH); // Turn on pump
  } else {
    digitalWrite(relayPin, LOW);  // Turn off pump
  }

  delay(1000);  // Wait for 1 second before the next reading
}
