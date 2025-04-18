#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,j,t;
    printf("enter used in a\n");
    for(i=0;i<5;i++)//here the loop of array start from 0 to 5 
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])// if the  previous value is greater than next then swap   
            {
                t=a[j];
                a[j]=a[j+1];
               a[j+1]=t;
            }
        }
    }
for(i=0;i<5;i++)
{
    printf("%d ",a[i]);
}
getch();
}

