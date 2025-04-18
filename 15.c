#include<stdio.h>
// this program to write a table of any numbers
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
    printf("%d \n",n*i);
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