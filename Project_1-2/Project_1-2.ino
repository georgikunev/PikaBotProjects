#include <CytronMotorDriver.h>

CytronMD motorLeft(PWM_PWM, 11, 10);
CytronMD motorRight(PWM_PWM, 9, 3);

void setup() { }

void loop() {
    motorLeft.setSpeed(200);
    motorRight.setSpeed(200);
    delay(1000);

    motorLeft.setSpeed(0);
    motorRight.setSpeed(0);
    delay(500);
    
    motorLeft.setSpeed(-200);
    motorRight.setSpeed(-200);
    delay(2000);

    motorLeft.setSpeed(0);
    motorRight.setSpeed(0);
    delay(500);
}
