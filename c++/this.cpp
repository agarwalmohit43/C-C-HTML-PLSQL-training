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
    complex(int c,float d)
    {
        this->a=c;
        this->b=d;
        
    }

    
    ~complex(){}
private:
    int a;
    float b;
};
void main()
{   
    complex c1,c2(10,11.5);
    c1.display();
    c2.display();
    cout<<"\n"<<endl;
}

