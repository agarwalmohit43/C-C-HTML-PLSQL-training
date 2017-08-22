#include<iostream>
using namespace std;
class complex
{
public:
    void display()
    {
         cout<<a<<"\t"<<b<<"\n"<<endl;
    }

    complex()
    {
        cout<<"\n Empty constructor: "<<endl;

        cout<<"\n Enter the real number: "<<endl;
        cin>>a;
        
        cout<<"\n Enter the imaginary number: "<<endl;
        cin>>b;
    }
    complex(int c,float d):a(c),b(d)
    {
        cout<<"\n Parametrized constructor: "<<endl;  
    }

    void operator=(complex &c1)
    {
        cout<<"\n overloaded=operator"<<endl;
        a=c1.a;
        b=c1.b;

    }
   complex operator+(complex &c)
    {
        cout<<"\n overloaded+ operator"<<endl;
        complex x;
        x.a=c.a+a;
        x.b=c.b+b;
         return x;
    }

   bool operator ==(complex c)
   {
       cout<<"\n overlaoded unary == operator "<<endl;
       if(a==c.a && b==c.b)
           return true;
       else
           return false;
   }
   void operator -()
   {
       cout<<"\n overlaoded unary - operator "<<endl;
       a=-a;
       b=-b;
   }
    
    ~complex(){cout<<"\n Destructor"<<endl;}
private:
    int a;
    float b;
};
void main()
{   
    complex c1,c2(10,11.5),c3=c1,c4=c1+c3;
    c1.display();
    //c2.display();
    c3.display();
    c4.display();
    if(c1==c3)
    {
        cout<<"\nSame"<<endl;
    }
    -c1;
    c1.display();
    cout<<"\n"<<endl;
}

