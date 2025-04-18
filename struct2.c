#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float CGPA;

};
int main()
{
    struct student ece[100];
    ece[0].roll=65;
    ece[0].CGPA=7.9;
    strcpy(ece[0].name,"lokesh kumar");

    ece[1].roll=66;
    ece[1].CGPA=6.1;
    strcpy(ece[1].name,"anil");


    ece[2].roll=65;
    ece[2].CGPA=8.9;
    strcpy(ece[2].name,"vikas pal");

    printf("the name of students %s\n",ece[0].name);
    printf("the roll of students %d\n",ece[0].roll);
    printf("the CGPA of students %f\n",ece[0].CGPA);
     printf("\n");
      printf("\n");

    printf("the name of students %s\n",ece[1].name);
    printf("the roll of students %d\n",ece[1].roll);
    printf("the CGPA of students %f\n",ece[1].CGPA);
printf("\n");
printf("\n");
    printf("the name of students %s\n",ece[2].name);
    printf("the roll of students %d\n",ece[2].roll);
    printf("the CGPA of students %f\n",ece[2].CGPA);

    return(0);
}
/*
output
the name of students lokesh kumar
the roll of students 65
the CGPA of students 7.900000


the name of students anil
the roll of students 66
the CGPA of students 6.100000


the name of students vikas pal
the roll of students 65
the CGPA of students 8.900000
*/