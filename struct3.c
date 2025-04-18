#include<stdio.h>
struct student
{
 char name[100];
 int roll;
 float CGPA;
};

void printinfo(struct student s1);
int main()
{
   struct student s1={"LOKESH KUMAR",27 ,9.48}; // structure intialization
   printf("%s\n",s1.name);
   printf("%d\n",s1.roll);
   printf("%f\n",s1.CGPA);


   struct student *ptr=&s1;// stucture with pointer
   printf("%d\n",(*ptr).roll);
   printf("%s\n",(*ptr).name);
   printf("%f\n",(*ptr).CGPA);

//    printf("%d\n",(*ptr)->roll); // we can use -> in place of . (dot operator)
//    printf("%s\n",(*ptr)->name);
//    printf("%f\n",(*ptr)->CGPA);//not working

 printf("%d\n",s1.roll);
 return 0;

}
void printof(struct student s1){

    printf("%s\n",s1.name);
   printf("%d\n",s1.roll);
   printf("%f\n",s1.CGPA);

   s1.roll=29;
   s1.CGPA=98.5;


}
