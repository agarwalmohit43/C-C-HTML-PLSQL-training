#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Person
{
public:
   /*
   Person()//empty constructor need to be called as by defining parameterised it replaced default empty constructor
    {
        cout<<" Person Empty Constructor "<<endl;
    }
    */
    Person(string name,int age,char gender):name(name),age(age),gender(gender)
    {
        //cout<<"Person Parametrised Constructor"<<endl;//called first
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    void eating()//methor overriding
    {
        cout<<"Person Eating"<<endl;
    }
private:string name;
        int age;
        char gender;
};

class Employee:public Person
{
public:
    Employee(string name,int age,char gender,int empId,double salary):Person(name,age,gender)
    {

        //cout<<"Employee Parametrised Constructor"<<endl;//called second
        this->empId=empId;
        this->salary=salary;
    }
    void show()
    {
        cout<<"EmpId: "<<empId<<endl;
       // cout<<"Salary: "<<setprecision(2)<<salary<<endl;
        printf("Salary: %.2lf\n",salary);//for decimal number after point
    }

     void eating()//methor overriding
    {
        cout<<"Employee Eating"<<endl;
    }
private:
        int empId;
        double salary;
};
void main()
{
   Employee mohit("Mohit",22,'M',848785,10814.14);
   mohit.display();
   mohit.show();
   mohit.eating();
   
    cout<<endl;
}

/*
Method Overriding
derived prefence high
*/