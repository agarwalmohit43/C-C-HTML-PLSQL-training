#include "header.h"

int main()
{
    struct stack list1;
    int choice;
    char ch;
    initialise(&list1);
    do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Top of the stack");
        printf("\n4. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(&list1);
                    break;
            case 2: pop(&list1);
                    break;
            case 3: top(&list1);
                    break;
            case 4: exit(0);
                    
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    printf("\n");
    return 0;
}