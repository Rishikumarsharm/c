#include<stdio.h>
int sum(int *a,int *b);
int mult(int *p, int *q);
int avr(int *x,int *y);
int main()
{ int a=2; int b=3; 
int x=12;int y=2;
int c;
int d; int e;
   c = sum(&a,&b);
   d = mult(&a,&b);
   e=avr(&x,&y);
 printf("avr is:%d\n",e);

 printf("sum is :%d\n",c);
 printf("multiple is :%d\n",d);
    return 0;
}
int sum(int *a,int *b) {
     int t=*a+*b;
     //printf("%d\n",t);

}
int mult(int *p,int *q) {
    int f=(*p)*(*q);
   // printf("%d\n",f);
}
int avr(int *x,int *y){

    int r=(*x+*y)/2;
}
   /*
   avr is:7
sum is :5
multiple is :6
   */
    
