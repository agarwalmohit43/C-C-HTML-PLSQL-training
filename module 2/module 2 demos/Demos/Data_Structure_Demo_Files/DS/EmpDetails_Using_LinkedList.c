/* Write a C program to illustrate the operations of singly linked list */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 30

struct EMP
{
	int  empno;
	char empName[MAX];
    	char designation[MAX];
    	struct EMP *next;
};

/*********************************************************************/
/* Function to insert a node at the front of the linked list.        */
/* front: front pointer, id: employee ID, name: employee name        */
/* desg: Employee designation 					     */
/* Returns the new front pointer.                                    */
/*********************************************************************/

struct EMP* insert(struct EMP *front, int id, char name[], char desg[])
{
    struct EMP *newnode;

    newnode = (struct EMP*) malloc(sizeof(struct EMP));

    if (newnode == NULL)
    {
		  printf("\nAllocation failed\n");
        exit(2);
    }
    newnode->empno = id;
    strcpy(newnode->empName, name);
     strcpy(newnode->designation, desg);
    newnode->next = front;
    front = newnode;
    return(front);
}                            	/*End of insert() */

/* Function to display a node in a linked list */
void printNode(struct EMP *p)
{
	 printf("\nEmployee Details...\n");
	 printf("\nEmp No 	  : %d", p->empno);
	 printf("\nName           : %s", p->empName);
	 printf("\nDesignation    : %s\n", p->designation);
	 printf("-------------------------------------\n");
}                              	/*End of printNode() */

/* ********************************************************/
/* Function to deleteNode a node based on employee number     */
/* front: front pointer, id: Key value                    */
/* Returns: the modified list.                            */
/* ********************************************************/

struct EMP* deleteNode(struct EMP *front, int id)
{
    struct EMP *ptr;
    struct EMP *bptr;    /* bptr is pointing to the node behind ptr */


    if (front->empno == id) 
    {
	ptr = front;
	printf("\nNode deleted:");
        printNode(front);
        front = front->next;
	free(ptr);
        return(front);
    }

    for(ptr=front->next, bptr=front; ptr!=NULL; ptr=ptr->next, bptr=bptr->next)
    {
	if (ptr->empno == id)
	{
                printf("\nNode deleted:");
		printNode(ptr);
		bptr->next = ptr->next;
		free(ptr);
		return(front);
        }
    }
    printf("\nEmployee Number %d not found ", id);
    return(front);
}                             	/*End of deleteNode() */

/*****************************************************************/
/* Function to search the nodes in a linear fashion based emp ID */
/* front: front pointer, key: key ID.                             */
/*****************************************************************/
void search(struct EMP *front, int key)
{
	 struct EMP *ptr;

	 for (ptr = front; ptr != NULL; ptr = ptr -> next)
	 {
		  if (ptr->empno == key)
		  {
            			printf("\nKey found:");
				printNode(ptr);
            			return;
        	}	
    	 }
	 printf("\nEmployee Number %d not found ", key);
}                          	/*End of search() */

/* Function to display the linked list */
void display(struct EMP *front)
{
	 struct EMP *ptr;

	 for (ptr = front; ptr != NULL; ptr = ptr->next)
	 {
		  printNode(ptr);
	 }
}                        	/*End of display() */

/* Function to display the menu of operations on a linked list */
void menu()
{
	 printf("---------------------------------------------\n");
	 printf("Press 1 to INSERT a node into the list       \n");
	 printf("Press 2 to DELETE a node from the list       \n");
	 printf("Press 3 to DISPLAY the list                  \n");
	 printf("Press 4 to SEARCH the list                   \n");
	 printf("Press 5 to EXIT                              \n");
	 printf("---------------------------------------------\n");
}                     	/*End of menu() */

/* Function to select the option */
char option()
{
	 char choice;

	 printf("\n\n>> Enter your choice: ");
	 switch(choice=getche())
	 {
		  case '1':
		  case '2':
        	  case '3':
        	  case '4':
		  case '5':   return(choice);
        	  default :    printf("\nInvalid choice.");
	 }
	 return choice;
}       					/*End of option() */

/* The main() program begins */
void main()
{
    struct EMP *linkList;
    char name[21], desig[51];
    char choice;
    int eno;

    linkList = NULL;

    printf("\nWelcome to demonstration of singly linked list\n");

    menu();     		/*Function call */

    do {
		  choice = option();          /*to choose oeration to be performed */

		  switch(choice)
		  {
				case '1': printf("\nEnter the Employee Number      : ");
							 scanf("%d", &eno);

							 printf("Enter the Employee name        : ");
							 fflush(stdin);
							 gets(name);

							 printf("Enter the Employee Designation : ");
							 gets(desig);

							 linkList = insert(linkList, eno, name, desig);
							 break;

				case '2': printf("\n\nEnter the employee number to be deleted: ");
							 scanf("%d", &eno);

							 linkList = deleteNode(linkList, eno);
							 break;

				case '3': if (linkList == NULL)
							 {
								printf("\nList empty.");
								break;
							 }
							 display(linkList);
							 break;

				case '4': printf("\n\nEnter the employee number to be searched: ");
							 scanf("%d", &eno);

							 search(linkList, eno);
							 break;

				case '5': break;
        }
	 } while (choice != '5');
}     								/*End fo main()*/

