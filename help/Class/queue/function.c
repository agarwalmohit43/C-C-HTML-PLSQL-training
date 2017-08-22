#include "header.h"

void initialise(struct queue *ptr)
{
    ptr->front=NULL;
    ptr->rear=NULL;
   
}

struct queuedata* createnode()
{
    struct queuedata *temp;
    temp=(struct queuedata*)malloc(sizeof(struct queuedata));
    if(temp==NULL)
    {
        printf("\nMemonry not available");
        return NULL;
    }
    else
    {
         printf("\nEnter value: ");
         scanf("%d",&temp->data);
        temp->next=NULL;
    }
    return temp;
}

void enqueue(struct queue *ptr)
{
    struct queuedata *temp;
    temp=createnode();
    if(temp==NULL)
    {
        printf("\nMemonry not available");
       exit(0);
    }
    else
    {
        if(ptr->front==NULL)
        {
            ptr->front=temp;
        }else
        {
            temp->next=ptr->front;
            ptr->front=temp;
        }
    }

}

void dequeue(struct queue *ptr)
{
    struct queuedata *temp,*temp2;
    if(ptr->front==NULL)
    {
        printf("\nList is empty");
    }else if(ptr->front==ptr->rear)
    {
        
        temp=ptr->front;
        ptr->front=NULL;
        ptr->rear=NULL;
        printf("\n%d\n -> Dequeued",temp->data);
        free(temp);
       
    }
    else
    {   
        temp=ptr->front;
        temp2=temp;
        while(temp->next!=NULL)
        {   
            temp2=temp;
            temp=temp->next;   
        }
        temp2->next=NULL;
        ptr->rear=temp2;
        printf("\n%d\n -> Dequeued",temp->data);
        free(temp);
         
    }
  
}
void front(struct queue *ptr)
{
    if(ptr->front==NULL)
    {
        printf("\nqueue is empty");
    }
    else
    {
        printf("%d -> is at the front of the queue",ptr->front->data);
    }
}

void rear(struct queue *ptr)
{
    if(ptr->front==NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("%d -> is at the front of the queue",ptr->rear->data);
    }
}