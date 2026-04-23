/*
Arduino Bootcamp

- Simple LED Switch

This project demonstrates how an LED can be controlled by the Arduino

created 10/29/2016
modified 10/29/2016
by: Lee Assam
*/

//Set the LED Pin constant globally
//The LED is connected to Pin 8 of the Arduino
#define LEDPin 8
//Connected to grounded resistor of switch
#define ButtonPin 7

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED Pin as an output.
  pinMode(LEDPin, OUTPUT);
  //set the Button Pin as an input
  pinMode(ButtonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(ButtonPin) == LOW) {
    digitalWrite(LEDPin, HIGH);   // turn the LED on
  } else {
    digitalWrite(LEDPin, LOW);    // turn the LED off
  }
}
