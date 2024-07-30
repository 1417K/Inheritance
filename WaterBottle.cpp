//Write a program to display Bisllery information using multiple inheritance
#include<iostream>
#include<string.h>
using namespace std;
class Bottle
{
public:
 char type[10];
  public:
    void get_name()
    {
        cout<<"Which water Do you want(Normal/Purified):"<<endl;
        cin>>type;
    }
    void put_name()
    {
    if(strcmp(type,"Normal")==0)
        {
          cout<<"You ordered Normal Water"<<endl;
        }
        else
        {
            cout<<"You Orered Purified Water"<<endl;
            
        }
    } 
};
class company:public Bottle
{
  public:
     char bottle_name;
     public:
     void get_company()
     {
        cout<<"Which Name of Company's Bottle you Need:"<<endl;
        cin>>bottle_name;
        
     }
};
class Price:public company
{
 public:
   int price;
   public:
   void get_price()
   {
    if(strcmp(type,"Normal")==0)
    {
        cout<<"Price of Normal Water is Rs 10"<<endl;
    }
    else
    {
        cout<<"Price of Purifird Water is Rs 20"<<endl;
    }
   }
};

int main()
{
    Price c1;
    c1.get_name();
    c1.get_company();
    cout<<"*****YOUR SERVICE ON*****"<<endl;
    c1.put_name();
    c1.get_price();
    return 0;
}