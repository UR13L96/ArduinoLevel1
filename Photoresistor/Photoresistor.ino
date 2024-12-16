const int led = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a0 = analogRead(A0);
  Serial.print("A0 = ");
  Serial.println(a0);

  if (a0 <= 5) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}