#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fr,*fw;
	char content[30];

	fr=fopen("string_read.txt","r");

	if(fr==NULL)
	{
		printf("Error : Cannot open source file!");
		exit(0);
	}

	fw=fopen("string_write.txt","w");//c:\\string_write.txt
	
	if(fw==NULL)
	{
		printf("Error : Cannot open target file!");
		exit(0);
	}

	while(fgets(content,30,fr)!=NULL)
		fputs(content,fw);

	printf("Data wrote successfully !\n");

	fclose(fr);
	fclose(fw);
}