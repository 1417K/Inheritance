//WAP to display addition of two numbers using single inheritance.
#include<iostream>
using namespace std;
class A
{
      protected:
        int a,b;
        public:
        void get_info()
        {
            cout<<"Enter first value:"<<endl;
            cin>>a;
            cout<<"Enter second value:"<<endl;
            cin>>b;
        }
};
class B:public A
{
     protected:
      int c;
      public: 
         void disp_info()
         {
            c=a+b;
            cout<<"\nAddition of two numbebrs:"<<c<<endl;
         }
};
int main()
{
    B a1;
    a1.get_info();
    a1.disp_info();
    return 0;
}