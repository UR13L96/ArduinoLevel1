const int c = 8;
const int cs = 13;
const int d = 7;
const int ds = 12;
const int e = 6;
const int f = 5;
const int fs = 11;
const int g = 4;
const int gs = 10;
const int a = 3;
const int as = 9;
const int b = 2;

const int buzzer = 44;

void setup() {
  // put your setup code here, to run once:
  pinMode(c, INPUT_PULLUP);
  pinMode(cs, INPUT_PULLUP);
  pinMode(d, INPUT_PULLUP);
  pinMode(ds, INPUT_PULLUP);
  pinMode(e, INPUT_PULLUP);
  pinMode(f, INPUT_PULLUP);
  pinMode(fs, INPUT_PULLUP);
  pinMode(g, INPUT_PULLUP);
  pinMode(gs, INPUT_PULLUP);
  pinMode(a, INPUT_PULLUP);
  pinMode(as, INPUT_PULLUP);
  pinMode(b, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(c) == LOW) {
    tone(44, 261, 100);
  }
  if (digitalRead(cs) == LOW) {
    tone(44, 277, 100);
  }
  if (digitalRead(d) == LOW) {
    tone(44, 293, 100);
  }
  if (digitalRead(ds) == LOW) {
    tone(44, 311, 100);
  }
  if (digitalRead(e) == LOW) {
    tone(44, 329, 100);
  }
  if (digitalRead(f) == LOW) {
    tone(44, 349, 100);
  }
  if (digitalRead(fs) == LOW) {
    tone(44, 369, 100);
  }
  if (digitalRead(g) == LOW) {
    tone(44, 391, 100);
  }
  if (digitalRead(gs) == LOW) {
    tone(44, 415, 100);
  }
  if (digitalRead(a) == LOW) {
    tone(44, 440, 100);
  }
  if (digitalRead(as) == LOW) {
    tone(44, 466, 100);
  }
  if (digitalRead(b) == LOW) {
    tone(44, 493, 100);
  }
}
