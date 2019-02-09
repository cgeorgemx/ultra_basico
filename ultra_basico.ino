#include <Ultrasonic.h>

Ultrasonic zzpp(8, 12); //Triger, Echo
int distancia;

void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(3,OUTPUT); // Definición del Buzzer
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  distancia=zzpp.distanceRead();
  Serial.println(distancia);
   delay(20);

if (distancia <30)
 { 
  digitalWrite(4,HIGH);
  delay (1000);
  tone(3,2000); 
delay(100);
 }
 else
 { 
  digitalWrite(2,LOW);
  delay (1000);
  noTone(3);
 }
}



