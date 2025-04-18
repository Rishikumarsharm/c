#include<stdio.h>
//convertion of celcius to farenheit
//conertion from farenheit to celcius
float converttemp(float cel);

int main()
{
    float far=converttemp(0);
printf("the temperature:%f",far);

    return 0;
}
float converttemp(float cel)

  { float far=(cel+9.0/5.0)*32;
    return far;
  }