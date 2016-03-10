int greenPin = 23;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello World!\n");
  analogWrite(greenPin, 125);
  delay(500);
}
