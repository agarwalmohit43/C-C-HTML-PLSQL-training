#include<iostream>
using namespace std;
class Base
{
public:  Base()
    {
        cout<<" Base class constructor"<<endl;
    }
    ~Base()
    {
        cout<<" Base class destructor"<<endl;
    }
};


class Derived:public Base,Ba
{
public:Derived()
    {
        cout<<" Derived class constructor"<<endl;
    }
     ~Derived()
    {
        cout<<" Derived class destructor"<<endl;
    }

};

void main()
{
    Derived d;
   
    cout<<endl;
}

/*
calling sequence 
1.base c
2.de c
destructor is bottom up approach
3.de d
4.base d
*/