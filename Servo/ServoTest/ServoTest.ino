#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup()
{
  servoRight.attach(12);
  servoLeft.attach(13);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(3000);

  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(1000);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(3000);

  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void loop()
{
}
