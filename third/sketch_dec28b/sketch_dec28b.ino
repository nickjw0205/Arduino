#include <Stepper.h>

const int stepsPerRevolution = 64; 
Stepper myStepper(stepsPerRevolution, 11,9,10,8); 
void setup() {
  myStepper.setSpeed(300);
}
void loop() {
  
  // 시계 반대 방향으로 한바퀴 회전
  for(int i=0; i<32; i++) {  // 64 * 32 = 2048 한바퀴
    myStepper.step(stepsPerRevolution);
  }
  delay(500);

  // 시계 방향으로 한바퀴 회전
  for(int i=0; i<32; i++) {
    myStepper.step(-stepsPerRevolution);
  }
  delay(500);
}



