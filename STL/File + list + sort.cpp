#include<iostream>
#include<fstream>
#include<list>
#include<string>
using namespace std;

class Employee
{
public:void Accept();
       void Display();
       int getEmpId();
       char* getEmpName();
       int getEmpSal();
       bool operator <(Employee);
private:int empId;
        char empName[20];
        int empSalary;
};
void Employee::Accept()
{
    cout<<"Enter Employee Id,Name,Salary: "<<endl;
    cin>>empId>>empName>>empSalary;
}

void Employee::Display()
{
    cout<<"Employee Id: "<<empId<<"\nEmployee Name: "<<empName<<"\nEmployee Salary: "<<empSalary<<endl;
}
int Employee::getEmpId()
{
    return empId;
}

char* Employee::getEmpName()
{
    return empName;
}
int Employee::getEmpSal()
{
    return empSalary;
}

bool Employee::operator <(Employee e) //e1.operator<(e2)
{
    return empSalary<e.empSalary;
}


void main()
{
    fstream finout,finout1;
    Employee e;
    int choice;
    list<Employee> empList;
   cout<<"1.Insert Record\n2.Display Records\n3.Sort Records"<<endl;
   cin>>choice;
   switch(choice)
   {
   case 1:  finout.open("d:\\file\\employeeList.dat",ios::app | ios::binary);
            e.Accept();
            finout.write((char*)&e,sizeof(e));
            finout.close();
            break;
   case 2:  finout.open("d:\\file\\employeeList.dat",ios::in | ios::binary);
            while(true)
            {
                finout.read((char*)&e,sizeof(e));
                if(finout.eof())
                    break;
                e.Display();
                cout<<endl;
            }
            finout.close();
            break;
   case 3:  finout.open("d:\\file\\employeeList.dat",ios::in | ios::binary);
            while(true)
            {
                finout.read((char*)&e,sizeof(e));
                
                if(finout.eof())
                    break;
                empList.push_back(e);
            }
            finout.close();
           
            empList.sort();
            finout1.open("d:\\file\\employeeList.dat",ios::out | ios::binary);
            list<Employee>::iterator it;
            for(it=empList.begin();it!=empList.end();it++)
            {
               
               finout1.write((char*)&(*it),sizeof(*it));
             
                (*it).Display();
            }
            finout1.close();
            
            break;
   }

    cout<<endl;
}