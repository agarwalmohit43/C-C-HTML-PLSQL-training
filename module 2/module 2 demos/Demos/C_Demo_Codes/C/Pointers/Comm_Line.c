#include<stdio.h>

void main(int argc, char *argv[])
{
	int i;
	printf("Total numbers of arguments : %d",argc);

	printf("\n\nList of the arguments :\n");
	printf("--------------------------\n");
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
}