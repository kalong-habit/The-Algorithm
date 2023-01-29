#include <Stepper.h>

const int stepsPerRevolution = xxx;  // change xxx to match the number of steps per revolution for your motor following steps degree from datasheet
const int motorPin1 = a; //fill a port with port that you use
const int motorPin2 = b; //fill b port with port that you use
const int motorPin3 = c; //fill c port with port that you use
const int motorPin4 = d; //fill d port with port that you use

Stepper stepper(stepsPerRevolution, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  stepper.setSpeed(xx);  // set xx as motor speed
  Serial.begin(wwwww); //fill wwww with baud rate that you choose
}

void loop() {
  // move the motor one revolution clockwise
  Serial.println("Clockwise");
  stepper.step(stepsPerRevolution);
  delay(yyyy); //fill yyyy with delay that you need

  // move the motor one revolution counter-clockwise
  Serial.println("Counter-Clockwise");
  stepper.step(-stepsPerRevolution);
  delay(aaaa); //fill aaaa with delay that you need
}
