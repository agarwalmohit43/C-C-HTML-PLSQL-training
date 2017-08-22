/*Program to get and print the student details using structure variable as a pointer*/

#include<stdio.h>

struct stud
{
	int rollno;
	char nm[15];
};

void main()
{
	struct stud s1,*s2;
	s2=&s1;

	printf("Enter Roll No : ");
	scanf("%d",&(*s2).rollno);
	fflush(stdin);
	printf("Enter Name : ");
	scanf("%s",(*s2).nm);

	printf("\n\nRoll No : %d\n",(*s2).rollno);
	printf("\nName : %s\n\n",s2->nm);
}