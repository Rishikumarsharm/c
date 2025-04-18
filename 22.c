#include<stdio.h>
// the palindrome of the number
int main()
{
    int n, rev=0,r,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
     r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
   if(rev==temp)
 {
    printf("it is a palindrome");
 }
  else 
  {
  printf("it is not palindrome");
  
  }
   return 0;


}