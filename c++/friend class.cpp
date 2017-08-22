#include<iostream>
using namespace std;
class A
{
public:A(int i):a(i){}
       friend class B;
private:int a;
};

class B
{
public:void show(A &aobj)
       {
           cout<<"Value of a=: "<<aobj.a;
       }

};
void main()
{
     A aobj(10);
     B bobj;
     bobj.show(aobj);
     cout<<endl;
}
/*
Friend class
1.friend reverse not possible
2.not transitive a=b=c
3.friendship never get inherited
*/
