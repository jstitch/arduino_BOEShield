#include "musical_notes.h"

int speakerPin = 4; // speaker connected to digital pin 9 

void r2D2(){
          tone(speakerPin, note_A7,100); //A 
          delay(112);
          tone(speakerPin, note_G7,100); //G 
          delay(112);
          tone(speakerPin, note_E7,100); //E 
          delay(112);
          tone(speakerPin, note_C7,100); //C
          delay(112);
          tone(speakerPin, note_D7,100); //D 
          delay(112);
          tone(speakerPin, note_B7,100); //B 
          delay(112);
          tone(speakerPin, note_F7,100); //F 
          delay(112);
          tone(speakerPin, note_C8,100); //C 
          delay(112);
          tone(speakerPin, note_A7,100); //A 
          delay(112);
          tone(speakerPin, note_G7,100); //G 
          delay(112);
          tone(speakerPin, note_E7,100); //E 
          delay(112);
          tone(speakerPin, note_C7,100); //C
          delay(112);
          tone(speakerPin, note_D7,100); //D 
          delay(112);
          tone(speakerPin, note_B7,100); //B 
          delay(112);
          tone(speakerPin, note_F7,100); //F 
          delay(112);
          tone(speakerPin, note_C8,100); //C 
          delay(112);
}

void setup()
{
  Serial.begin(9600);
  Serial.println("Beep!");

  r2D2();
  delay(500);
  /* tone(speakerPin, 3000, 1000); */
  /* delay(1000);c */
}

void loop()
{
  Serial.println("Waiting for reset...");
  delay(1000);
}
