#include <stdio.h> //should be the only needed library as this code will just use standard I/O pins to control motor direction
#include <wiringPi.h>
void pset(){
      pinMode (0, OUTPUT) ; 
      pinMode (1, OUTPUT) ; 

}


int main(){
  if (wiringPiSetup () == -1)
    return 1 ;
    
    pset();   //sets the output GPIO pins needed to send control the motor
    
    //set the IO pin going to Pin 1 of the L293DNE in order to activate the 
  
    //IO pin going to pin 2 set high in order to move the motor in one direction
    
    //wait for 5 seconds 
    
    //stop



}
