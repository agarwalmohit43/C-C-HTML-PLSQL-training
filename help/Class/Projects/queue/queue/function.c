#include "header.h"

void initialise(struct stack *ptr)
{
    ptr->rear=NULL;
    ptr->end=NULL;
   
}

struct stackdata* createnode()
{
    struct stackdata *temp;
    temp=(struct stackdata*)malloc(sizeof(struct stackdata));
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

void push(struct stack *ptr)
{
    struct stackdata *temp;
    temp=createnode();
    if(temp==NULL)
    {
        printf("\nMemonry not available");
       exit(0);
    }
    else
    {
        if(ptr->top==NULL)
        {
            ptr->top=temp;
        }else
        {
            temp->next=ptr->top;
            ptr->top=temp;
        }
    }

}

void pop(struct stack *ptr)
{
    struct stackdata *temp;
    if(ptr->top==NULL)
    {
        printf("\nStack is empty");
    }else
    {
        temp=ptr->top;
        ptr->top=ptr->top->next;
        printf("\nElement poped out: %d\n",temp->data);
        free(temp);
        
    }
}
void top(struct stack *ptr)
{
    if(ptr->top==NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("%d",ptr->top->data);
    }
}