/*Example for Break and continue*/



#include<stdio.h>
#include<stdlib.h>

void main()
{
	int count;

	printf("Break Example :\n");

	for(count=0;count<10;count++)
	{
		if(count==3)
			break;//show example with exit(0);
		//exit(2);
		//exit(0);
		printf("\ncount=%d",count);
	}
	
	printf("\n\nContinue Example :\n");

	for(count=0;count<10;count++)
	{
		if(count==5)
			continue;
		printf("\ncount=%d",count);
	}

	

	printf("\n");
}