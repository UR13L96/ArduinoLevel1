const int engine1 = 13;
const int engine2 = 12;
const int playButton = 11;
const int stopButton = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(engine1, OUTPUT);
  pinMode(engine2, OUTPUT);

  pinMode(playButton, INPUT_PULLUP);
  pinMode(stopButton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(playButton) == LOW) {
    digitalWrite(engine1, HIGH);
    digitalWrite(engine2, HIGH);
    delay(200);
  } else if (digitalRead(stopButton) == LOW) {
    digitalWrite(engine1, LOW);
    digitalWrite(engine2, LOW);
    delay(200);
  }
}
