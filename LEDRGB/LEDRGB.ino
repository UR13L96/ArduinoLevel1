const int out_r = 2;
const int out_g = 3;
const int out_b = 4;

const int in_r = 8;
const int in_g = 9;
const int in_b = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(out_r, OUTPUT);
  pinMode(out_g, OUTPUT);
  pinMode(out_b, OUTPUT);

  pinMode(in_r, INPUT_PULLUP);
  pinMode(in_g, INPUT_PULLUP);
  pinMode(in_b, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(out_r, digitalRead(in_r));
  digitalWrite(out_g, digitalRead(in_g));
  digitalWrite(out_b, digitalRead(in_b));
}
