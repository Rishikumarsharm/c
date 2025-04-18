#include<iostream>
#include<string>
using namespace std;
class students{
     private://only inside the class
     int marks;    
public://usable everywhwre in program
    string name ;
    int roll;
    string subject;
     //non parametrize constructor
    students(){
        cout<<"hi,i am a constructor"<<endl;
    }
    //parametrize constructor
    // students(string n ,int r,string s){
    //     name=n;
    //     roll=r;
    //     subject=s;
    //  }
    //  //this operator
     students(string name,int roll,string subject)
{
    this->name=name="ravi kumar";
    this->roll=roll=29;
    this->subject=subject="management";
}
 void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"roll: "<<roll<<endl;
    cout<<"subject: "<<subject<<endl;

 }
     
};
int main()
{
    students s1;//object
    s1.name="lokesh kumar";
    s1.roll= 27;
    s1.subject="Data science";
   // students s2("rishi kumar",28,"social science");
   students s2;
    s2.getinfo();

cout<<"name: "<<s1.name<<endl;
cout<<"roll: "<<s1.roll<<endl;
cout<<"subject: "<<s1.subject<<endl;
cout<<"name: "<<s2.name<<endl;
cout<<"roll: "<<s2.roll<<endl;
cout<<"subject: "<<s2.subject<<endl;
}