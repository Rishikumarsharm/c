#include<stdio.h>
// vikash ka cutiyapa
int main()
{    
    int a[5]={1,2,3,4,5};
    int b[5];
    //printf("enter a array");
    //scanf("%d",&a);

    for(int i=0;i<5;i++){

        for(int j=0;j<5-i-1;j++){
int t = a[j];
    a[j]=a[j+1];
    a[j+1]=t;

        }
        
    }
    for(int i=0;i<5;i++){
        for(int j=0;i<5;j++){
       a[i] = b[j];
        }
    }
    for(int i = 0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
