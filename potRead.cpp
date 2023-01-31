void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == 1) 
  {
    digitalWrite(13,HIGH);
  } else {
    digitalWrite(13,LOW);
  }
  
  delay(10); // Delay a little bit to improve simulation performance
}
