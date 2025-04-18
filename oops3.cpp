#include<iostream>
#include<conio.h>
using namespace std;
class student{
  private:
  int marks=9.48;
  protected:
  int remarks;
  public:
  string name ;
  string subject;
  int roll;
 // friend function
 friend int marks(int per){
       
    int marks=per;
 }

};
class teacher :public student{
    private:
    double salary;
 public:
 string teachername;
 string dep;
};
int main(){
    student s1;
    student s2;

    s1.name="lokesh  kumar";
    s1.roll=27;
    s1.subject="oops";
    s2.name="rishi  kumar";
    s2.roll=28;
    s2.subject="oops";
    teacher t1;
    t1.teachername="chakarvati sharma";
    t1.dep="cs";

    cout<<"name: "<<s1.name<<endl;
    cout<<"roll: "<<s1.roll<<endl;
    cout<<"subject :"<<s1.subject<<endl;
     cout<<"name: "<<s2.name<<endl;
    cout<<"roll: "<<s2.roll<<endl;
    cout<<"subject :"<<s2.subject<<endl;
    cout<<"teacher name: "<<t1.teachername<<endl;
    cout<<"dep: "<<t1.dep<<endl;
    return 0;
}


