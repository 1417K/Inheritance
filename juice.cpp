//Write a program to display name and price of water bottle using multilevel inheritance.
#include<iostream>
using namespace std;
class Juice
{
 protected:
     char name[20];
     public:
     void getdata()
     {
        cout<<"Which Juice you want:"<<endl;
        cin>>name;
     }   
     void putdata()
     {
        cout<<"You Want:"<<name<<endl;
     }
};
class Flavour : public Juice
{
   protected:
      char Flavour_name[20];
      public:
      void get_info()
      {
        cout<<"Which Flavour do you Like :"<<endl;
        cin>>Flavour_name;
      }
      void put_info()
      {
        cout<<"Your Flavour:"<<Flavour_name<<endl;
      }
};
class Price: public Flavour
{
   protected:
  int price;
  public:
   void get_price()
   {
     cout<<"Enter Price of Juice 20 or 40:"<<endl;
     cin>>price;
   }
   void put_price()
   {
    if(price==40)
    {
        cout<<"You ordered One Full Juice of Rs 40"<<endl;
    }
    else
    {
        cout<<"You Ordered One Half Juice of Rs 20"<<endl;
    }
   }
};
int main()
{
    Price p1;
    p1.getdata();
    p1.get_info();
    p1.get_price();
    cout<<"*****************************************************"<<endl;
    p1.putdata();
    p1.put_info();
    p1.put_price();
    return 0;
}