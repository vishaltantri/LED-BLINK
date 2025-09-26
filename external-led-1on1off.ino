void setup() {
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(2000);
  digitalWrite(8, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
}
