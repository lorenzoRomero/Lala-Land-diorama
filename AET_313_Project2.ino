
#include <Servo.h>

Servo myservo_1;  // create Servo object to control a servo
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;
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
  myservo_2.attach(10);
  myservo_3.attach(11);
  myservo_4.attach(12);
  myservo_5.attach(13);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
 
buttonState_1 = digitalRead(buttonPin_1);

  if (buttonState_1 == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep(1);
   Serial.println("button pressed");
  } else if(buttonState_1 == LOW){
   pressedOnce = false;
  }
  else if (buttonState_2 == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep(2);
   Serial.println("button pressed");
  } else if(buttonState_2 == LOW){
   pressedOnce = false;
  }
  else if (buttonState_3 == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep(3);
   Serial.println("button pressed");
  } else if(buttonState_3 == LOW){
   pressedOnce = false;
  }
  else if (buttonState_4 == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep(4);
   Serial.println("button pressed");
  } else if(buttonState_4 == LOW){
   pressedOnce = false;
  }
  else if (buttonState_5 == HIGH && pressedOnce == false) {
    pressedOnce = true;
   sweep(5);
   Serial.println("button pressed");
  } else if(buttonState_5 == LOW){
   pressedOnce = false;
  }
 
}
void sweep(int sceneNum){

 if (sceneNum == 1) {
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
else if (sceneNum == 2){
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 3){
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 4){
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 5){
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_5.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_5.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
}
