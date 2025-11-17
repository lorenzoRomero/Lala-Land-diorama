
#include <Servo.h>

Servo myservo_1;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

const int buttonPin_1 = 2;    // individual button pins for each scene
const int buttonPin_2 = 3;
const int buttonPin_3 = 4;
const int buttonPin_4 = 5;
const int buttonPin_5 = 6;

int buttonState = 0; 
bool pressedOnce = false;

void setup() {
  myservo_1.attach(9);  // attaches the servo on pin 9 to the Servo object
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
 
buttonState = digitalRead(buttonPin_1);
  if (buttonState == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep();
   Serial.println("button pressed");
  } else if(buttonState == LOW){
   pressedOnce = false;
  }
 
}
void sweep(){

 for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
