void setup()
{
  
  Serial.begin(9600);
}

void loop() 
{
  for (int i = 0; i < 360; i++) 
  {
    float rad = i * (PI / 180.0);
    float sinValue = sin(rad);
    float cosValue = cos(rad) + 2;  
    Serial.print(sinValue);
    Serial.print(",");
    Serial.println(cosValue);
    delay(10);
  }
}
