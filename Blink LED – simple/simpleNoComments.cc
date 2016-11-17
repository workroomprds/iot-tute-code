int target = D7; 

void setup() {
  pinMode(target, OUTPUT);
}

void loop() {
  digitalWrite(target, HIGH);
  delay(1000);
  digitalWrite(target, LOW);
  delay(100);
}