int temp;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  temp = analogRead(A0);
  Serial.println(temp);
  if(temp>182)
  {
    // turn on the led
    digitalWrite(13,HIGH);
  }
  else{
    // turn off the on board led
    digitalWrite(13,LOW);
  }
  delay(50);
}
