/*Program to read the content from the file*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *ftpr;
	char ch;

	ftpr=fopen("write_frmConsole.txt","r");
	if(ftpr==NULL)
	{
		printf("Error : Cannot open source file!");
		exit(0);
	}
	while(1)
	{
		ch=fgetc(ftpr);
		if(ch==EOF)
			break;
		else
			printf("%c",ch);
	}
	fclose(ftpr);
}
