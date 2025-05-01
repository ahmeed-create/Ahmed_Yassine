float temp,temp1,tempC;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = analogRead(A0);
  temp1 = (temp*5.0*1000.0)/1023.0;
  tempC = (temp1-500)/10;
  Serial.println(tempC);
  delay(200);
}
