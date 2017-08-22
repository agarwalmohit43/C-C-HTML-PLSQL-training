#include<stdio.h>
int* check(int*, int*);
void main()
{
	int a,b,*c;
	int* check(int*,int*);
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	c=check(&a,&b);
	printf("\n Greater number:%d\n",*c);
}

int* check(int *p,int *q)
{
	if(*p>=*q)
		return(p);
	else
		return (q);
}