#include<iostream>
using namespace std;
class complex
{
public:
    void display()
    {
         cout<<"Real= "<<a<<"\t"<<"Imaginary= "<<b<<"\n"<<endl;
    }

    complex()
    {
        cout<<"\n Enter the real number: "<<endl;
        cin>>a;
        
        cout<<"\n Enter the imaginary number: "<<endl;
        cin>>b;
    }
    complex(int c,float d):a(c),b(d)
    {
       
        
    }
    complex(complex &c1)
    {
        cout<<"\n Copy constructor"<<endl;
        a=c1.a;
        b=c1.b;
    }
    
    ~complex(){}
private:
    int a;
    float b;
};
void main()
{   
    complex c1,c2(10,11.5),c3(c1);
    
    
    c1.display();
    c2.display();
    c3.display();
   
    cout<<"\n"<<endl;
}

#include<iostream>
using namespace std;
class complex
{
public:
    void display()
    {
         cout<<"Real= "<<a<<"\t"<<"Imaginary= "<<b<<"\n"<<endl;
    }

    complex()
    {
        cout<<"\n Enter the real number: "<<endl;
        cin>>a;
        
        cout<<"\n Enter the imaginary number: "<<endl;
        cin>>b;
    }
    complex(int c,float d):a(c),b(d)
    {
       
        
    }
    complex(complex &c1)
    {
        cout<<"\n Copy constructor"<<endl;
        a=c1.a;
        b=c1.b;
    }
    
    ~complex(){}
private:
    int a;
    float b;
};
void main()
{   
    complex c1,c2(10,11.5),c3(c1);
    
    
    c1.display();
    c2.display();
    c3.display();
   
    cout<<"\n"<<endl;
}
//copy constructor: whenever we have a pointer as a data member of a class,we have to use copy constructor

