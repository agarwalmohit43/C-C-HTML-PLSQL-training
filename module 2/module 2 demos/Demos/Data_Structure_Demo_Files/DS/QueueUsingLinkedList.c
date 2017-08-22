//Program for Queue implementation through Linked List

#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node  *link;
}     ;
struct node *front, *rear;
void main()
{

int wish,will,a,num;
void add(int);

wish=1;

front=rear=NULL;

printf("\tProgram for Queue as Linked List demo.. ");
while(wish == 1)
	{
		printf(" \nMain Menu \n 1.Enter data in queue \n2.Delete from queue #");
	scanf("%d",&will);
	switch(will)
		{
		case 1:
			printf("\nEnter the data #");
			scanf("%d",&num);
			add(num);
		
			break;
		case 2:
			a=del();
			printf("\nValue returned from front of the queue is #%d",a);
			break;
		default:
			printf("\nInvalid choice");
		}
	printf("\nDo you want to continue, press 1 #");
	scanf("%d",&wish);
	}
getch();
}

void add(int y)
{
struct node *ptr;
ptr=malloc(sizeof(struct node));
ptr->data=y;
ptr->link=NULL;
if(front ==NULL)
	{
	front = rear= ptr;
	}
else
	{
	rear->link=ptr;
	rear=ptr;
	}
}


int  del()
{
int num;
if(front==NULL)
	{
	printf("\n\tQUEUE EMPTY");
	return(0);
	}
else
	{
	num=front->data;
	front = front->link;
	printf("\n Value returned by delete function is # %d ",num);
	return(num);
	}
}
