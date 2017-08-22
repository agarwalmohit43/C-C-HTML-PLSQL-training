#include<iostream>
using namespace std;
void print(int a=0,int b=0,int c=0)//default argument
{
    cout<<a+b+c<<"\n"<<endl;
}
void main()
{   int x=10,y=20,z=30;
    print(x);
    print(x,y);
    print(x,y,z);
    res=sqr(2);
    cout<<"\nResult is: "<<res<<endl;
    cout<<"\n"<<endl;
}

