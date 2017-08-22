/*Example for perror*/

#include<stdio.h>
#include<stdlib.h>
#include<error.h>

void main()
{
	FILE *fp;
	     
	if((fp=fopen("abc.txt","r"))==NULL)
	{
			perror("Error: ");
			printf("errno = %d.\n", errno);
	        exit(1);

	}
	fclose(fp);
}
