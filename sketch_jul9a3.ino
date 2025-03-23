String msg1 = "How many blinks do you want : ";
int b_Time;
int red_Pin=12;
int d_Time = 250;


void setup() {
Serial.begin(9600);
pinMode(red_Pin,OUTPUT);
}

void loop() {
Serial.println(msg1);
while(Serial.available() == 0){

}
b_Time = Serial.parseInt();
for (int j = 1;j<=b_Time;j++){
  digitalWrite(red_Pin,HIGH);
  delay(d_Time);
  digitalWrite(red_Pin,LOW);
  delay(d_Time);
}
}
