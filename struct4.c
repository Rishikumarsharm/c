#include<stdio.h>
#include<string.h>
// use of nickname 
typedef struct artificalintelligencestudents{
  char name[100];
  int roll;
  float cgpa;
}ais;
int main()
    {
        ais s1;
       s1.roll=12345;
       s1.cgpa=9.6789;

       printf("roll no.%d\n",s1.roll);
       printf("cgpa  %f\n",s1.cgpa);

    }
