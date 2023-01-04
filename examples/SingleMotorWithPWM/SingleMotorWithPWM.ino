/***********************************************

THIS EXAMPLE IS FOR CONTROL OF SINGLE MOTOR IN BOTH DIRECTIONS.
SPEED CONTROL IS INCLUDED HERE AS [PWM] PINS ARE USED.
Author:Tejas Bhosale
***************************************************************/


#include <DRV8833library.h> //INCLUDE THE DRV8833 MOTOR CONTROL LIBRARY

//DEFINE PINS CONNECTED TO INPUT PINS OF DRV8833.
//THEY MUST BE PWM PINS
DRV8833 motor1(3,5); //IN1 = 3(PWM) , IN2 = 5(PWM)

void setup() {
  // put your setup code here, to run once:
  
  motor1.setSpeed(0);//SETSPEED FUNCTION USED TO STOP THE MOTORS

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=0;i=<255;i++)//SLOWLY INCREASE SPEED TO MAXIMUM
  {
    motor1.setSpeed(i);
    delay(15);
  }
  for(int i=255;i>=0;i--)//SLOWLY DECREASE THE SPEED TO ZERO
  {
    motor1.setSpeed(i);
    delay(15);
  }

}
