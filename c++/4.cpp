#include<iostream>
using namespace std;
class Student
{

public:
    void display()
    {
        cout<<"\n Roll: "<<rollno;
        cout<<"\n Name: "<<name;
    }

    void accept()
    {
        cout<<"\nEnter NAme and roll: ";
        cin>>name>>rollno;
    }

private:
    int rollno;
    char name[20];
};
void main()
{
    Student s;
    s.accept();
    s.display();
    cout<<"\n";
}