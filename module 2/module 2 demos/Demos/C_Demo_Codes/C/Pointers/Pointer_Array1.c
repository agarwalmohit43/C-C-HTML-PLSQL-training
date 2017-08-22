/*Example for Pointer and Array*/

# include <stdio.h>
void main()
{
	int ar[5]={10,20,30,40,50};
	int *ptr;
	int i;
	ptr=ar;
	for(i=0;i<5;i++)
	{
	   //printf("%d-%d\n",(ar+i),*(ar+i));
	   printf("%d-%d\n",&ar[i],(ptr[i]));
	   //ptr++;
	}
}

