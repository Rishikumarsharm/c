#include<stdio.h>
#include<string.h>

int vowel(char str[100]);

int main()
{
   char str[100];
   printf("enter a string\n");
   scanf("%s",str);
   printf("vowels are:%d",vowel(str));

}
int vowel(char str[100])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if( str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    { 
        count++;
        }
    }
    return count;
}
//output
//vowels are:4
/*
enter a string
lokesh
vowels are:2
*/