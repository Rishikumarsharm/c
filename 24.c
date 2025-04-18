#include<stdio.h>
//pointer value 
int main()
{
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;

    printf("x id %d\n",x);
    printf("%d\n",*ptr); 
    printf("%d\n",*(&x));

    *ptr +=5;
    printf("%d\n",x);
    
    (*ptr)++;
    printf("%d",x);  

    return 0; 
    
}