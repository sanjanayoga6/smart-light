#define LDR_PIN 4       // Digital pin for LDR (configured as digital input)
#define PIR_PIN 18         // Digital pin for PIR sensor (HW-416-B)
#define RELAY_PIN 5       // Digital pin for relay

void setup() {
  Serial.begin(115200);
  pinMode(LDR_PIN, INPUT);      // Set LDR pin as input (digital)
  pinMode(PIR_PIN, INPUT);      // Set PIR pin as input
  pinMode(RELAY_PIN, OUTPUT);   // Set relay pin as output

  Serial.println("LDR + PIR + Relay Control Initialized...");
}

void loop() {
  int ldrState = digitalRead(LDR_PIN);  // Read LDR value (digital HIGH/LOW)
  int pirState = digitalRead(PIR_PIN);  // Read PIR sensor state

  Serial.print("LDR: ");
  Serial.print(ldrState);
  Serial.print(" | PIR: ");
  Serial.println(pirState);

  // If it's dark (LDR LOW) AND motion is detected (PIR HIGH) → turn on relay
  if (ldrState == LOW || pirState == LOW) {
    Serial.println("Dark + Motion Detected → Relay OFF");
    digitalWrite(RELAY_PIN, HIGH);  // Turn on relay
  } else {
    Serial.println("Conditions not met → Relay ON");
    digitalWrite(RELAY_PIN, LOW);   // Turn off relay
  }

  delay(500);  // Loop delay
}