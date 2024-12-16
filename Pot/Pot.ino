void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a0 = analogRead(A0);
  int percentage = map(a0, 0, 1023, 0, 100);
  Serial.print("A0 = ");
  Serial.print(percentage);
  Serial.println("%");
}
