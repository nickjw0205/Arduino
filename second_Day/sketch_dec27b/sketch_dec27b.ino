int trig = 2;
int echo = 3;
int led = 9;

float duration;
float distance;


void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(trig, LOW);
  duration = pulseIn(echo,HIGH);
  distance = ((34000*duration)/10000000)/2;
  Serial.print(distance);
  Serial.println("cm");
  delay(100); // Wait for 1000 millisecond(s)
  
  if(distance < 5){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}
