const int red1 = 7;
const int yellow1 = 6;
const int green1 = 5;

const int red2 = 10;
const int yellow2 = 9;
const int green2 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red1, LOW);
  delay(3000);
  digitalWrite(green1, LOW);
  
  digitalWrite(yellow1, HIGH);
  delay(1000);
  digitalWrite(yellow1, LOW);

  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);
  delay(3000);
  digitalWrite(green2, LOW);

  digitalWrite(yellow2, HIGH);
  delay(1000);
  digitalWrite(yellow2, LOW);
}
