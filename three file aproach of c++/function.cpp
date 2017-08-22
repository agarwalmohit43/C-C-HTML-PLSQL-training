#include "header.h"

Demo::Demo(int x):foo(x){}

Demo::~Demo(){}

void Demo::print()
{
    cout<<" foo: "<<foo;
}

void show()
{
    cout<<"\n whenever we declare friend function we dont use scope resolution"<<endl;
}