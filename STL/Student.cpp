#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Student
{
public:Student(int,char*,int);
       //void Accept();
       void Display();
       int getRollNumber();
       char* getStudnetName();
       int getStudnetPercentage();
       bool operator <(Student);
       bool operator ==(int);
       bool operator =(Student);
private:int studentRoll;
        char studentName[20];
        int studentPercentage;
};
//void Student::Accept()
//{
//    cout<<"Enter Student Id,Name,Salary: "<<endl;
//    cin>>studentRoll>>studentName>>studentPercentage;
//}

Student::Student(int roll,char name[20],int per):studentRoll(roll),studentPercentage(per){
    strcpy(studentName,name);
}

void Student::Display()
{
    cout<<"Student Roll: "<<studentRoll<<"\nStudent Name: "<<studentName<<"\nStudent Percentage: "<<studentPercentage<<endl;
}

int Student::getRollNumber()
{
    return studentRoll;
}

char* Student::getStudnetName()
{
    return studentName;
}
int Student::getStudnetPercentage()
{
    return studentPercentage;
}

bool Student::operator <(Student s) 
{
    return studentPercentage<s.studentPercentage;
}

bool compare(Student s1,Student s2)//find min/max slement
{
    return s1.getStudnetPercentage()<s2.getStudnetPercentage();
}

bool Student::operator==(int roll)
{
    return studentRoll==roll;
}

bool Student::operator=(Student s)
{
    return studentRoll<s.studentRoll;
}
bool conditionForAbove60(Student s)
{
    return s.getStudnetPercentage()>60;
}

bool between50To60(Student s)
{
    return s.getStudnetPercentage()>=50 && s.getStudnetPercentage()<=60;
}

bool conditionForAbove40(Student s)
{
    return s.getStudnetPercentage()>40;
}

bool conditionForBelow40(Student s)
{
    return s.getStudnetPercentage()<40;
}

void main()
{
    
   Student s1(1,"MOHIT",84),s2(2,"Prasad",89),s3(3,"Chor",55),s4(4,"Bhukad",59),s5(5,"Mane",45),s6(6,"Prajakta",35);
 
   list<Student> l1;
   l1.push_back(s1);
   l1.push_back(s2);
   l1.push_back(s3);
   l1.push_back(s4);
   l1.push_back(s5);
   l1.push_back(s6);

   list<Student>::iterator it;

   for(it=l1.begin();it!=l1.end();it++)//before sorting
        (*it).Display();

   cout<<endl;

   l1.sort();
   for(it=l1.begin();it!=l1.end();it++)//after sorting
        (*it).Display();

    cout<<"\nMinimum Percentage"<<endl;
    list<Student>::iterator itr;
    itr=min_element(l1.begin(),l1.end());//according to < operator loading we need not need to take compare function
    (*itr).Display();

    cout<<"\nMaximum Percentage"<<endl;
    itr=max_element(l1.begin(),l1.end());
    (*itr).Display();

    cout<<"\nAbove 60%: ";
    cout<<count_if(l1.begin(),l1.end(),conditionForAbove60);
    
    cout<<"\nBetween 50% to 60%: ";
    cout<<count_if(l1.begin(),l1.end(),between50To60);

    cout<<"\nAbove 40%: ";
    cout<<count_if(l1.begin(),l1.end(),conditionForAbove40);

    cout<<"\nBelow 40%: ";
    cout<<count_if(l1.begin(),l1.end(),conditionForBelow40);

    cout<<endl;
}