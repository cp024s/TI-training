void setup()
{
  pinMode(02,INPUT_PULLUP);
  
  pinMode(27,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  
  pinMode(14,OUTPUT);

  Serial.begin(9600);
}
  
void loop()
{
  digitalWrite(27,LOW);
  digitalWrite(26,HIGH);
  digitalWrite(25,HIGH);
  
  int x=digitalRead(2);
  if(x==0)
  {
    digitalWrite(14,HIGH);
    Serial.println("button pressed");
    
  }
  else
  {
    digitalWrite(14,LOW);
    Serial.println("button released");
  }  
  delay(1000);
}
