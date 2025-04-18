#include<stdio.h>
// pointer address  
//pointer value
int main()
{
  int age = 22;
  int *ptr=&age;
  printf("%d\n",*(&age)); 
  printf("%p",&age);  
  return 0;
}