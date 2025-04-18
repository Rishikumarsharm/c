#include<stdio.h>
#include<conio.h>

int main()
{

    int price[3];
    printf("enter the price1");
    scanf("%d",&price[0]);

    printf("enter the price2");
    scanf("%d",&price[1]);

    printf("enter the price3");
    scanf("%d",&price[2]);


    printf("the price1 with GST \n:%d",price[0]+18%(price[0]));
     printf("the price2 with GST \n:%d",price[1]+18%(price[1]));
      printf("the price3 with GST \n:%d",price[2]+18%(price[2]));
 

 return 0;

}