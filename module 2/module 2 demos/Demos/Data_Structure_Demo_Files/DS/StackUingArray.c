//Program for Stack implementation through Array

#include <stdio.h>
#include<ctype.h>
# define MAXSIZE 200

int stack[MAXSIZE];
int top;	//index pointing to the top of stack
void main()
{
void push(int);
int pop();
int will=1,i,num;

while(will ==1)
{
printf("\nMAIN MENU: \n	1.Add element to stack\n 2.Delete element from the stack #");
scanf("%d",&will);

switch(will)
{
case 1:
	printf(" \nEnter the data... #");
	scanf("%d",&num);
	push(num);
	break;
case 2: i=pop();
	printf(" \nValue returned from pop function is  #%d ",i);
	break;
default: printf("\nInvalid Choice . ");
}

printf("Do you want to do more operations on Stack ( 1 for yes, any other key to exit) #");
scanf("%d" , &will);
} //end of  outer while
getch();
}               //end of main


void push(int y)
{

if(top>MAXSIZE)
       {
       printf(" \n		STACK FULL");
       return;
       }
else
	{
	top++;
	stack[top]=y;
	}
}

int pop()
{
int a;
if(top<=0)
	{
	printf("\n		STACK EMPTY		");
	return 0;
	}
else
	{
	a=stack[top];
	top--;
	}
return(a);

}