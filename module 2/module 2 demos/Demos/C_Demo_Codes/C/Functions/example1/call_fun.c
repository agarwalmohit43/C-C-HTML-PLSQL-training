/*Example of function usage*/
#include <stdio.h>
#include "sub.h"
void main()
{
	printf("You are in main function, before function call\n");
	sub();		//Function Call
	printf("You are back in main function, after function call\n");
}
