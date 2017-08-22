#include<iostream>
using namespace std;
class Calculator
{
public:Calculator(int a,int b):numberOne(a),numberTwo(b){}

        void add()
       {
           cout<<"\n Addition: "<<numberOne+numberTwo<<endl;
       }

       void division()throw(int)//datatype of throwed exception violated using set_unexpected in gcc
       {
           if(numberTwo==0)
               throw numberTwo;//use to throw exception can be value 
           cout<<"\n Division: "<<numberOne/numberTwo<<endl;
       }

       void multiplication()
       {
           cout<<"\n Multiplication: "<<numberOne*numberTwo<<endl;
       }

       void substraction()
       {
           cout<<"\n Substraction: "<<numberOne-numberTwo<<endl;
       }
private:int numberOne,numberTwo;
};

void main()
{
    int a,b;
    cout<<"\nEnter two numbers"<<endl;
    cin>>a>>b;
    Calculator c(a,b);
    c.add();
    try
    {
        c.division();
    }catch(int number)
    {
        cout<<"\n Division by "<<number<<" not possible."<<endl;
    }catch(...)//any other exception rather than double and int this gets executed called generic exception
    {
        cout<<"\n Exception hai boss :)"<<endl;
    }
    c.multiplication();
    c.substraction();
    cout<<endl;
}