/*Example for Pointer to function*/

#include<stdio.h>
int stud_detail(int rollno)
{
	return rollno;
}
float mark_detail(float mark)
{
	return mark;
}

void main()
{
	int (*s_ptr)(int); /*declaring pointer to function*/
	float (*m_ptr)(float); /*declaring pointer to function*/

	int rollno=5;
	float mark=1.5;

	s_ptr=stud_detail; /*assigning address of function stud_detail to s_ptr*/
	m_ptr=mark_detail; /*assigning address of function mark_detail to m_ptr*/

	printf("RollNo=%d Mark=%f\n",s_ptr(rollno),m_ptr(mark));
}