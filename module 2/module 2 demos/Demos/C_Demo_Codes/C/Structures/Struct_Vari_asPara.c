/*Program to print a person's details. Example for passing structure variable as a parameter to the function*/

#include<stdio.h>

struct bdate
{
	int date,mon,yr;
};
struct MyInfo
{
	char name[10];
	char add[10];
	struct bdate birthday;
};

void main()
{
	void display(struct MyInfo);
	struct MyInfo mi={"Priya","Vashi",01,05,1988};

	display(mi);
}

void display(struct MyInfo mi1)
{
	printf("Name : %s\nAddress : %s\nBirthday : %d/%d/%d\n",mi1.name,mi1.add,mi1.birthday.date,mi1.birthday.mon, 		mi1.birthday.yr);
}