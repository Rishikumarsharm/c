#include<stdio.h>

void name(char arr[]);

int main()
{
    char a[]="LOKESH";
    char b[]="SHARMA"; 

    name(a);
    name(b);
   

   return 0;
}  
void name(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
 printf("\n");

}