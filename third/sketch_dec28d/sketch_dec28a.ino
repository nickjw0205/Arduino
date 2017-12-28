#include <Servo.h>
Servo myservo;

int trig = 2;
int echo = 3;
int led = 9;

float duration;
float distance;


void setup()
{
  Serial.begin(9600);
  ptinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  myservo.attach(9);
}

void loop()
{
  myservo.write(100);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo,HIGH);
  distance = ((34000*duration)/1000000)/2;
  Serial.print(distance);
  Serial.println("cm");
  delay(100); // Wait for 1000 millisecond(s)
  
  if(distance < 5){
    myservo.write(10);
  }
  else{
    myservo.write(100);
  }

}
