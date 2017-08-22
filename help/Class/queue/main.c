#include "header.h"

int main()
{
    struct queue queue1;
    int choice;
    char ch;
    initialise(&queue1);
    do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Front of the queue1");
        printf("\n4. Rear of the queue1");
        printf("\n5. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(&queue1);
                    break;
            case 2: dequeue(&queue1);
                    break;
            case 3: front(&queue1);
                    break;
            case 4: rear(&queue1);
                    break;
            case 5: exit(0);
                    
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    printf("\n");
    return 0;
}