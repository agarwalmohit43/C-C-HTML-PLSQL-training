/*Example for Multi String*/

#include<stdio.h>
#include<string.h>

void dis(int,char [][10]);

void main()
{
	char str[10][10];
	int num=0;

	do
	{
		printf("String %d : ",num+1);
		scanf("%s",str[num]);
		//printf("%d",strcmpi(str[num++],"end"));

	}while(strcmpi(str[num++],"end"));

	dis(num-1,str);
}

void dis(int len,char str[][10])
{
	int index;
	printf("Entered Data\n");
	for(index=0;index<len;index++)
	{
		printf("%s\n",str[index]);
	}
}