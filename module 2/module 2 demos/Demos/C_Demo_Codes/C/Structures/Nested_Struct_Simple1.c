/*Program to print employee details by holding data in the form of structure within a  structure*/

#include<stdio.h>
#include<string.h>
struct emp
{
	char name[15];
	struct date
 	{
	  int day,month,year;
 	}birthday;
	float salary;
};
void main()
{
	struct emp info;
	info.birthday.day=4;
	strcpy(info.name,"Pradnya");
	printf("%d\t%s\n",info.birthday.day,info.name);
}