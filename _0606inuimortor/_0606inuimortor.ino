/*
  Arduino Starter Kit example
 Project 5  - Servo Mood Indicator

 This sketch is written to accompany Project 5 in the
 Arduino Starter Kit

 Parts required:
 servo motor
 10 kilohm potentiometer
 2 100 uF electrolytic capacitors

 Created 13 September 2012
 by Scott Fitzgerald

 http://www.arduino.cc/starterKit

 This example code is part of the public domain
 */

// include the servo library
#include <Servo.h>

Servo myServo;  // create a servo object


int potVal;  // variable to read the value from the analog pin
int angle=15;   // variable to hold the angle for the servo motor
int dir=0;
void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); // open a serial connection to your computer
}

void loop(){

  // print out the angle for the servo motor
  Serial.print(", angle: ");
  Serial.println(angle);

  // set the servo position
  myServo.write(angle);
if(angle>=100){
  dir++;
}
if(angle<=0){
  dir--;
}

if(dir==0){
  angle+=15;
}
if(dir==1){
  angle-=15;
}
  // wait for the servo to get there
  delay(1000);
}


