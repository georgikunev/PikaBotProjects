#include <CytronMotorDriver.h>

#define TIME_30_DEG 400

CytronMD motorLeft(PWM_PWM, 11, 10);
CytronMD motorRight(PWM_PWM, 9, 3);

void robotStop() {
  motorLeft.setSpeed(0);
  motorRight.setSpeed(0);
}

void robotMove(int speedLeft, int speedRight) {
  motorLeft.setSpeed(speedLeft);
  motorRight.setSpeed(speedRight);
}

void circle() {
  robotMove(100, 200);
  delay(5000);

  robotStop();
}

void rectangle() {
  for(int i=0; i<4; i++) {
    robotMove(200, 200);
    delay(2000);
  
    robotMove(-200, 200);
    delay(3 * TIME_30_DEG);
  }

  robotStop();
}

void triangle() {
  for(int i=0; i<3; i++) {
    robotMove(200, 200);
    delay(2000);
  
    robotMove(-200, 200);
    delay(4 * TIME_30_DEG); // 120°
  }

  robotStop();
}


void setup() { }

void loop() {
  circle();

  delay(1000);

  rectangle();
  
  delay(1000);

  triangle();
  
  delay(1000);
}
