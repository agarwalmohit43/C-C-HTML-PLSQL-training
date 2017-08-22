#include "header.h"

int main()
{
    struct linkedlist list1;
    int choice;
    char ch;
    initialise(&list1);
    do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Add Employee at beginning");
        printf("\n2. Add Employee at end");
        printf("\n3. Delete Employee at beginning");
        printf("\n4. Delete Employee at end");
        printf("\n5. Delete Employee using Employee Id");
        printf("\n6. Display Employee records");
        printf("\n7. Search Employee records");
        printf("\n8. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addemployeesatbeg(&list1);
                    break;
            case 2: addemployeesatend(&list1);
                    break;
            case 3: delemployeesatbeg(&list1);
                    break;
            case 4: delemployeesatend(&list1);
                    break;
            case 5: deleteusingemployeeid(&list1);
                    break;
            case 6: displayemployees(&list1);
                    break;
            case 7: searchemployee(&list1);
                    break;
            case 8:exit(0);
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    printf("\n");
    return 0;
}