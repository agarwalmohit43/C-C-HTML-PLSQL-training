//Program for Queue implementation through Array

#include <stdio.h>
#include<ctype.h>
#include<conio.h>
# define MAXSIZE 200

int q[MAXSIZE];
int front, rear;
void main()
{
void add(int);
int del();
int will=1,i,num;
front =0;
rear = 0;


printf(" Program for queue demonstration through array");

while(will ==1)
{
printf("\n			MAIN MENU: \n	1.Add element to queue \n	2.Delete element from the queue ");
scanf("%d",&will);

switch(will)
{
case 1:
	printf("\nEnter the data... #");
	scanf("%d",&num);
	add(num);
	break;
case 2: i=del();
	printf("\nValue returned from delete function is  #%d ",i);
	break;
default: printf("\nInvalid Choice ... ");
}

printf("\nDo U want more operations on Queue ( 1 for yes, any other key to exit) #");
scanf("%d" , &will);
} //end of  outer while
getch();
}               //end of main

void add(int a)
{

if(rear>MAXSIZE)
	{
	printf("\n\tQUEUE FULL");
	return;
	}
else
	{
	q[rear]=a;
	rear++;
	}
}

int del()
{
int a;
if(front == rear)
	{
	printf("\n\tQUEUE EMPTY");
	return(0);
	}
else
	{
	a=q[front];
	front++;
	}
	return(a);
}