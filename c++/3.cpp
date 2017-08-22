#include<iostream>
using namespace std;
class Student
{

public:
    int rollno;
    char name[20];
    void display()
    {
        cout<<"\n Roll: "<<rollno;
        cout<<"\n Name: "<<name;
    }
};
void main()
{
    Student s;
    s.rollno=848785;
    strcpy(s.name,"MOHIT");
    s.display();
    cout<<"\n";
}