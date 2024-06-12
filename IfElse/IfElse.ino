void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = digitalRead(12);

  if (input == LOW) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  }
}
