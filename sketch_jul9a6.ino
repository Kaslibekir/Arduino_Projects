int redPin = 8
int greenPin = 9
int bluePin = 10
String myColor;

void setup() {
  Serial.begin (9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  Serial.println(msg)
  while (Serial.available() == 0){

  }
  myColor = Serial.readString();
}