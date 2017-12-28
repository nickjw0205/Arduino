int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup()
{
 
}

void loop()
{
 for(int i = 0;i < 8;i++){
    tone(8,melody[i],250);
    delay(400);
    noTone(8);
  }
}
