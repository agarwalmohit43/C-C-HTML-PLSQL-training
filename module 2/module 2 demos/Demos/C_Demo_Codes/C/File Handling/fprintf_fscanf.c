/* This program is taking input from keyboard and writing it to the file and then printing on the screen */


#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	FILE *fp; char data[80];
	if ((fp=fopen("test.txt","w"))==NULL)
	{
		printf("Cannot open the file \n"); exit(0);
	}
	fscanf(stdin,"%[^\n]",data);/* reading from the keyboard  */
	fprintf(fp,"%s",data); 	/* writing to the file */
	fclose(fp);
	if((fp=fopen("test.txt","r"))==NULL)
	{
	   printf("Cannot open the file \n");
	   exit(0);
	}
	fscanf(fp,"%[^\n]",data); 	/* reading from the file */
	fprintf(stdout,"%s",data);	/* printing on the screen */
} 






