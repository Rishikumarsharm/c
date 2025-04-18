#include<iostream>
using namespace std;
int main()
{  
    int age;

    cout<<"enter a number"<<endl;
    cin>>age;
    cout<<"your  age is:"<< age<<endl;

    int  a=5, b=9;

    cout<<"sum\n"<<(a+b)<<endl;
    cout<<"sub\n"<<(a-b)<<endl;
    cout<<"multi\n"<<(a*b)<<endl;
    cout<<"divide\n"<<(a/b)<<endl;
    cout<<"rem\n"<<(a%b)<<endl;

    // arthemetic operator
    cout<< (double)5 / (int) 2<<endl;// declation of type of input

    // REALITIONAL OPERATOR
    cout<< (3456>1232) <<endl;//true
    cout<<(9<3)<<endl;//false

    //LOGICAL OPERATOR
    cout<< (2>3 && 2<1)<<     "false"<<endl;
    cout<< (2<3 && 2>1)<<     "true"<<endl;
    cout<< (2>3 || 2<1)<<endl;
    cout<< (2<3 || 2>1)<<endl;
    cout<< (3!=3)<<"false"<<endl;
    cout<< (3==2)<<endl;
    return 0;

}
// output

// your  age is:3
// sum
// 14
// sub
// -4
// multi
// 45
// divide
// 0
// rem
// 1
// 0
// 0false
// 0true
//0
// 1
// 0false
// 0
