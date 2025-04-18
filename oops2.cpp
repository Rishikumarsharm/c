#include<iostream>
#include<string>
using namespace std;
//inheritance
class teacher{
    public:
    string name;
    string subject;

};
class student : public teacher{
    public:
     int roll;

     void getinfo(){
        cout<<"name: "<<name<<endl;
    cout<<"subject: "<<subject<<endl;
    cout<<"roll: "<<roll<<endl;

     }
};
class boy:public student{

};
int main(){
    student s1;
    boy b1;
    s1.name="lokesh kumar";
    s1.subject="data science";
    s1.roll=27;
    b1.name="ravi shankar";
    b1.subject="oops";
    b1.roll=25;
    s1.getinfo();
     cout<<"name: "<<b1.name<<endl;
    cout<<"subject: "<<b1.subject<<endl;
    cout<<"roll: "<<b1.roll<<endl;


}