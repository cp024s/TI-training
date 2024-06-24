#include<WiFi.h>
const char*ssid="Redmi";
const char*password="shyam^103";

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  
}
void loop()
{
  Serial.println(WiFi.localIP());
  delay(10000);
}
