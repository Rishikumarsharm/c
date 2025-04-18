#include<stdio.h>
int main()
{
    float h,m,e,c,p,per,obt,tol;
    printf("enter the marks of five subjects: ");
    scanf("%f%f%f%f%f",&h,&m,&e,&c,&p);
    obt=h+m+e+c+p;
    tol=500;
    per=obt/tol*100;
    if(per>90){
    printf("A");
    }
 if(per>80){
    printf("B");
 }
 else if(per>70){
    printf("C");
 }
else if(per>60){
    printf("D");
 }
 else if(per>50){
    printf("E");
 }
else{
    printf("fail");
 }
 return 0;   
}