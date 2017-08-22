#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student
{
public:Student();
       Student(int,string,double);
       void display();
       int getRoll();
       string getName();
       double getPercentage();
private:int roll;
        string name;
        double percentage;
};

class Fileoperation
{
public:void writetofile(Student&);
       void readfromfile();
private:
    fstream fileobject;
};