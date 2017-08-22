#include<iostream>
using namespace std;
class complex
{
public:
    void display()
    {
         cout<<real<<"\t"<<imaginary<<"\n"<<endl;
    }
    void initialise()//for initialising real and imaginary values to zero
    {
        this->real=0;
        this->imaginary=0;
    }

    complex()//empty constructor
    {
        cout<<"\n Empty constructor"<<endl;
        cout<<"Enter the real value: "<<endl;
        cin>>real;
        cout<<"Enter the imaginary value: "<<endl;
        cin>>imaginary;
    }

    complex(int real,float imaginary)
    {
        cout<<"\n Parametrized constructor"<<endl;
        this->real=real;
        this->imaginary=imaginary;
    }

   /* void operator=(complex &c1)
    {
        cout<<"\n operator= constructor"<<endl;
        real=c1.real;
        imaginary=c1.imaginary;
    }*/

    complex& operator=(complex &c1)
    {
        cout<<"\n operator= with complex return type constructor"<<endl;
        real=c1.real;
        imaginary=c1.imaginary;
        return *this;
    }

    complex operator +(complex &c)
    {
        cout<<"\n operator+ constructor"<<endl;
        complex comp;
        comp.real=c.real+real;
        comp.imaginary=c.imaginary+imaginary;
        return comp;
    }
    bool operator ==(complex &c)
    {
        if(real==c.real && imaginary==c.imaginary)
            return true;
        else
            return false;
    }

    void operator -()
    {
        real=-real;
        imaginary=-imaginary;
    }
    ~complex()
    {
        cout<<"\n Destructor called"<<endl;
    }
private:
    int real;
    float imaginary;
};
void main()
{   
    complex c1,c2(2,2),c3,c4,c5,c6;
   // c1.initialise();
    c3=c1;//operator= overload
    c4=c1+c3;//operator+ overload
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    if(c1==c3)
    {
        cout<<"\n Both are Same"<<endl;
    }else
    {
        cout<<"\n Unequal"<<endl;
    }
    -c1;
    c1.display();
    c6=c5=c1;//cascading operators return type complex 
    cout<<"\n"<<endl;
}

