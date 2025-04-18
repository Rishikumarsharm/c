#include<iostream>
using namespace std;
// prime or non-prime program
int main()
{ 
    int n=9;
    bool isprime=true;
    for(int i=2; i*i<=n;i++){
        if(n % i ==0) // non prime
        isprime=false;
        break;
    }
    if(isprime==true)
    {
        cout<<"prime\n";
    }else{
        cout<<"not a prime";
    }
    return 0;
}