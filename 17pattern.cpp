#include<iostream>
using namespace std;

int main()
{

    int i,j,n=5;
    char q='a', p='A';
    for(i=0;i<=n;i++){
        for(j=7;j>i;j--)
        {
            cout<<p<<q;
            p++;
            q++;
        }
        cout<<endl;
    }
}
/*
output:-
AaBbCcDdEeFfGg
HhIiJjKkLlMm
NnOoPpQqRr
SsTtUuVv
WwXxYy
Zz
*/