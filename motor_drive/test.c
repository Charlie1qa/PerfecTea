#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>


int main() {
  int pwm_in;
  wiringPiSetup();
  softPwmCreate (0, 0, 100); //int pin, int initialValue, int pwmRange
  while(1){
    printf("Please input an integer value: ");
    scanf("%d", &pwm_in);
    softPwmWrite (0, pwm_in);
  }
}
