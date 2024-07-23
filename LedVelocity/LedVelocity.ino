const int slow = 6;
const int fast = 7;
int led = 8;

void setup() {
  pinMode(slow, INPUT_PULLUP);
  pinMode(fast, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  int slowValue = digitalRead(slow);
  int fastValue = digitalRead(fast);

  if (slowValue == LOW) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }

  if (fastValue == LOW) {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }
  
  
}
