float mv_per_lsb = 3300.0F/4095.0F;
void setup() 
{
  Serial.begin(115200);
}
 
void loop() 
{
  float sensorValue = analogRead(39);
  Serial.println((float)sensorValue * mv_per_lsb);
  delay(10);       
}
