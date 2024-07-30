#include<iostream>
using namespace std;
class Student
{
  protected:
   int rollno;
   char name[10];
   public:
   void getdata()
   {
    cout<<"Enter Student Roll Number:"<<endl;
    cin>>rollno;
    cout<<"Enter Student Name:"<<endl;
    cin>>name;
   }
   void putdata()
   {
    cout<<"Student Roll Number:"<<rollno<<endl;
    cout<<"Student Name:"<<name<<endl;
   }
};
class Test
{
 protected:
   int marks1,marks2;
   public:
    void get_marks()
    {
        cout<<"Enter Test-1 Marks:"<<endl;
        cin>>marks1;
        cout<<"Enter Test-2 marks:"<<endl;
        cin>>marks2;
    }
    void put_marks()
    {
        cout<<"Test-1 Marks:"<<marks1<<endl;
        cout<<"Test-2 Marks:"<<marks2<<endl;
    }
};
class Total : public Student, public Test
{
 protected:
   int total;
   public:
   void get_total()
   {
     total=marks1+marks2;
     cout<<"Total ="<<total<<endl;
   }
};
int main()
{
    Total t1;
    t1.getdata();
    t1.get_marks();
    cout<<"*******Student Information***********"<<endl;
    t1.putdata();
    t1.put_marks();
    t1.get_total();
    return 0;
}