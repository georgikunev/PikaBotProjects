#include <CytronMotorDriver.h>

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

void setup() { }

void loop() {
  robotMove(-200, 200); //turn left
  delay(1000);
  robotStop();
  delay(500);
  robotMove(200, -200); //turn right
  delay(1000);
  robotStop();
  delay(500);
}
