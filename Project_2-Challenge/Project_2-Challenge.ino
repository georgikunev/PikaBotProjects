#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_PWM, 11, 10);
CytronMD motorRight(PWM_PWM, 9, 3);


long duration;
long distance;

#define BUTTON 2
#define TRIGPIN 5
#define ECHOPIN 4

void robotStop() {
  motorLeft.setSpeed(0);
  motorRight.setSpeed(0);
}
void robotMove(int speedLeft, int speedRight) {
  motorLeft.setSpeed(speedLeft);
  motorRight.setSpeed(speedRight);
}

void setup(){

  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  pinMode(BUTTON, INPUT_PULLUP);
 
  }
  
void loop() {
  if(digitalRead(BUTTON) == LOW){
    while(true){
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);

  duration = pulseIn(ECHOPIN, HIGH);
  distance = duration * 0.017;

  if(distance > 20){
    robotMove(200, 180);
    }
    else if(distance < 20){
      robotStop();
     
      robotMove(0,200);
      }
    }
  }
}
