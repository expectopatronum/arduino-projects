int greenPin = 23;

void setup() {
  pinMode(greenPin, OUTPUT);
}

void loop() {
  analogWrite(greenPin, 255);
  delay(500);
  analogWrite(greenPin, 125);
  delay(500);
  analogWrite(greenPin, 0);
  delay(500);
}
