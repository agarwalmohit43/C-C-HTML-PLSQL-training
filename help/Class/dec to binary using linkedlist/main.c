#include "header.h"

int main()
{
    int num;
    struct stack stack1;
    initialize(&stack1);
    printf("\nEnter the number: ");
    scanf("%d",&num);
    while((num!=0))
    {
        push(&stack1,num%2);
        num=num/2;
    }
    printf("The binary equivalent is: ");
    while(isempty(&stack1))
    {
          printf("%d",pop(&stack1));
    }
    printf("\n");
}
