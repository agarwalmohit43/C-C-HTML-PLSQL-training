#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Employee
{
public:Employee(int,char*,int);
       //void Accept();
       void Display();
       int getEmpId();
       char* getEmpName();
       int getEmpSal();
       bool operator <(Employee);
       bool operator ==(int);
       bool operator =(Employee);
private:int empId;
        char empName[20];
        int empSalary;
};
//void Employee::Accept()
//{
//    cout<<"Enter Employee Id,Name,Salary: "<<endl;
//    cin>>empId>>empName>>empSalary;
//}

Employee::Employee(int id,char name[20],int sal):empId(id),empSalary(sal){
    strcpy(empName,name);
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

bool compare(Employee e1,Employee e2)//find min/max element
{
    return e1.getEmpSal()<e2.getEmpSal();
}

bool Employee::operator==(int id)
{
    return empId==id;
}

bool Employee::operator=(Employee e)
{
    return empId<e.empId;
}

bool conditionForCountIf(Employee e)
{
    return e.getEmpId()==1;
}
void main()
{
    
   Employee e1(1,"MOHIT",15000),e2(2,"Prasad",35000),e3(3,"Chor",5000);
   /*e1.Accept();
   e2.Accept();
   e3.Accept();*/
    
   list<Employee> l1;
   l1.push_back(e1);
   l1.push_back(e2);
   l1.push_back(e3);

   list<Employee>::iterator it;

   for(it=l1.begin();it!=l1.end();it++)//before sorting
        (*it).Display();

   cout<<endl;

   l1.sort();
   for(it=l1.begin();it!=l1.end();it++)//after sorting
        (*it).Display();

   cout<<"\nMinimum Salary"<<endl;
    list<Employee>::iterator itr;
    itr=min_element(l1.begin(),l1.end());//according to < operator loading we need not need to take compare function
    (*itr).Display();

    cout<<"\nMaximum Salary"<<endl;
    itr=max_element(l1.begin(),l1.end());
    (*itr).Display();

    cout<<"\nFind Id"<<endl;
    itr=find(l1.begin(),l1.end(),2);//e==2 e.operator==(2)
    (*itr).Display();

    cout<<"\nCount: ";
    cout<<count(l1.begin(),l1.end(),1);//operator == condition satisfied it is for only equality,3rd parameter no to be find
    
    cout<<"\nCount IF: ";
    cout<<count_if(l1.begin(),l1.end(),conditionForCountIf);//condition satisfied it is for range and equality

    cout<<"\nFind: ";
    itr=find(l1.begin(),l1.end(),5);
    if(itr!=l1.end())
        (*itr).Display();
    else
        cout<<"Employee Not Found"<<endl;


    cout<<endl;
}