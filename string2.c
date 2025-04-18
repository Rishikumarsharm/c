#include<stdio.h>
#include<string.h>
void name(char arr[]);

int main()
{
   
    char arr[100]="we shall over come some day vow deep in my heart i do belive";
    char ram[100]="hhha ";
    char str[100]="LOKESH KUMAR";
    char shyam[100]="hhhb";

    printf("%d\n",strlen(arr));
    printf("%d\n",strlen(str));
    //output
    // 60
    // 12
    strcpy(str,arr);
    printf("%s\n",str);
    //output
    // we shall over come some day vow deep in my heart i do belive
    strcat(str,arr);
      printf("%s\n",str);
      //output
       // LOKESH KUMARwe shall over come some day vow deep in my heart i do belive
    strcmp(shyam,ram);
    printf("%d\n",strcmp(shyam,ram));
    //output
    // -1 (hha-hhb)=-1


   return 0;
}  
void name(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
 printf("\n");
}
