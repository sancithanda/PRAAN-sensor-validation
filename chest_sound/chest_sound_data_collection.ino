const int MIC_PIN = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {

  unsigned long timestamp = micros();

  int rawValue = analogRead(MIC_PIN);

  Serial.print(timestamp);
  Serial.print(",");
  Serial.println(rawValue);

  delayMicroseconds(125);
}
