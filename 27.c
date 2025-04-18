#include<stdio.h>
//void swap(int a,int b);
void _swap(int *p,int *q);
int main() 
{   int x=3; int y=4;
     _swap(&x,&y);
     printf("x=%d & y=%d\n",x,y);
    return 0;
}// call by value (it dont't work)
/*void swap(int a,int b) {
    int t=a;
    a=b;
    b=t;
    printf("a=%d\n & b=%d\n",a,b);
    }*/
// call by reference
void _swap(int *p,int *q) {
    int t=*p;
    *p=*q;
    *q=t;
    printf("p=%d & q=%d\n",*p,*q);
}
/*
output:
p=4 & q=3
x=4 & y=3
*/






/*
output:

*/