/*Example for Undef Macro*/

#include<stdio.h>
#define MAX 5
void add();
void disp();
void main()
{
	int sum=10;
	printf("Value of Max: %d",MAX);
	add();
	disp();
}

void add()
{
	//max is undefined
	int sum=20;
	sum=sum+MAX;		// it will show an error because max is undefined
	printf("Added Value: %d", sum);
}

void disp()
{
	#undef MAX	
	#define MAX 4
	printf("Value of Max :%d",MAX); // it will show an error because max is undefined
}