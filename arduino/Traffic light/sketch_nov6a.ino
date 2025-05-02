


void setup()
{
  pinMode(8, OUTPUT);// RED 1
  pinMode(9, OUTPUT);// ORANGE 1
  pinMode(10, OUTPUT);// GREEN 1
  pinMode(11, OUTPUT);// RED 2
  pinMode(12, OUTPUT);// ORANGE 2
  pinMode(13, OUTPUT);// GREEN 2
}

void loop()
{
  //state one 
  digitalWrite(13, 1);
  digitalWrite(9, 0);
  digitalWrite(12, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(8, 1);
  delay(1000); 
  // feu vert fel thenya
  digitalWrite(13, 0);
  digitalWrite(9, 0);
  digitalWrite(12, 1);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(8, 1);
  delay(500); 
  // feu orange 
  digitalWrite(13, 0);
  digitalWrite(9, 0);
  digitalWrite(12, 0);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(8, 0);
  delay(1000);

  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(8, 0);
  digitalWrite(13, 0);
  digitalWrite(9, 1);
  digitalWrite(12,0);
  delay(500); 
  
}
