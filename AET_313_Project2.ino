
#include <Servo.h>

Servo myservo_1;  // create Servo object to control a servo
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;
// twelve Servo objects can be created on most boards

int pos1 = 0;    // variable to store the servo position
int pos2 = 0; 
int pos3 = 0; 
int pos4 = 0; 
int pos5 = 0; 

const int buttonPin_1 = 2;    // individual button pins for each scene
const int buttonPin_2 = 3;
const int buttonPin_3 = 4;
const int buttonPin_4 = 5;
const int buttonPin_5 = 6;

int buttonState_1 = 0; 
int buttonState_2 = 0; 
int buttonState_3 = 0; 
int buttonState_4 = 0; 
int buttonState_5 = 0; 

bool pressedOnce1 = false;
bool pressedOnce2 = false;
bool pressedOnce3 = false;
bool pressedOnce4 = false;
bool pressedOnce5 = false;

void setup() {
  myservo_1.attach(9);  // attaches the servo on pin 9 to the Servo object
  myservo_2.attach(10);
  myservo_3.attach(11);
  myservo_4.attach(12);
  myservo_5.attach(13);
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);
  pinMode(buttonPin_4, INPUT);
  pinMode(buttonPin_5, INPUT);

  Serial.begin(9600);
}

void loop() {
 
buttonState_1 = digitalRead(buttonPin_1);
buttonState_2 = digitalRead(buttonPin_2);
buttonState_3 = digitalRead(buttonPin_3);
buttonState_4 = digitalRead(buttonPin_4);
buttonState_5 = digitalRead(buttonPin_5);
if(buttonState_4 != LOW){
Serial.println("button state 4 = " + buttonState_4);
}
if(buttonState_1 != LOW){
Serial.println("button state 1 = " + buttonState_1);
}




  if (buttonState_1 == HIGH && pressedOnce1 == false) {
    pressedOnce1 = true;
   sweep(1);
   Serial.println("button pressed1");
  } else if(buttonState_1 == LOW){
   pressedOnce1 = false;
  }
   if (buttonState_2 == HIGH && pressedOnce2 == false) {
    pressedOnce2 = true;
   sweep2();
   Serial.println("button pressed2");
  } else if(buttonState_2 == LOW){
   pressedOnce2 = false;
  }
  if (buttonState_3 == HIGH && pressedOnce3 == false) {
    pressedOnce3 = true;
   sweep(3);
   Serial.println("button pressed3");
  } else if(buttonState_3 == LOW){
   pressedOnce3 = false;
  }
  if (buttonState_4 == HIGH && pressedOnce4 == false) {
    pressedOnce4 = true;
   sweep(4);
   Serial.println("button pressed4");
  } else if(buttonState_4 == LOW){
   pressedOnce4 = false;
  }
  if (buttonState_5 == HIGH && pressedOnce5 == false) {
    pressedOnce5 = true;
   sweep(5);
   Serial.println("button pressed5");
  } else if(buttonState_5 == LOW){
   pressedOnce5 = false;
  }
 
}
void sweep(int sceneNum){

 if (sceneNum == 1) {
   for (pos1 = 0; pos1 <= 180; pos1 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
 }
else if (sceneNum == 2){
  for (pos2 = 0; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 3){
  for (pos3 = 0; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_3.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos3 = 180; pos3 >= 0; pos3 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_3.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 4){
  for (pos4 = 0; pos4 <= 180; pos4 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_4.write(pos4);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos4 = 180; pos4 >= 0; pos4 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_4.write(pos4);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
else if (sceneNum == 5){
  for (pos5 = 0; pos5 <= 180; pos5 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_5.write(pos5);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos5 = 180; pos5 >= 0; pos5 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_5.write(pos5);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
}

void sweep2(){

for (pos2 = 0; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    myservo_2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  
}
