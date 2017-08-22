#include"header.h"
Student::Student()
{
    roll=0;name="NULL";percentage=0;
}
Student::Student(int roll, std::string name, double per):roll(roll),name(name),percentage(per){}
void Student::display()
{
    cout<<"\nRoll: "<<roll<<"\tName: "<<name<<"\tPercentage: "<<percentage<<endl;
}
int Student::getRoll(){return roll;}

string Student::getName(){return name;}

double Student::getPercentage(){return percentage;}

//file class implementation

void Fileoperation::writetofile(Student &s)
{
    fileobject.open("d:\\file\\student.txt",ios::out|ios::app);
    fileobject.write((char*)&s,sizeof(s));
    cout<<"\n Data Recorded!!!!"<<endl;
    fileobject.close();
}

void Fileoperation::readfromfile()
{
    Student s;
    fileobject.open("d:\\file\\student.txt");// ->ios::in is optional by default is invoked in read mode
    cout<<"\n Reading Records!!!!"<<endl;
    fileobject.seekp(0);//take the pointer to the position 48
    while(fileobject.read((char*)&s,sizeof(s)))
    {
        s.display();
        cout<<"\n File pointer is at: "<<fileobject.tellp();//return current position of the pointer
    }
    fileobject.close();
}