#include<iostream>
using namespace std;
class Shape
{
public: Shape()
        {cout<<"\nConstructor of Shape class"<<endl;}
        virtual void area(){}
        void fillcolor()
        {
            cout<<"Filling color\n"<<endl;
        }
        virtual ~Shape()
        {
            cout<<"Destructor of shape(base) class"<<endl;
        }
private:
};
class Circle:public Shape
{
public:Circle(int r):r(r){cout<<"Constructor of Circle class"<<endl;}
       void area()
       {
           cout<<"\nArea of Circle: "<<3.14*r*r<<endl;
       }
       ~Circle()
       {
           cout<<"Destructor of Circle(derived) class"<<endl;
       }
private:int r;
};
class Rectangle:public Shape
{
public:Rectangle(int ht,int wt)
       {
           cout<<"Constructor of rectangle class"<<endl;;
           h=ht;
           w=wt;
       }

       void area()
       {
           cout<<"\nArea of Rectangle"<<h*w<<endl;
       }
       ~Rectangle()
       {
           cout<<"Destructor of Rectangle(derived) class"<<endl;
       }
private:int h,w;
};

void main()
{
    Shape *s;//upcasted pointer
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
    s->area();//avoid repeatance of code
    s->fillcolor();
    delete s;

}

/*
we use runtime polymorphism
beacause behaviour may be same but implementation will be different

we need to delete upcasted pointer by manually and by doing this destructor will be called.
*/