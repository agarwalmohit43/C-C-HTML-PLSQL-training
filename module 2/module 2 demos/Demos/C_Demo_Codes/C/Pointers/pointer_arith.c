/*Example for Pointer Arithmetic*/
#include<stdio.h>
void main()
{
	int empno=3313,*empno_ptr;
	float sal=2500.34,*sal_ptr;
	char gender='F',*gender_ptr;

	printf("Employee Number=%d\n",empno);
	printf("Salary=%f\n",sal);
	printf("Gender=%c\n",gender);

	empno_ptr=&empno;
	sal_ptr=&sal;
	gender_ptr=&gender;

	printf("Original value in empno_ptr=%u\n",*empno_ptr);
	printf("Original value in sal_ptr=%f\n",*sal_ptr);
	printf("Original value in gender_ptr=%c\n",*gender_ptr);

	//*empno_ptr++; *sal_ptr++; *gender_ptr++;
	//printf(

	printf("New value in empno_ptr=%u\n",++(*empno_ptr));
	//printf("%d",i);
	//printf("New value in sal_ptr=%f\n",*sal_ptr);
	//printf("New value in gender_ptr=%c\n",*gender_ptr);
}