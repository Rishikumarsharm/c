#define pi 3.14 // it is constant number
#include<stdio.h>
#include<math.h>
float main()
{
    int r;
    float a;
    printf("enter a radius: ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("%f",a);
    return 0;
}