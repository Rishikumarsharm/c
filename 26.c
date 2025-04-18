#include<stdio.h>
void squre (int n);
void _squre(int *p);

int main()
{ int number=4;
  squre(number);
  printf("number %d\n",number);

   _squre(&number);
  printf("number%d\n",number);


    return 0;
}// call by value
void squre(int n) {
 n= n*n;
 printf("%d\n",n);
}// call by reference
void _squre(int *p) {
    *p= (*p) * (*p);
    printf("%d\n",*p);
}


/*
output
16
number 4
16
number16
*/