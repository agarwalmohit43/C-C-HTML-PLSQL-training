#include "header.h"
void initialize(struct queue *ptr)
{
	ptr-> front=ptr->rear=NULL;
	
}
struct member *createqueue(char c)
{
	struct member *temp;
	temp=(struct member*)malloc(sizeof(struct member));
	if(temp==NULL)
	{
		printf("No memory allocated!");
		exit(0);
	}
	else
	{
		temp->ch=c;
		temp->next=NULL; //to end the linked list
	}
	return temp;
}


void insert(struct queue *ptr,char c)
//ptr is address of list1
{
	struct member *temp;
	
	temp=createqueue(c);
	if(ptr->front==NULL)
	{
		ptr->front=temp;
		ptr->rear=temp;

	}
	else
	{
		ptr->rear->next=temp;
		ptr->rear=temp;
	}
}

char end(struct queue *ptr)
{
	struct member *temp;
	char c='^';
	if(ptr->front==NULL)
	{
		printf("\n queue is empty! It will get underflow!!");
	}
	else
	{
		temp=ptr->front;
		ptr->front=temp->next;
		c=temp->ch;
		printf("\n successfully %d popped out",temp->ch);
		free(temp);
	
	}
	return c;
}


//void top(struct stack *ptr,int number[])
//{
//	struct member *temp;
//	int i;
//	if(ptr->top==NULL)
//	{
//		printf("Stack is empty");
//	}
//	else
//	{
//		temp=ptr->top;
//		for(i=0;i<6;i++)
//		{
//			printf("\n%d\n",temp->number[i]);
//		}
//	}
//}
/*void isEmpty(struct stack *ptr,int number[],int size)
{
	struct member *temp;
	if(ptr->top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Stack is not empty");
	}
}*/

