#include<iostream>
using namespace std;
//inverted triangle
int main()
{
    int i,j,k,n=10,num=1;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<(i+1);
        }
        cout<<endl;

        }
    return 0;
}
/*
output
1111111111
 222222222
  33333333
   4444444
    555555
     66666
      7777
       888
        99
         10
*/