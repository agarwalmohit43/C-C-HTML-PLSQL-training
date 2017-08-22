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
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Rear side of the queue");
        printf("\n4. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: queue(&list1);
                    break;
            case 2: dequeue(&list1);
                    break;
            case 3: rear(&list1);
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