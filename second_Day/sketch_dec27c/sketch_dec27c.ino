byte digits[10][7] = {
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0}
};

void setup(){
  for(int i = 2;i < 10;i++){
    pinMode(i,OUTPUT);
  }
  digitalWrite(9,HIGH);
}

void loop(){
  for(int i = 0;i < 10;i++){
    displayDigit(i);
    delay(1000);
  }
}

void displayDigit(int num){
  int pin = 2;
  for(int i = 0;i < 7;i++){
    digitalWrite(pin + i, digits[num][i]);
  }
}
