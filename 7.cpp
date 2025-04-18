#include<iostream>
using namespace std;
//CONDITION STATEMENT
int main()
{ int n;
char ch='a';
char b='A';
int value=b;
int value1=ch;
cout<<"enter a character"<<endl;
cin>>ch>>n;
if(ch>=65 && ch<96)
{
    cout<<"uppercase"<<endl;
}
else if(ch>=97 && ch<=122){

    cout<<"lowercase"<<endl;
}else{

    cout<<"NOT AN ALPHABET"<<endl;
}
cout<<(n>=0 ? "postive" : "negaive")<<endl;// ternary statement
}