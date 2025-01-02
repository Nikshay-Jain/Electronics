#define up_down 33
#define left_right 32
#define sw 34

void setup()
{
  pinMode(up_down, INPUT);
  pinMode(left_right, INPUT);
  pinMode(sw, INPUT);
  Serial.begin(115200);
}
void loop()
{
  Serial.print(analogRead(up_down));
  Serial.print(",");
  Serial.print(analogRead(left_right));
  Serial.print(",");
  Serial.println(digitalRead(sw));
}
