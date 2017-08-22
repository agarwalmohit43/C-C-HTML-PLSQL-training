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
        cout<<"\n Enter the real number: "<<endl;
        cin>>a;
        
        cout<<"\n Enter the imaginary number: "<<endl;
        cin>>b;
    }
    complex(int c,float d):a(c),b(d)
    {
       
        
    }

    void operator=(complex &c1)
    {
        cout<<"\n overloaded=operator"<<endl;
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
    complex c1,c2(10,11.5),c3;
    c1.display();
    c2.display();
    c3=c1;
    c3.display();
    cout<<"\n"<<endl;
}
/*
c3=c1;
c3.operator= c1;

c3=c1+c2;
c3.operator=(c1.operator+(c2));

*/
