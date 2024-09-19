#include<iostream>
using namespace std;
//HOLLOW DIAMOND PATTERN
int main()
{
  int i,k,j,n=10;
  for(i=0;i<n;i++)
  {
    //spaces
    for(j=0;j<n-i-1;j++){

    cout<<" ";
    }
    cout<<"*";
    if(i!=0){
      //spaces
     for(j=0;j<2*i-1;j++){
      cout<<" ";
     }
     cout<<"*";
    }
    cout<<endl;
  }
  //bottom
   for(i=0;i<n-1;i++){
   //spaces
    for(j=0;j<i+1;j++){

    cout<<" ";
    }
    cout<<"*";
    if(i!=n-2){
      //spaces
     for(j=0;j<2*(n-i)-5;j++){
      cout<<" ";
     }
     cout<<"*";
    }
    cout<<endl;
   }
   return 0;

}  
/*
OUTPUT
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*                 *
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         *
  */