void setup() {
  // put your setup code here, to run once:
  for(int i = 6; i <= 11; i++) {
    pinMode(i, OUTPUT); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 6; i <= 11; i++) {
    digitalWrite(i, HIGH);
    delay(250);
  }

  for(int i = 11; i >= 6; i--) {
    digitalWrite(i, LOW);
    delay(250);
  }
}
