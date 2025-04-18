#include<stdio.h>

void name(char arr[]);

int main()
{
   
    char arr[100];
    fgets(arr,100,stdin);
    puts(arr);

   return 0;
}  
void name(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
 printf("\n");
}
