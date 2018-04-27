#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>

// 0- Stop, 1- Down, 2- Up


int main() {
  wiringPiSetup();

  pinMode (21, OUTPUT) ;
  pinMode (22, OUTPUT) ;
 
  softPwmCreate (26, 0, 100); //int pin, int initialValue, int pwmRange
	  digitalWrite(21,LOW) ; 
	  digitalWrite(22,HIGH) ; 
          softPwmWrite (26, 100);
long int count = 0;
//delay(2);

while(count<20000000){
count++;
}
  
}
