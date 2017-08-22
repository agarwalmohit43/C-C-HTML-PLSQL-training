/*Program demonstrates the usage of static value*/
#include<stdio.h>

void fun();
int fun1();

int a = 2;
void main()
{
	//int a =2;
	printf("value of a %d\n",fun1());
	printf("before calling fun\n");

	fun();

	printf("back to the main\n");
	fun();
}

void fun()
{
	auto int a=1;
	static int b=1;
	int i;
	for(i=0;i<3;i++)
	{
		printf("a=%d\tb=%d\n",a,b);
		a++;
		b++;
	}
}

int fun1()
{ 
	a = a+1;
}