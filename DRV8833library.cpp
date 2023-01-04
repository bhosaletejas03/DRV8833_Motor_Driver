#include "DRV8833library.h"

DRV8833 :: DRV8833(uint8_t pin1, uint8_t pin2)
{
  _pin1 = pin1;
  _pin2 = pin2;

  pinMode(_pin1, OUTPUT);
  pinMode(_pin2, OUTPUT);
  
  digitalWrite(_pin1, LOW);
  digitalWrite(_pin2, LOW);

}

void DRV8833::setSpeed(int16_t speed)
{
  // Make sure the speed is within the limit.
  if (speed > 255) {
    speed = 255;
  } 
  else if (speed < -255) {
    speed = -255;
  }
  
  // Set the speed and direction.
  
  if (speed >= 0) {
    analogWrite(_pin1, speed);
    digitalWrite(_pin2, LOW);
  } else {
    analogWrite(_pin2, -speed);
    digitalWrite(_pin1, LOW);
  }
      
      


}