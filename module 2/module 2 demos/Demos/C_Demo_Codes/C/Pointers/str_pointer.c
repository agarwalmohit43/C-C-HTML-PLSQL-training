#include<stdio.h>

void main()
{
	/*char str1[]="hello";
	char str2[10];

	char *s ="good morning";
	char *p;

	//str2 = str1;
	/*p = s;
	while(*p!='\0')
	{
	printf("%c",*p);
	p++;
	}*/
	char str1[]="hello";
	char *s ="hello";
	//str1 = 'Bye';
	s = "bye";
	//printf("%d",s);
	while(*s!='\0')
	{
		printf("%c",*s);
		s++;
	}
}