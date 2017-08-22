#include<iostream>
using namespace std;
class Base
{
public:int x;
private:int y;
protected:int z;
};
/*
class Derived:public Base
{
public: void display()
    {
        cout<<"\n Public of base class: "<<x<<endl;//access
       // cout<<"\n Private of base class: "<<y<<endl;//in case of public we cant have access to private members
        cout<<"\n Protected of base class: "<<z<<endl;//access
    }

};
*/

/*
class Derived:protected Base
{
public: void display()
    {
        cout<<"\n Public of base class: "<<x<<endl;//access
       // cout<<"\n Private of base class: "<<y<<endl;//in case of public we cant have access to private members
        cout<<"\n Protected of base class: "<<z<<endl;//access
    }

};
*/

class Derived:private Base// mention karna jaruri nai hai default private
{
public: void display()
    {
        cout<<"\n Public of base class: "<<x<<endl;//access
       // cout<<"\n Private of base class: "<<y<<endl;//in case of public we cant have access to private members
        cout<<"\n Protected of base class: "<<z<<endl;//access
    }

};

void main()
{
    Derived d;
    d.display();
    //cout<<"\n Public of base class: "<<d.x<<endl;
 // cout<<"\n Private of base class: "<<d.y<<endl;//in case of public we cant have access to private members
// cout<<"\n Protected of base class: "<<d.z<<endl;
    cout<<endl;
}

/*
main() story
case1: public
    protected :not accesible
    private:not accessible
    public:access

case2: protected
    protected :not accesible
    private:not accessible
    public:not accesible 

case3: private
    protected :not accesible
    private:not accessible
    public:not accesible  
    
*/