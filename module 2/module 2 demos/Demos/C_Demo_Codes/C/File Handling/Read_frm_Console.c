/*Program to read data from console and write to the file*/

#include<stdio.h>
void main()
{
	FILE *fw;
	char message;
	fw=fopen("write_frmConsole.txt","w");
	
	if(fw==NULL)
	{
		printf("Error : Cannot open target file !");
		exit(0);
	}
	printf("Enter any string :");
	while(1)
	{
		message=getchar();
		if(message=='0')
			break;
		else
			fputc(message,fw);
	}
			
	printf("Data wrote successfully ! \n");
	fclose(fw);
}
