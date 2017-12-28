void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  int a = analogRead(A0);
  if(a < 400){
    digitalWrite(11,HIGH);
    delay(2000);
    digitalWrite(11,LOW);
  }
}
