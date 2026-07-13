void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("System Active");
  delay(5000);
  Serial.println("System Woke Up");
}
