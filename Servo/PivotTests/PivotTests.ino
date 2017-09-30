// PivotTests

#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{ 
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to P13 
  servoRight.attach(12);                     // Attach right signal to P12

  /* // Pivot forward-left */
  /* servoLeft.writeMicroseconds(1500);         // Still */
  /* servoRight.writeMicroseconds(1300);        // Right wheel clockwise */
  /* delay(2000);                               // ...for 2 seconds */

  /* // Pivot forward-right */
  /* servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise */
  /* servoRight.writeMicroseconds(1500);        // Still */
  /* delay(2000);                                // ...for 2 seconds */

  /* // Pivot backward-left */
  /* servoLeft.writeMicroseconds(1500);         // Still */
  /* servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise */
  /* delay(2000);                                // ...for 2 seconds */

  /* // Pivot backward-right */
  /* servoLeft.writeMicroseconds(1300);         // Left wheel clockwise */
  /* servoRight.writeMicroseconds(1500);        // Still */
  /* delay(2000);                               // ...for 2 seconds */


  // 90 degrees turns
  // Pivot forward-left
  servoLeft.writeMicroseconds(1500);         // Still
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(1370);                               // ...turn 90 degrees!

  // Pivot backward-left
  servoLeft.writeMicroseconds(1500);         // Still
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(1700);                               // ...turn 90 degrees! calculated: 1275

  // Pivot forward-right
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1500);        // Still
  delay(1350);                               // ...turn 90 degrees! calculated: 1272

  // Pivot backward-right
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1500);        // Still
  delay(1375);                               // ...turn 90 degrees! calculated: 1268

  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach(); 

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}  

void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
} 
