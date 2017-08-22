#include<iostream>
using namespace std;
class Shape//abstract class
{
public:
   virtual void area()=0;//pure virtual method
    void fillcolor()
    {
        cout<<"Filling color"<<endl;
    }
private:
};
class Circle:public Shape
{
public:Circle(int r):r(r){}
       void area()
       {
           cout<<"Area of Circle: "<<3.14*r*r<<endl;
       }
private:int r;
};
class Rectangle:public Shape
{
public:Rectangle(int ht,int wt)
       {
           h=ht;
           w=wt;
       }

       void area()
       {
           cout<<"Area of Rectangle"<<h*w<<endl;
       }
private:int h,w;
};

void main()
{
    Shape *s;
    int choice;
    cout<<"Enter Ur Choice\n 1.Circle\t2.Recatangle"<<endl;
    cin>>choice;
    if(choice==1)
    {
        int r;
        cout<<"Enter the radius"<<endl;
        cin>>r;
        s=new Circle(r);
    }
    else
    {
        int h,w;
        cout<<"Enter the height and width"<<endl;
        cin>>h>>w;
        s=new Rectangle(h,w);
    }
    s->area();
    s->fillcolor();
    

}

/*
Method are two types:
1.concrete
2.non concrete->no implementation above example in base class area()

Abstract class
1.make a purely virtual method by (=0)->this makes a function pure virtual
2.side effect makes class abstract automatic
3.In derived class we need to have a implementation of purely virtual method otherwise it cannnot be initiante
*/