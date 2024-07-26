const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int substractButton = 8;
const int addButton = 9;

int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(substractButton, INPUT_PULLUP);
  pinMode(addButton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(substractButton) == LOW && counter > 0) {
    counter -= 1;
    delay(200);
  } else if (digitalRead(addButton) == LOW && counter < 6) {
    counter += 1;
    delay(200);
  }

  for (int i = 0; i < counter; i++) {
    digitalWrite(i + 2, HIGH);
  }

  for (int i = 5; i >= counter; i--) {
    digitalWrite(i + 2, LOW);
  }
}
