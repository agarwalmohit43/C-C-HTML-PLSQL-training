#include<iostream>
using namespace std;
class Student
{
	public:
	void displaystudent()
	{
		cout<<"\n rollno ="<<rollno;
		cout<<"\n name="<<name;
	}
	Student()//constrcutor
	{
		cout<<"\n empty constructor";
		cout<<"\nEnter name and rollno";
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
	~Student()///destructor
	{
		cout<<"\ndestructor called";
		rollno=0;
	}
private:
	int rollno;
	char name[20];
};
void main()
{
	Student s;
	s.displaystudent();
	Student s1(10);// one parameterised constrcutor
	Student s2(100,"sham");// two parameterised constrcutor
	s1.displaystudent();
	s2.displaystudent();
	//Student s4(1,"sham",10000);

}