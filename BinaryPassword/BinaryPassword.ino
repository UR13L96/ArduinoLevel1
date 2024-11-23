const int digit1 = 2;
const int digit2 = 3;
const int digit3 = 4;
const int digit4 = 5;
const int confirmButton = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(digit1, INPUT);
  pinMode(digit2, INPUT);
  pinMode(digit3, INPUT);
  pinMode(digit4, INPUT);

  pinMode(confirmButton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(confirmButton) == LOW) {
    const int input1 = digitalRead(digit1);
    const int input2 = digitalRead(digit2);
    const int input3 = digitalRead(digit3);
    const int input4 = digitalRead(digit4);

    Serial.print(input1);
    Serial.print(input2);
    Serial.print(input3);
    Serial.print(input4);
    Serial.println("");
    if (input1 == HIGH && input2 == HIGH && input3 == LOW && input4 == HIGH) {
      Serial.println("OPEN");
    } else {
      Serial.println("CLOSED");
    }

    delay(200);
  }
}
