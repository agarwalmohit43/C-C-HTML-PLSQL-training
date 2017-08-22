/*Example for Unary Operator*/
#include<stdio.h>

void main( )
{
	int i = 3,j = 4,k;
	printf("i++=%d\n",i++);
	k = i++ + --j;
	printf("j++=%d\n",j++);
	printf("i = %d, j = %d, k = %d\n",i,j,k);
	
}