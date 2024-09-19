#include<iostream>
using namespace std;

int main()
{
    int n=7;
  char p='A';
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout<<p;
            p++;
        }
    cout<<endl;
    }
    return 0;
}
/*
output
A
BC
DEF
GHIJ
KLMNO
PQRSTU
VWXYZ[\*/