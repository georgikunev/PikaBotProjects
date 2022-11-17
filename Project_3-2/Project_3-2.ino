#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_PWM, 11, 10);
CytronMD motorRight(PWM_PWM, 9, 3);

#define BUTTON 2
#define IR_LEFT A0
#define IR_RIGHT A1

void robotStop() {
  motorLeft.setSpeed(0);
  motorRight.setSpeed(0);
}
void robotMove(int speedLeft, int speedRight) {
  motorLeft.setSpeed(speedLeft);
  motorRight.setSpeed(speedRight);
}

void setup() {
  pinMode(IR_LEFT, INPUT);
  pinMode(IR_RIGHT, INPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON) == LOW){
    while(true){
      if (digitalRead (IR_LEFT) == LOW && digitalRead (IR_RIGHT) == LOW){
      robotMove(150,180);
      }else if (digitalRead(IR_LEFT) == HIGH){
        robotMove(-200, 200);
        }else if (digitalRead(IR_RIGHT) == HIGH){
          robotMove(200, -200);
      }
    }
  }
}
