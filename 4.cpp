#include<iostream>
using namespace std;
 // sum of two numbers
int main()
{ int a,b;

 cout<<"enter any two numbers"<<endl;
 cin>>a>>b;
 int c=a+b;
cout<<c<<endl;

// unary operator
 int p=2;

 int j=p++;
 int k=p--;
 cout<<k<<endl;
 cout<<j<<endl;
    return 0;
}

// output
// 4 5
// 9
// 3
// 2