#include <Stepper.h>

// C++ code
//Yosra Alharthi
const int stepsPerRevolution =120;

Stepper mystepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;

void setup()
{

Serial.begin(9600);

}

void loop()
{

  int sensorRead = analogRead (A0);
  
  int motorSpeed = map (sensorRead, 0, 1023, 0, 250);
  
  if (motorSpeed > 0){
  
    mystepper.setSpeed(motorSpeed);
    mystepper.step(stepsPerRevolution/100);
    Serial.println(sensorRead);
  
  }
  
}