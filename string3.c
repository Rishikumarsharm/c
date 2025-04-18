#include<stdio.h>
#include<string.h>
// salting ia technique in which a company add someting new in the users password to make it more secure.
void name(char arr[]);
void salting(char password[]);
void slice(char str[],int n,int m );

int main()
{
   char password[100];
   char str[]="helloworld";
   scanf("%s",password);
   salting(password);
   slice(str,3,6);
   return 0;
}  
void salting(char password[])
{
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0; 
for(int i=n;i<=m;i++,j++){
    newstr[j]=str[i];
}
newstr[j] ="\0";
puts(newstr);
}

void name(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
 printf("\n");
}
