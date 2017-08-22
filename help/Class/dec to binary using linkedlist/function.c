#include "header.h"

void initialize(struct stack *ptr)
{
    ptr->top=NULL;
}

struct num* createstack(int value)
{
    struct num *temp;
    temp=(struct num*)malloc(sizeof(struct num));
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
void push(struct stack *ptr,int value)
{
    struct num *temp;
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
int pop(struct stack *ptr)
{
    struct num *temp;
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

int isempty(struct stack *ptr)
{
    if(ptr->top==NULL)
        return 0;
    return 1;
}
/*void peep(struct stack *ptr)
{
   if(ptr->top!=NULL)
   {
       printf("\nThe top of the stack is:%d\n",ptr->top->number);
       
   }
   else
   {
       printf("\nStack is empty.."); 
   }
}*/