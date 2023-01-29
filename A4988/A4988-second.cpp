#include <Stepper.h>

//define the number of steps for the stepper motor
#define STEPS 200 

//define the pins for the step and direction inputs on the A4988 driver
#define STEP_PIN 5
#define DIR_PIN 4

//create a new stepper object
Stepper stepper(STEPS, DIR_PIN, STEP_PIN); 

void setup() {
  //set the speed of the stepper motor
  stepper.setSpeed(1000); //60 RPM
}

void loop() {
  //rotate the stepper motor clockwise
  stepper.step(STEPS);
  return 0;
}
