#include<iostream>
using namespace std;
class Base
{
public:void show()
       {
           cout<<"\n Base show method"<<endl;
       }
   
private:
};

class DerivedA:virtual public Base
{
public:
    /*void show()
       {
           cout<<"\n Derived A show method"<<endl;
       }*/
   
private:
        
};

class DerivedB:virtual public Base
{
public:
    /*void show()
       {
           cout<<"\n Derived B show method"<<endl;
       }*/
   
   
private:
        
};

class DerivedC:public DerivedA,public DerivedB
{
public: 
    /*void show()
       {
           cout<<"\n Derived C show method"<<endl;
       }*/
   
private:
        
};
void main()
{
    DerivedC obj;
   // obj.DerivedB::show();//scope resolution because we overrided deriveds class
    obj.show();
    cout<<endl;
}

/*
props diamond promblem in hybrid inheritance
we use virtual for base class direct access
*/