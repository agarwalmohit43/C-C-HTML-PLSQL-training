#include<stdio.h>
#include "exterarray.c"

//int arraysize(void);

arr1[] = {1,2,3};

void main()
{ 
	int index;
	for(index=0;index<3;index++)
	{
	printf("%d\t" ,arr1[index]);
	}
	printf("Result_firstfile= %d\n",sizeof(arr1));
	printf("Result_Secondfile= %d\n",arraysize());

}

