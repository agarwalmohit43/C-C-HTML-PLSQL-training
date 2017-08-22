#include "Complex.h"
using namespace std;


void Complex::Accept()
{
    cout<<"\nEnter Real And imaginary Number: "<<endl;
    cin>>real>>imaginary;
}


void Complex::Display()
{
    cout<<"Complex Number: "<<real<<"+"<<imaginary<<"i"<<endl;;
}