void setup()
{
  pinMode(12,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(12)==LOW)
  {
    Serial.println("No moving object is detected");
    delay(1000);
  }
  
  else
  {
    Serial.println("Motion detected");
    delay(1000);
  }
}
