float duration, distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  digitalWrite(8,LOW);
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() {
  // apply a pulse on trigger pin
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  duration = pulseIn(9,HIGH);
  distance = duration / 58.6;
  Serial.print("Distance in Cms: ");
  Serial.println(distance);
  if(distance<30)
  {
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(100);
}
