#include<stdio.h>
#include<math.h>
// mathematical calculation using function calling
int squrearea(int side);
int perimeter(int side);
float areaofcircle(float rad);

int main()
{
   int side=200;
   float rad=40;

 printf("%d\n",squrearea(side));
 printf("%d\n",perimeter(side));
 printf("%f",areaofcircle(rad));
    return 0;
}
int squrearea(int side) {
    return side*side;
}
int perimeter(int side) {
    return 4*side;
}
float areaofcircle(float rad) {
    return 3.14*rad*rad;
}