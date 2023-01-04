#ifndef DRV8833_H
#define DRV8833_H

#include <Arduino.h>
#include <stdint.h>


class DRV8833
{
  public:
    DRV8833(uint8_t pin1, uint8_t pin2);
    void setSpeed(int16_t speed);
    
  protected:

  	uint8_t _pin1;
    uint8_t _pin2;
};

#endif