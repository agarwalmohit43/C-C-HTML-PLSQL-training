#include<stdio.h>

void main()
{
	int i=1,j;

	for(j=0;j<4;j++)
	{
		i=i<<1;
		printf("Left shift %d = %d\n",j,i);
	}

	printf("\n\n");

	for(j=0;j<4;j++)
	{
		i=i>>1;
		printf("Right shift %d=%d\n",j,i);
	}
}