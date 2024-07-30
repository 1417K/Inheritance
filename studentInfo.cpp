//Write a program to get student roll no , name and marks of two test and display  using single inheritance concept.
#include<iostream>
using namespace std;
class Student
{
 protected:
    int rollno;
    char name[20];
  public:
   void get_stud_info() 
   {
    cout<<"Enter Studen Roll Number:"<<endl;
    cin>>rollno;
    cout<<"Enter Student Name:"<<endl;
    cin>>name;
   } 
   void disp_stud_info()
   {
    cout<<"Student Roll Number:"<<rollno<<endl;
    cout<<"Student Name:"<<name<<endl;
   }
};
class Test:public Student
{
  protected:
     int marks1,marks2;
     public:
     void get_marks()
     {
        cout<<"Enter Test-1 marks:"<<endl;
        cin>>marks1;
        cout<<"Enter Test-2 Marks"<<endl;
        cin>>marks2;
     }
     void disp_marks()
     {
        cout<<"Test-1 Marks:"<<marks1<<endl;
        cout<<"Test-2 Marks:"<<marks2<<endl;
     }
};
int main()
{
    Test t1;
    t1.get_stud_info();
    t1.get_marks();
    t1.disp_stud_info();
    t1.disp_marks();
    return 0;
}