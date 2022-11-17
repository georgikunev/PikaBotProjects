#include <CytronMotorDriver.h>

CytronMD motorLeft(PWM_PWM, 11, 10);
CytronMD motorRight(PWM_PWM, 9, 3);

void setup() { }

void loop() {
    motorLeft.setSpeed(200);
    motorRight.setSpeed(200);
}
