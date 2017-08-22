#include<iostream>
using namespace std;


void show(int &a,int &b)
{
    cout<<a<<"\t"<<b<<"\n";
}

void show1(int a,int b)
{
    cout<<a<<"\t"<<b<<"\n";
}

void show(int *a,int *b)
{
    cout<<*a<<"\t"<<*b<<"\n";
}

int var=10;

void main()
{   int var=20,*ptr;
    int &ref=var;
    ptr=&ref;
    int a=10,b=50;
    cout<<"\n address of var: "<<&var<<endl;
   cout<<"\n address of ref: "<<&ref<<endl;
   cout<<"\n address of ptr: "<<&ptr<<endl;

   cout<<"\n value of var: "<<var<<endl;
   cout<<"\n value of ref: "<<ref<<endl;
    ref=5;
    cout<<"\n value of var: "<<var<<endl;
   cout<<"\n  value of ref: "<<ref<<endl;
   show(a,b);
   show(&a,&b);
   show1(a,b);
    cout<<"\n"<<endl;
}

