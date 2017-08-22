/* Program to print employee details by defining two structures for date and employee details*/

#include<stdio.h>

struct date
{
	int day,month,year;
};
struct emp
{
	char name[15];
	struct date dob;
	float salary;
};
void main()
{
	struct emp info;
	printf("Enter Name : ");
	scanf("%[^\n]",info.name);
	fflush(stdin);

	printf("Enter dob(dd/mm/yy) :");
	scanf("%d%d%d",&info.dob.day,&info.dob.month,&info.dob.year);
	fflush(stdin);

	printf("Enter Salary : ");
	scanf("%f",&info.salary);
	fflush(stdin);

	printf("\n\nYou have entered ..........\n");
	printf("\n Name : %s",info.name);
	printf("\n dob : %d/t%d/t%d",info.dob.day,info.dob.month,info.dob.year);
	printf("\n Salary : %.2f\n",info.salary);


}