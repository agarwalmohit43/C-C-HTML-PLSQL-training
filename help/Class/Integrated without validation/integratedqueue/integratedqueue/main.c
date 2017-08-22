//Q2. Write a program to accept a file name from a command line .
//If the file exists then read the text of file and store it into three queues.
//First queue will contain all upper case alphabets. 
//Second queue will contain all lower case alphabets. 
//Third queue will contain remaining data (digits, special characters etc.). 
//Store first queue’s data into File1.txt by changing their case. 
//Store second queue’s data in file2.txt by changing their case and 
//store third queue data to a file3.txt.
//with file name
#include<stdio.h>
#include<stdlib.h>
#include "header.h"
int main(int argc,char *argv[])
{
	int i;
	FILE *fp1,*fp2;
	char message,ch;
	struct queue queue1;
	struct queue queue2;
	struct queue queue3;
	initialize(&queue1);
	initialize(&queue2);
	initialize(&queue3);
	printf("\n");	
	if(argc==1)
	{
		printf("\n no arguments passed to main..!!");
	}
	
	printf("\n");
	
	//file opening
	fp1=fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("\n File does not exists!");
		exit(1);
	}	
	
	while((ch=getc(fp1))!=EOF)
	{
		if(ch>='a'&&ch<='z')
		{
			insert(&queue1,ch);
			
			//ch=toupper(ch);
			//putc(ch,fp2);
	

		}
		else if(ch>='A'&&ch<='Z')
		{
			insert(&queue2,ch);
		}
		else
		{
			insert(&queue3,ch);
		}
	}
	if((fp2=fopen("upper.txt","w"))==NULL)
	{
		printf("\n \a Not opened in write mode..!!");
		exit(1);
	}

	ch=end(&queue1);
	while(ch!='^')
	{
		ch=toupper(ch);
		putc(ch,fp2);
		ch=end(&queue1);
	}
	fclose(fp2);
	if((fp2=fopen("lower.txt","w"))==NULL)
	{
		printf("\n \a Not opened in write mode..!!");
		exit(1);
	}

	ch=end(&queue2);
	while(ch!='^')
	{
		ch=tolower(ch);
		putc(ch,fp2);
		ch=end(&queue2);
	}
	fclose(fp2);
	if((fp2=fopen("special.txt","w"))==NULL)
	{
		printf("\n \a Not opened in write mode..!!");
		exit(1);
	}

	ch=end(&queue3);
	while(ch!='^')
	{
		
		putc(ch,fp2);
		ch=end(&queue3);
	}
	fclose(fp1);
	fclose(fp2);

	printf("\n");
	return 0;

}

