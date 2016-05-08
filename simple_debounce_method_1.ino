/*
 * Copyright 2016 (C) layadcircuits.com
 * Project: 
 * A simple approach to switch debouncing via software using short delays and multiple input checks
 * For Questions/Comments: chris@layadcircuits.com
 * Revision History:
 * 1.0 - initial commit
 * Notes: 
 * We assume a PBNO switch connected at pin 2. When the button is pressed and debounced correctly, 
 * we display the number of times the button was pressed
 */
const byte BUTTON = 2;
const byte LED = 13;
boolean pressed;
unsigned int count;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop() {
  if(digitalRead(BUTTON)==LOW){
    delay(1);
    if(digitalRead(BUTTON)==LOW){
      delay(1);
      if(digitalRead(BUTTON)==LOW){
        delay(1);
        if(digitalRead(BUTTON)==LOW){
          delay(1);
          if(digitalRead(BUTTON)==LOW){
            delay(1);
            if(digitalRead(BUTTON)==LOW){
              count++;
              Serial.print("Number of times button was pressed = ");
              Serial.println(count);
            }
          }
        } 
      }
    }
  }
  
}
