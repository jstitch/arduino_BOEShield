// Robotics with the BOE Shield - BackwardTenSeconds
// Make the BOE Shield-Bot roll backward for ten seconds, then stop.

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{ 
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to P13 
  servoRight.attach(12);                     // Attach right signal to P12

  // Full speed backward
  servoLeft.writeMicroseconds(1409);         // USB: Left wheel clockwise
  /* servoLeft.writeMicroseconds(1396);       // fullcharged batteries: Left wheel clockwise */
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(10000);                               // ...for 10 seconds
  
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach(); 
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}
