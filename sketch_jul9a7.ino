int yellow_cable = 8;
int blue_cable = 7;
int red_cable = A0;
float chosen_volt;


void setup() {
  Serial.begin(9600);
  pinMode(yellow_cable,OUTPUT);
  pinMode(blue_cable,OUTPUT);
  pinMode(red_cable,INPUT);
}

void loop() {
  digitalWrite(blue_cable,HIGH);
  chosen_volt = analogRead(red_cable);
  Serial.println(chosen_volt);
  while(chosen_volt >= 500)
  {
    digitalWrite(yellow_cable,HIGH);
    chosen_volt = analogRead(red_cable);
  }
  digitalWrite(yellow_cable,LOW);
}
