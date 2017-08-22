#include<iostream>
using namespace std;
class Student
{
   

public:
    void display()
    {
        cout<<"\n Roll: "<<rollno;
        cout<<"\n Name: "<<name;
        cout<<"\n";
    }

     //constructor
    Student()
    {
        cout<<"\nEnter NAme and roll: ";
        cin>>name>>rollno;
    }
    Student(int rno)//one parameter constructor
    {
        rollno=rno;
    }
  
    Student(int rno,char n[])//two parameter constructor
    {
        rollno=rno;
        strcpy(name,n);
    }
    ~Student()//destructor
    {
        cout<<"\nDestructor Called";
        rollno=0;
    }
private:
    int rollno;
    char name[20];
};
void main()
{   Student s,s1(100),s2(100,"Mohit");
    s.display();
    s1.display();
    s2.display();
    cout<<"\n";
}