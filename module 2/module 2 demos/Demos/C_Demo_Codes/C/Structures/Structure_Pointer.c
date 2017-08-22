/*Program to maintain employee details by allocating memory by using pointer to the structure*/

# include <stdio.h>
# include <malloc.h>
# include <string.h>
void main()
{
	int n,i;
	typedef struct 
	{
		int empno;
		char *name;
	}emp;
	emp *empptr;
	char name[80] ;
	printf("Enter total no. of employees:");
	scanf("%d",&n);
	fflush(stdin);
	empptr = (emp *) malloc(n * sizeof(emp));
	for(i = 0 ; i < n ; i++)
	{
		printf("\n Enter empno of employee (%d) :",i+1);
		scanf("%d",&empptr[i].empno);
		fflush(stdin);
		printf("\n Enter name :");
		scanf("%[^\n]",name);
		fflush(stdin);
		empptr[i].name = (char *) malloc(strlen(name) * sizeof(char) + 1 );
		strcpy(empptr[i].name, name) ;
	}                                  
	for(i=0;i < n ; i++) 
	{
        	printf("\nno-%d \tname-%s",empptr[i].empno,empptr[i].name);
	}
}
