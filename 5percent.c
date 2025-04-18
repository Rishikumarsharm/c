#include<stdio.h>
#include<math.h>
int main()
{
    int obtainedmarks,TOTALMARKS=500;
    float I,E,C,ME,M;
    printf("enter the marks of all subjects: ");
    scanf("%f%f%f%f%f",&I,&E,&C,&ME,&M);
obtainedmarks=(I+E+C+ME+M)/TOTALMARKS*100;
printf("percentage:  %d",obtainedmarks);
}