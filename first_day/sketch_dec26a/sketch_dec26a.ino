void setup()
{
  pinMode(11, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop()
{
  bool button = digitalRead(7);
  
  if(button == true){
    digitalWrite(11,LOW);
  }
}
  
