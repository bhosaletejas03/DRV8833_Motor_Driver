/***********************************************

THIS EXAMPLE IS FOR CONTROL OF SINGLE MOTOR IN BOTH DIRECTIONS.
SPEED CONTROL IS NOT INCLUDED HERE AS [NON-PWM] PINS ARE USED.
Author:Tejas Bhosale
***************************************************************/


#include <DRV8833library.h> //INCLUDE THE DRV8833 MOTOR CONTROL LIBRARY

//DEFINE PINS CONNECTED TO INPUT PINS OF DRV8833.
//THEY MAYBE PWM OR NON PWM  
DRV8833 motor1(3,4); //IN1 = 3 , IN2 = 4

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(0);//SETSPEED FUNCTION USED TO STOP THE MOTORS

}

void loop() {
  // put your main code here, to run repeatedly:
  
  motor1.setSpeed(255); // CLOCKWISE AT FULL SPEED AS BOTH PINS ARE NON PWM
  delay(3000);
  motor1.setSpeed(0);//MOTOR STOPS
  delay(1000);
  motor1.setSpeed(-255);// ANTI-CLOCKWISE AT FULL SPEED AS BOTH PINS ARE NON PWM
  delay(3000);
  motor1.setSpeed(0);//MOTOR STOPS
  delay(1000);

}
