#include<iostream>
using namespace std;

int var=10;
void main()
{   int var=20;
    cout<<"\n Global var: "<<::var<<endl;//::scope resolution for accessing global variable
    cout<<"\n Local var: "<<var<<endl;
    cout<<"\n"<<endl;
}