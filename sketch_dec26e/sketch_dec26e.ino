int led0_Pin = 1;
int led1_Pin = 2;
int led2_Pin = 3;
int led3_Pin = 4;
int led4_Pin = 5;

int button0_Pin = 8;
int button1_Pin = 9;
int button2_Pin = 10;
int button3_Pin = 11;
int button4_Pin = 12;



void setup()
{
    pinMode(led0_Pin, OUTPUT);
    pinMode(led1_Pin, OUTPUT);
    pinMode(led2_Pin, OUTPUT);
    pinMode(led3_Pin, OUTPUT);
    pinMode(led4_Pin, OUTPUT);
    pinMode(button0_Pin, INPUT);
    pinMode(button1_Pin, INPUT);
    pinMode(button2_Pin, INPUT);
    pinMode(button3_Pin, INPUT);
    pinMode(button4_Pin, INPUT);
}

void loop()
{
  if(digitalRead(button0_Pin) == LOW){
    digitalWrite(led0_Pin,HIGH);
  }
  else{
    digitalWrite(led0_Pin,LOW);
  }
  if(digitalRead(button1_Pin) == LOW){
    digitalWrite(led1_Pin,HIGH);
  }
  else{
    digitalWrite(led1_Pin,LOW);
  }
  if(digitalRead(button2_Pin) == LOW){
    digitalWrite(led2_Pin,HIGH);
  }
  else{
    digitalWrite(led2_Pin,LOW);
  }
  if(digitalRead(button3_Pin) == LOW){
    digitalWrite(led3_Pin,HIGH);
  }
  else{
    digitalWrite(led3_Pin,LOW);
  }
  if(digitalRead(button4_Pin) == LOW){
    digitalWrite(led4_Pin,HIGH);
  }
  else{
    digitalWrite(led4_Pin,LOW);
  }
}

