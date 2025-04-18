#include<stdio.h>
#include<string.h>

struct people{
  
  int housenum;
  int blocknum;
  char state[100];
  char city[100];
};
int main()
{   int n=5;
    struct people p1;
    for(int i=0;i<n;i++){
    p1.housenum=n;
    
    p1.blocknum=10;
    strcpy(p1.city,"gaya");
    strcpy(p1.state,"bihar");
    }
    printf("%d\t",p1.housenum);
    printf("%d\t",p1.blocknum);
    printf("%s\t",p1.city);
    printf("%s\t",p1.state);

    return 0;  
}
