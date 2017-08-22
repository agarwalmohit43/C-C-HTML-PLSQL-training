#include "header.h"


void initialize(struct linkedlist *ptr)
{
	ptr->first=ptr->last=NULL;
}
struct customer *createcustomer()
{
	struct customer *temp;
	temp=(struct customer*)malloc(sizeof(struct customer));
	if(temp==NULL)
	{
		printf("no memory allocated");
		exit(0);
	}
	else
	{
        printf("\n Enter Bill Month (*Ex 1->JAN): ");
		scanf("%d",&temp->billMonth);
		printf("\n Enter consumer no:");
		scanf("%d",&temp->consumerNo);
		printf("\n Enter consumer name:");
		scanf("%s",temp->consumerName);
		printf("\n Enter unit consumed:");
		scanf("%f",&temp->unitConsumed);
		temp->next=NULL;
	}
	return temp;
}

void addcustomeratbeg(struct linkedlist *ptr)
{
	struct customer *temp;
	temp=createcustomer();
	if(ptr->first==NULL)
	{
		ptr->first=temp;
		ptr->last=temp;
	}
	else
	{
		temp->next=ptr->first;
		ptr->first=temp;
	}

}
//void addemployeeatend(struct linkedlist *ptr)
//{
//
//
//	struct employee *temp;
//	temp=createemployee();
//	if(ptr->first==NULL)
//	{
//		ptr->first=temp;
//		ptr->last=temp;
//	}
//	else
//	{
//		ptr->last->next=temp;
//		ptr->last=temp;
//	}
//
//}
//void deleteatbeg(struct linkedlist *ptr)
//{
//	struct employee *temp;
//	if(ptr->first==NULL)
//	{
//		printf("\n List is empty...!!!");
//	}
//	else
//	{
//		temp=ptr->first;
//		ptr->first=temp->next;
//		free(temp);
//		printf("\n Employee is deleted from list");
//	}
//
//}

void deletecustomeratend(struct linkedlist *ptr)
{
	struct customer *temp1,*temp2;
	if(ptr->first==NULL)
	{
		printf("List id empty");
	}
	else if(ptr->first==ptr->last)
	{
		temp1=ptr->first;
		ptr->first=ptr->last=NULL;
		free(temp1);
	}
	else
	{
		temp1=ptr->first;
		while((temp1->next!=NULL))
		{
			temp2=temp1;
			temp1=temp1->next;
		}
		ptr->last=temp2;
		temp2->next=NULL;
		free(temp1);
	}
}

//void search(struct linkedlist *ptr)
//{
//	
//	int i=0,num,flag=0;
//	struct employee *temp;
//	if(ptr->first==NULL)
//	{
//		printf("List is empty");
//	}
//	else
//	{
//		printf("enter id");
//		scanf("%d",&num);
//		temp=ptr->first;
//		while(temp!=NULL)
//		{
//			if(num==temp->empid)
//			{
//				flag=1;
//				break;
//			}
//			temp=temp->next;
//		}
//		if(flag==1)
//		{
//			printf("\n%d\t%s\t%f",temp->empid,temp->empname,temp->salary);
//		}
//		else
//		{
//			printf("\nRecord not found");
//		}
//	}
//}
//	/*printf("enter id");
//		scanf("%d",&num);
//	temp=findemployee(&ptr,num);
//	if(temp!=NULL)
//		printf("\n%d\t%s\t%f",temp->empid,temp->empname,temp->salary);
//	else
//	{
//		printf("\nRecord not found");
//	}*/
//}

//struct employee *findemployee(struct linkedlist *ptr,int id)
//{
//	int flag=0;
//	struct employee *temp;
//	temp=ptr->first;
//		while(temp!=NULL)
//		{
//			if(id==temp->empid)
//			{
//				flag=1;
//				break;
//			}
//			temp=temp->next;
//		}
//		if(flag==1)
//		{
//			return temp;
//		}
//		else
//		{
//			return NULL;
//		}
//	
//
//}

void displaycustomers(struct linkedlist *ptr)
{
	struct customer *temp;
	if(ptr->first==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=ptr->first;
		while(temp!=NULL )
		{
			printf("\n%d\t%d\t%s\t%f",temp->billMonth,temp->consumerNo,temp->consumerName,temp->unitConsumed);
			temp=temp->next;
		
		}
	}
}
//void deleteRecord(struct linkedlist *ptr)
//{
//	struct employee *temp1,*temp2;
//	int num;
//	if(ptr->first==NULL)
//	{
//		printf("List is empty");
//	}else
//	{
//		printf("\n Enter employee id to be deleted");
//		scanf("%d",&num);
//		temp1=findemployee(ptr,num);
//		if(temp1!=NULL)
//		{
//			if(temp1==ptr->first)
//				deleteatbeg(ptr);
//			else if(temp1==ptr->last)
//				deleteatend(ptr);
//			else
//			{
//				temp2=ptr->first;
//				while(temp2->next!=temp1)
//				{
//					temp2=temp2->next;
//				}
//				temp2->next=temp1->next;
//				free(temp1);
//			}
//		}
//	}
//}
void sort(struct linkedlist *ptr)
{
	int flag=1,didswap=1;
	struct customer *prev,*temp;
	struct customer *curr;
	curr=ptr->first;
	prev=ptr->first;
	for(;didswap;)
	{
		flag=1;
		didswap=0;
		prev=ptr->first;
		for(curr=ptr->first;curr->next!=NULL;)
		{
			if((curr->unitConsumed)<(curr->next->unitConsumed))
			{
				if(flag)
				{ptr->first=curr->next;}
				else
				{prev->next=curr->next;}
				temp=curr->next->next;
				curr->next->next=curr;
				prev=curr->next;
				curr->next=temp;
				didswap=1;
			}
			else
			{
				prev=curr;
				curr=curr->next;
			}
			flag=0;
		}
	}
	displaycustomers(ptr);
}

void top3Customers(struct linkedlist* ptr)
{
	struct customer *temp;
	int i=0;
	if(ptr->first==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=ptr->first;
		while(temp!=NULL && i<3 )
		{
			printf("\n%d\t%d\t%s\t%f",temp->billMonth,temp->consumerNo,temp->consumerName,temp->unitConsumed);
			temp=temp->next;
			i++;
		
		}
	}
}

void displayByBIllMonth(struct linkedlist *ptr)
{
	
	int i=0,month,flag=0;
	struct customer *temp;
	if(ptr->first==NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("enter month");
		scanf("%d",&month);
		temp=ptr->first;
		while(temp!=NULL)
		{
			if(month==temp->billMonth)
			{
				flag=1;
				printf("\n%d\t%d\t%s\t%f",temp->billMonth,temp->consumerNo,temp->consumerName,temp->unitConsumed);
			}
			temp=temp->next;
		}
		if(flag==0)
		{
			printf("\nRecord not found");
		}
	}
}

void displayByConsumerNo(struct linkedlist *ptr)
{
	
	int i=0,consumerNumber,flag=0;
	struct customer *temp;
	if(ptr->first==NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("enter consumer number");
		scanf("%d",&consumerNumber);
		temp=ptr->first;
		while(temp!=NULL)
		{
			if(consumerNumber==temp->consumerNo)
			{
				flag=1;
				printf("\n%d\t%d\t%s\t%f",temp->billMonth,temp->consumerNo,temp->consumerName,temp->unitConsumed);
			}
			temp=temp->next;
		}
		if(flag==0)
		{
			printf("\nRecord not found");
		}
	}
}

void writeToFile(struct linkedlist *ptr)
{
	FILE *fp;
	struct customer *temp;
	fp=fopen("consumer.dat","a+");

	temp=ptr->first;
	while(temp != NULL)
	{
		fprintf(fp,"\n%d\t%d\t%s\t%f\t",temp->billMonth,temp->consumerNo,temp->consumerName,temp->unitConsumed);
		temp=temp->next;
	}
	printf("Data is succesfully added to the file");
}

