void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int a0 = analogRead(A0);
  int volt = map(a0, 0, 1023, 0, 5);
  Serial.print("A0 = ");
  Serial.print(volt);
  Serial.println("V");

  int i = 2;
  for (i; i < volt + 2; i++) {
    digitalWrite(i, HIGH);
  }

  for (int j = 6; j >= i; j--) {
    digitalWrite(i, LOW);
  }
}
