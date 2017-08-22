#include<iostream>
using namespace std;
struct student
{
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
    struct student s;
    s.rollno=848785;
    strcpy(s.name,"MOHIT");
    s.display();
    cout<<"\n";
}