#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Employee
{
public:void Accept();
       void Display();
       int getEmpId();
       char* getEmpName();
       int getEmpSal();
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

bool compare(Employee e1,Employee e2)
{  
    return e1.getEmpSal()<e2.getEmpSal();
}

void main()
{
    fstream finout,finout1;
    Employee e;
    int choice;
    vector<Employee> empVector;
   cout<<"1.Insert Record\n2.Display Records\n3.Sort Records"<<endl;
   cin>>choice;
   switch(choice)
   {
   case 1:  finout.open("d:\\file\\employee.dat",ios::app | ios::binary);
            e.Accept();
            finout.write((char*)&e,sizeof(e));
            finout.close();
            break;
   case 2:  finout.open("d:\\file\\employee.dat",ios::in | ios::binary);
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
   case 3:  finout.open("d:\\file\\employee.dat",ios::in | ios::binary);
            while(true)
            {
                finout.read((char*)&e,sizeof(e));
                
                if(finout.eof())
                    break;
                empVector.push_back(e);
            }
            finout.close();
           
            sort(empVector.begin(),empVector.end(),compare);
          
            finout1.open("d:\\file\\employee.dat",ios::out | ios::binary);
           
            for(int i=0;i<empVector.size();i++)
            {
               
                finout1.write((char*)&empVector[i],sizeof(empVector[i]));
            }
            finout1.close();
            
            break;
   }

    cout<<endl;
}