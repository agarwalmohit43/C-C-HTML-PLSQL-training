/* Example- structure member as function arguments */
# include <stdio.h>
# define CURRENT_YEAR 2015
typedef struct 
{
	char name[20];
	struct date
	{
		int day,month,year;
	}birthday;
	float salary;
}person,emprec;
/* give increments to employees if age is greater than 30 */
float increment(float sal,int year,int inc)
{
	if(CURRENT_YEAR - year > 30)
		sal += inc;
	return(sal);
}
void main()
{
 	int n=500;
	emprec per={"ABC XYZ",5,9,1979,4000.50};
	printf(" *** Employee Details *** \n");
	printf("Name :%s \n",per.name);
	printf("Birthdate:%d:%d:%d\n",per.birthday.day,per.birthday.month,per.birthday.year);
	printf("Salary :%6.2f \n\n",per.salary);
	per.salary=increment(per.salary,per.birthday.year,n);
 	printf(" *** Employee Details *** \n");
	printf("Name :%s \n",per.name);
	printf("Birthdate: %d:%d:%3d \n",per.birthday.day,per.birthday.month,per.birthday.year);
	printf("Salary :%6.2f \n",per.salary);
}