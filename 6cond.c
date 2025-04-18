#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter any three numbers: ");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c){
 printf("the highest number a: %d",a);}
else if(b>c&&b>a){
 printf("the highest number b : %d",b);}
else{
 printf("the highest number c: %d",c);}
return 0;
}



