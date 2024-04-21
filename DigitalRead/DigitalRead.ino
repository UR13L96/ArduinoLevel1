void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = digitalRead(12);
  digitalWrite(13, input);
}
