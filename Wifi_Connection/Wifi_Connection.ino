#include <WiFi.h>
#include "time.h"
void setup()
{
  Serial.begin(115200);
  Serial.print("WiFi-connecting");
  
  WiFi.begin("in 1","Niksh@123");
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(1000);
    Serial.print(".");
  }
}

void loop()
{
  
}
