#include<stdio.h>
// sum of n numbers using recursion function
// factorial of numbers
int sum(int n);
int fact(int n);
int main() 
{
printf("sum of n numbers:%d\n",sum(6766));
printf("factorial of a number:%d",fact(5));

    return 0;
}
int sum(int n){
   if(n==1){
   return 1;
}
int sumnum1=sum(n-1);
int sumnum=sumnum1+n;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int fact1=fact(n-1);
    int fact=fact1*n;
    return fact;
}