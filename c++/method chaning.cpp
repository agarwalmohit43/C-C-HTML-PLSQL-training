#include<iostream>
using namespace std;
class Foo
{
public:
    //to remove void return type we use reference with *this
    Foo& a()
    {
        cout<<"\n Method a";
        return *this;
    }
    Foo& b()
    {
        cout<<"\n Method b";
        return *this;
    }
    void c()
    {
        cout<<"\n Method c";
        
    }
};
void main()
{
   Foo obj;
   obj.a().b().c();//method chaining 
   cout<<endl;

}
/*
Method chaining
1.obj.a()return obj and abj can only make a call since we have declared reference datatype
2.same for b
3.we do need to declare it for c as it is not calling some other function
*/