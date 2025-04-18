#include<stdio.h>
int main()
{
    int x=22;
    int *p=&x;
    int **q=&p;

    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
    return 0;
}

/*output
6422296
22
6422292
6422296
22*/