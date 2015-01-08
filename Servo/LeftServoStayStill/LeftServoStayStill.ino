#include <Servo.h>

Servo servoLeft;

void setup()
{
  servoLeft.attach(12);
  servoLeft.writeMicroseconds(1500);
}

void loop()
{
}
