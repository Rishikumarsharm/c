#include<stdio.h>
// table by while
int main()
{
    int i,n,b;
    printf("enter a number:");
    scanf("%d",&n);
i=1;
    while (i<=10)
    {
        b=n*i;
        i++;
         printf("%d*%d = %d\n",n,i-1,b);
    }
   
    return 0;
    
}
// output
// 3*1 = 3
// 3*2 = 6
// 3*3 = 9
// 3*4 = 12
// 3*5 = 15
// 3*6 = 18
// 3*7 = 21
// 3*8 = 24
// 3*9 = 27
// 3*10 = 30