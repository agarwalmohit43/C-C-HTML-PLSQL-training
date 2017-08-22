#include<iostream>
using namespace std;
class complex
{
public:
    complex()
    {
        real=10;imag=10.5;

    }

    void dis()
    {
        cout<<" Real: "<<real<<" Imaginary: "<<imag<<endl;
    }

    friend complex operator *(complex &x,complex &y)
    {
        complex t;
        t.real=x.real*y.real;
        t.imag=x.imag*y.imag;
        return t;
    }
    friend complex operator /(complex &x,complex &y)
    {
        complex t;
        t.real=x.real/y.real;
        t.imag=x.imag/y.imag;
        return t;
    }
    friend complex operator +(complex &x,complex &y)
    {
        complex t;
        t.real=x.real+y.real;
        t.imag=x.imag+y.imag;
        return t;
    }
    friend complex operator -(complex &x,complex &y)
    {
        complex t;
        t.real=x.real-y.real;
        t.imag=x.imag-y.imag;
        return t;
    }
private:
    int real;float imag;

};

void main()
{
    complex c,c2=c,c3;
    c.dis();
    c3=c*c2;
    cout<<"\nMultiplication operator(*) of operator"<<endl;
    c3.dis();
    c3=c/c2;
    cout<<"\nDivision operator(/) of operator"<<endl;
    c3.dis();
    c3=c+c2;
    cout<<"\nAddition operator(+) of operator"<<endl;
    c3.dis();
    c3=c-c2;
    cout<<"\nSubtraction operator(-) of operator"<<endl;
    c3.dis();

    
}