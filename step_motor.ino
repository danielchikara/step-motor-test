#include <Stepper.h>
int step = 2048;
int speed = 13; 
Stepper myStepper(step, 8,10,9,11);


void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(speed);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(step);
}
