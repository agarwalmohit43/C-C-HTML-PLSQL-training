#include "header.h"

void initialize(struct linkedlist *ptr)
{
    ptr->top=NULL;
}

struct stack* createstack(int value)
{
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    if(temp!=NULL)
    {
        temp->number=value;
        temp->next=NULL;
    }
    else
    {
        printf("\nNo memory allocated...");
        exit(0);
    }

    return temp;
}
void push(struct linkedlist *ptr,int value)
{
    struct stack *temp;
    temp=createstack(value);
    if(ptr->top!=NULL)
    {
        temp->next=ptr->top;
        ptr->top=temp;
    }
    else
    {
        ptr->top=temp;
    }
}
int pop(struct linkedlist *ptr)
{
    struct stack *temp;
    if(ptr->top!=NULL)
    {
       temp=ptr->top;
       ptr->top=temp->next;
      // printf("\n%d popped successfully....\n\n",temp->number);
       return temp->number;
       free(temp);
    }
    else
    {
        printf("\nStack is empty..\n");
    }
}

void peep(struct linkedlist *ptr)
{
   if(ptr->top!=NULL)
   {
       printf("\nThe top of the stack is:%d\n",ptr->top->number);
       
   }
   else
   {
       printf("\nStack is empty.."); 
   }
}