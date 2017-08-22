#include<iostream>
using namespace std;
class Customer
{
public:
	Customer(int id,char *name,char *address)
	{
		this->id=id;
		strcpy(this->name,name);
		strcpy(this->address,address);
	}
	void displayCustomer(){
		cout<<"ID = "<<id<<"\nName = "<<name<<"\nAddress"<<address;
	}
	~Customer(){}
private:int id;
		char name[20],address[20];
};
void main()
{
	Customer C(101,"RAM","C-10");
	C.displayCustomer();
}