void setup()
{
  pinMode(34,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int x = analogRead(34);
  Serial.println(x);
  delay (1000);
}
