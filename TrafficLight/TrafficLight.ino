const int red = 7;
const int yellow = 6;
const int green = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
}
