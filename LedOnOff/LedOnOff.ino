bool state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = digitalRead(7);
  if (input == LOW) {
    state = !state;
    delay(250);
  }

  if (!state) {
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }
}
