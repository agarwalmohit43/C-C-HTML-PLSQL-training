#include<iostream>
using namespace std;

int var=10;
void main()
{   int var=20,*ptr;
    int &ref=var;
    ptr=&ref;
    cout<<"\n address of var: "<<&var;
   cout<<"\n address of ref: "<<&ref;
   cout<<"\n address of ptr: "<<&ptr;
    cout<<"\n"<<endl;
}

/*
reference
1.same memory location
2.value change
3.always initialise at time of declaration
4.not for array
5.a ref cannot ref to another ref
*/