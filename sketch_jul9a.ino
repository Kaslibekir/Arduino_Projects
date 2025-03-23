int cikispin = 8;
int kisadelay = 150;
int uzundelay = 650;
int bitis = 1500;



void setup() {
pinMode(cikispin , OUTPUT);

}

void loop() {
digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(kisadelay);

digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(kisadelay);

digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(uzundelay);

digitalWrite(cikispin,HIGH);
delay(uzundelay);
digitalWrite(cikispin,LOW);
delay(uzundelay);

digitalWrite(cikispin,HIGH);
delay(uzundelay);
digitalWrite(cikispin,LOW);
delay(uzundelay);

digitalWrite(cikispin,HIGH);
delay(uzundelay);
digitalWrite(cikispin,LOW);
delay(uzundelay);

digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(kisadelay);

digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(kisadelay);

digitalWrite(cikispin,HIGH);
delay(kisadelay);
digitalWrite(cikispin,LOW);
delay(kisadelay);

delay(bitis);

}
