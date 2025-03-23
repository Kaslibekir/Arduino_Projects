int red_led = 4;
int green_led = 2;
int yellow_led = 7;
int d_time_long = 2000;
int d_time_short = 1000;
int buzzer_pin = 8;
bool isRed = false;
int in_sensor = A0;
int emer_led1 = 12;
int button_pin = 13;
int button_state = 0;
unsigned long prev_time = 0;
int emer_led2 = 10;
int emer_led3 = 3;
int emer_led4 = 5;
void setup() {
  Serial.begin(9600);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  pinMode(in_sensor, INPUT);
  pinMode(button_pin, INPUT);
  pinMode(emer_led1, OUTPUT);
  pinMode(emer_led2, OUTPUT);
  pinMode(emer_led3, OUTPUT);
  pinMode(emer_led4, OUTPUT);
}

void loop() {
//unsigned long myTime = millis();
  /*if(myTime - prev_time > 1000){
    prev_time = myTime;
    button_state = digitalRead(button_pin);
    if(button_state == 1){
    digitalWrite(ledler, HIGH);
    }
    else if(button_state == 0){
    digitalWrite(ledler, LOW);
    }
  }*/

  isRed = true;
  int in_sensor_value = analogRead(in_sensor);
  Serial.println(in_sensor_value);
  if((isRed == true) && (in_sensor_value<150)){
      digitalWrite(buzzer_pin, HIGH);
  }
  else{
      digitalWrite(buzzer_pin, LOW);
  }

  isRed = true;
  digitalWrite(red_led,HIGH);
  digitalWrite(yellow_led,LOW);
  digitalWrite(green_led,LOW);
  delay(d_time_long);
  isRed = false;

  if((isRed == true) && (in_sensor_value<150)){
      digitalWrite(buzzer_pin, HIGH);
  }
  else if((isRed == false) || (in_sensor_value>=150)){
      digitalWrite(buzzer_pin, LOW);
  }

  button_state = digitalRead(button_pin);
  if(button_state == 1){
    digitalWrite(emer_led1, HIGH);
    digitalWrite(emer_led2, HIGH);
    digitalWrite(emer_led3, HIGH);
    digitalWrite(emer_led4, HIGH);
    digitalWrite(buzzer_pin, HIGH);
  }
  else if(button_state == 0){
    digitalWrite(emer_led1, LOW);
    digitalWrite(emer_led2, LOW);
    digitalWrite(emer_led3, LOW);
    digitalWrite(emer_led4, LOW);
    digitalWrite(buzzer_pin, LOW);
  }

  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,HIGH);
  digitalWrite(green_led,LOW);
  delay(d_time_short);

  button_state = digitalRead(button_pin);
  if(button_state == 1){
    digitalWrite(emer_led1, HIGH);
    digitalWrite(emer_led2, HIGH);
    digitalWrite(emer_led3, HIGH);
    digitalWrite(emer_led4, HIGH);
    digitalWrite(buzzer_pin, HIGH);
  }
  else if(button_state == 0){
    digitalWrite(emer_led1, LOW);
    digitalWrite(emer_led2, LOW);
    digitalWrite(emer_led3, LOW);
    digitalWrite(emer_led4, LOW);
    digitalWrite(buzzer_pin, LOW);
  }
  
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,LOW);
  digitalWrite(green_led,HIGH);
  delay(d_time_long);

  button_state = digitalRead(button_pin);
  if(button_state == 1){
    digitalWrite(emer_led1, HIGH);
    digitalWrite(emer_led2, HIGH);
    digitalWrite(emer_led3, HIGH);
    digitalWrite(emer_led4, HIGH);
    digitalWrite(buzzer_pin, HIGH);
  }
  else if(button_state == 0){
    digitalWrite(emer_led1, LOW);
    digitalWrite(emer_led2, LOW);
    digitalWrite(emer_led3, LOW);
    digitalWrite(emer_led4, LOW);
    digitalWrite(buzzer_pin, LOW);
  }
  
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,HIGH);
  digitalWrite(green_led,LOW);
  delay(d_time_short);

  button_state = digitalRead(button_pin);
  if(button_state == 1){
    digitalWrite(emer_led1, HIGH);
    digitalWrite(emer_led2, HIGH);
    digitalWrite(emer_led3, HIGH);
    digitalWrite(emer_led4, HIGH);
    digitalWrite(buzzer_pin, HIGH);
  }
  else if(button_state == 0){
    digitalWrite(emer_led1, LOW);
    digitalWrite(emer_led2, LOW);
    digitalWrite(emer_led3, LOW);
   digitalWrite(emer_led4, LOW);
   digitalWrite(buzzer_pin, LOW);
  }

}


