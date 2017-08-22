#include<stdio.h>

void main()
{
	char names[5][10]={"aaa","bbb","rrrr","gggg","ppp"};
	int index;
	char discriminent;
	printf("\nOrignal:%s\t%s",&names[2][0],&names[3][0]);

	for(index=0;index<=9;index++)
	{
		discriminent=names[2][index];
		names[2][index]=names[3][index];
		names[3][index]=discriminent;
	}

	printf("\nNew :%s\t%s",&names[2][0],&names[3][0]);

}