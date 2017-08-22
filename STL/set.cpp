//using set--  
//set-no duplication  
//multiset-duplication  
  
#include<iostream>  
#include<set>  
using namespace std;  
  
  
class Employee  
{  
 int empid;  
 char name[20];  
 int salary;  
public:  
 void Accept();  
 void Display() const;  
 bool operator<(Employee)const;  
};  
  
bool Employee::operator<(Employee e)const //e1.operator(e2)  
{  
 return salary<e.salary;  
}  
  
  
void Employee::Accept()  
{  
 cout<<"\n Enter Employee info: ";  
 cin>>empid>>name>>salary;  
}  
  
void Employee::Display() const  
{  
 cout<<"\n"<<empid<<"\t"<<name<<"\t"<<salary<<endl;  
}  
  
  
  
int main()  
{  
 multiset<int> s;  
  
 s.insert(14);  
 s.insert(4);  
 s.insert(144);  
 s.insert(144);  
 s.insert(140);  
 s.insert(146);  
 s.insert(141);  
  
 multiset<int>::iterator itr;  
 for(itr=s.begin();itr!=s.end();itr++)  
  cout<<*itr<<" ";  
 cout<<endl;  
 itr=s.find(400);  
 if(itr!=s.end())  
 {  
  cout<<"Element found: "<<endl;  
 }  
 else  
 {  
  cout<<"Element not found: "<<endl;  
 }  
 s.erase(144);  
 cout<<endl;  
  
 for(itr=s.begin();itr!=s.end();itr++)  
  cout<<*itr<<" ";  
  
 set<Employee> s1;  
 Employee e1,e2,e3;  
 e1.Accept();  
 e2.Accept();  
 e3.Accept();  
 s1.insert(e1); //set store object as aconstant object  
 s1.insert(e2);  
 s1.insert(e3);  
   
 set<Employee>::iterator it;  
 for(it=s1.begin();it!=s1.end();it++)  
  (*it).Display();  
   
  
}
  
  
  
  
    
  
  
  
  
  
  
  