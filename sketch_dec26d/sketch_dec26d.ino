int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

int i = 0;

void setup()
{
  pinMode(11, OUTPUT);
  while(true){
  //for(int i = 0;i < 8;i++){
    digitalWrite(11,HIGH);
    tone(8,melody[i],250);
    delay(200);
    noTone(8);
    digitalWrite(11,LOW);
    delay(200);
    i++;
    if(i == 8){
      i = 0;
    }
  }
  
}

void loop()
{

}
