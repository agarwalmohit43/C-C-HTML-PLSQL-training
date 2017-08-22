#include "header.h"

int main()
{
	struct linkedlist list1;
	int choice;
	char ch;
	initialize(&list1);

	do
	{
		system("cls");
		printf("\n******MENU*******");
		printf("\n1.Add customer");
		/*printf("\n2.Add employee at end");*/
		/*printf("\n3.Delete employee from beg");*/
		printf("\n2.Delete customer");
		/*printf("\n5.Search employee");*/
		/*printf("\n6.delete record from anywhere");*/
		printf("\n3.Display customer");
		printf("\n4.Sort");
		printf("\n5.Top 3 customers");
		printf("\n6.Display by bill month");
		printf("\n7.Display by consumer Number");
		printf("\n8.Write content to file");
		printf("\n9.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:addcustomeratbeg(&list1);
				break;
		/*case 2:addemployeeatend(&list1);
				break;*/
		/*case 3:deleteatbeg(&list1);
				break;*/
		case 2:deletecustomeratend(&list1);
				break;
		/*case 5:search(&list1);
				break;*/
		/*case 6:deleteRecord(&list1);
				break;*/
		case 3:displaycustomers(&list1);
				break;
		case 4:sort(&list1);
				break;
		case 5:top3Customers(&list1);
				break;
		case 6:displayByBIllMonth(&list1);
				break;
		case 7:displayByConsumerNo(&list1);
				break;
		case 8:writeToFile(&list1);
				break;
		case 9:exit(0);
		default:
				break;
		}
		printf("\n Do you want to continue[y/n]?\n");
		scanf(" %c",&ch);  //space before %c for fflush
	}while(ch=='y' || ch=='Y');
	
}