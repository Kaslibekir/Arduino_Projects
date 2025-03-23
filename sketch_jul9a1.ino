int siyah = 4;
int kirmizi = 8;
int kahverengi = 12;
int sari = 13;
int dur = 3000;



void setup() {
pinMode(siyah,OUTPUT);
pinMode(kirmizi,OUTPUT);
pinMode(kahverengi,OUTPUT);
pinMode(sari,OUTPUT);
}

void loop() {

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,HIGH);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,HIGH);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(siyah,LOW);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,HIGH);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,HIGH);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,HIGH);
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(siyah,HIGH);

delay(dur);

digitalWrite(kahverengi,LOW);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(siyah,LOW);

delay(6000);
}
