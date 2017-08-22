#include<iostream>
using namespace std;
class Student
{
   

public:
    void display()
    {
        cout<<"\n Roll: "<<rollno;
        cout<<"\n Name: "<<name;
        cout<<"\n Address: "<<address;
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

    Student(int rno,char n[],char ad[])//three parameter constructor
    {
        rollno=rno;
        strcpy(name,n);
        strcpy(address,ad);
    }
    ~Student()//destructor
    {
        cout<<"\nDestructor Called";
        rollno=0;
        
    }
private:
    int rollno;
    char name[20];
    char address[40];
};
void main()
{   Student s,s1(100),s2(100,"Mohit"),s3(101,"ILU","PUNE");
    s.display();
    s1.display();
    s2.display();
    s3.display();
    cout<<"\n";
}