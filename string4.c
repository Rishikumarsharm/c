#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m );

int main()
{
      char str[100]="lokeshkumarsharma";
      int n,m;
      printf("enter the number from which you want to slice\n");
      scanf("%d",&n);
      printf("enter the number from where you want to slice\n");
      scanf("%d",&m);

   slice(str,n,m);
   return 0;
}  
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0; 
for(int i=n;i<=m;i++,j++){
    newstr[j]=str[i];
}
newstr[j] = '\0';
puts(newstr);
}



