#include<Servo.h>
Servo servo;

void setup()
{
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  servo.attach(3); // servo motor on pin 3
}

void loop()
{
  if(digitalRead(2)==HIGH)
  {
    Serial.println("Motion detected");
    digitalWrite(4,HIGH);
    servo.write(90);
    delay(300);
  }
  else
  {
    Serial.println("No motion detected");
    digitalWrite(4,LOW);
    servo.write(5);
    delay(300);
  }
}
