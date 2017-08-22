#include<iostream>
using namespace std;

template<class T>//T means any datatype
void swaps(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template<class A,class B>//depends on
void print(A a,B b)
{
    cout<<"a="<<a<<"\tb="<<b<<endl;
}
void main()
{
    int a=10,b=20;
    double c=10.5,d=20.5;
    cout<<"Values before swapping a="<<a<<" b="<<b<<endl;
    cout<<"Values before swapping c="<<c<<" d="<<d<<endl;
    swaps<int>(a,b);
    swaps<double>(c,d);
    cout<<"Values after swapping a="<<a<<" b="<<b<<endl;
    cout<<"Values after swapping c="<<c<<" d="<<d<<endl;
    print<char,int>('X',43);
    cout<<endl;
    
}
/*
efficient for different datatypes

*/