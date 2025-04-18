#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;
    printf("enter an operator(+,-,*,/): ");
    scanf("%c",&operation);
    printf("enter an operands: ");
    scanf("%lf%lf",&n1,&n2);
    switch(operation)
{
    case'+':
    printf("%lf+%lf=",n1,n2,n1+n2);
    break;
     case'-':
    printf("%lf-%lf=",n1,n2,n1-n2);
    break;
 case'*':
    printf("%lf*%lf=",n1,n2,n1*n2);
    break;
     case'/':
    printf("%lf/%lf=",n1,n2,n1/n2);
    break;
    default:
    printf("you have entered wrong");
    break;
    printf("enter the numbers");
    scanf("%lf%lf%lf%lf%lf",n1+n2,n1-n2,n1*n2,n1/n2);
    int a=n1+n2;
    printf("%d",a);
    return 0;
}    
}