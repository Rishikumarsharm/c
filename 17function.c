#include<stdio.h>
// declaration of function
void printfhello();
void printfname();

int main()
{
    printfhello(); // function call
    printfname();
    return 0;
}
void printfhello() {
  printf("hello world \n"); // function defination
}
  void printfname() {
    printf("LOKESH KUMAR \n");
  }