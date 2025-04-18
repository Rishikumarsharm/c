#include<stdio.h>
#include<string.h>

struct student{
  char name[100];
  int rollno;
  float CGPA;

};
int main()
{
    struct student s1;
    s1.rollno=2360027;
    s1.CGPA=9.48;
    strcpy(s1.name,"lokesh kumar");

    printf("name of student %s\n",s1.name);
    printf("rollno. of student %d\n",s1.rollno);
    printf("CGPA of student %f\n",s1.CGPA);


     printf("\n");
      printf("\n");

     struct student s2;
    s2.rollno=2370006;
    s2.CGPA=  7.48;
    strcpy(s2.name,"anil nigotiya");


     struct student s3;
    s3.rollno=2350055;
    s3.CGPA=7.38;
    strcpy(s3.name,"vikash pal");
        

        printf("name of student %s\n",s2.name);
    printf("rollno. of student %d\n",s2.rollno);
    printf("CGPA of student %f\n",s2.CGPA);

printf("\n");
printf("\n");
printf("name of student %s\n",s3.name);
    printf("rollno. of student %d\n",s3.rollno);
    printf("CGPA of student %f\n",s3.CGPA);




        return 0;
    }
/*
output
name of student lokesh kumar
rollno. of student 2360027
CGPA of student 9.480000


name of student anil nigotiya
rollno. of student 2370006
CGPA of student 7.480000


name of student vikash pal
rollno. of student 2350055
CGPA of student 7.380000
*/