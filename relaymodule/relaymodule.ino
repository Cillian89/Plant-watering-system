#define RELAY_PIN 7  // The relay is connected to Digital Pin 7

void setup() {
  pinMode(RELAY_PIN, OUTPUT);  // Set the relay pin as an output
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  Serial.println("Relay ON");
  digitalWrite(RELAY_PIN, HIGH);  // Turn the relay ON
  delay(3000);  // Wait 3 seconds

  Serial.println("Relay OFF");
  digitalWrite(RELAY_PIN, LOW);  // Turn the relay OFF
  delay(3000);  // Wait 3 seconds
}
