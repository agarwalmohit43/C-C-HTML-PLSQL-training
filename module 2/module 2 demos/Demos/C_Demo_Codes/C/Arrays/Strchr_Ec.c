/*Program to print the echo character*/

#include <stdio.h>
#include <string.h>
void main(void)
{
	char *p;
	p = strchr("this@is a test", ' ');
	printf(p);
	printf("\n");
}
