
/*Example for String copy*/

#include<string.h>
#include<stdio.h>

int main(void)
{
	char mystring[80]= "hi";
	strcpy(mystring, "hello");
	printf("%s", mystring);
}