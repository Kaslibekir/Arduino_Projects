String msg1 = "Which color you want? : ";
String msg2 = "How many blinks you want? :";
String the_color_answer;
int the_blink_answer;
int red_Pin = 12;
int blue_Pin = 8;
int green_Pin = 4;
int d_time = 300;


void setup() {
Serial.begin(9600);
pinMode(red_Pin,OUTPUT);
pinMode(blue_Pin,OUTPUT);
pinMode(green_Pin,OUTPUT);
}

void loop() {
Serial.println(msg1);
while(Serial.available() == 0){

}
the_color_answer = Serial.readString();
Serial.println(msg2);
while(Serial.available() == 0){

}
the_blink_answer = Serial.parseInt();
if(the_color_answer == "red")
{
  for(int j = 0;j<the_blink_answer;j++){
  digitalWrite(red_Pin,HIGH);
  digitalWrite(blue_Pin,LOW);
  digitalWrite(green_Pin,LOW);
  delay(d_time);
  digitalWrite(red_Pin,LOW);
  digitalWrite(blue_Pin,LOW);
  digitalWrite(green_Pin,LOW);
  delay(d_time);


  }
}
if (the_color_answer == "blue")
{
  for(int j = 0;j<the_blink_answer;j++){
  digitalWrite(red_Pin,LOW);
  digitalWrite(blue_Pin,HIGH);
  digitalWrite(green_Pin,LOW);
  delay(d_time);
  digitalWrite(red_Pin,LOW);
  digitalWrite(blue_Pin,LOW);
  digitalWrite(green_Pin,LOW);
  delay(d_time);
  }
}
if (the_color_answer == "green")
{
  for(int j = 0;j<the_blink_answer;j++){
  digitalWrite(red_Pin,LOW);
  digitalWrite(blue_Pin,LOW);
  digitalWrite(green_Pin,HIGH);
  delay(d_time);
  digitalWrite(green_Pin,LOW);
  delay(d_time);
  }
}
}
