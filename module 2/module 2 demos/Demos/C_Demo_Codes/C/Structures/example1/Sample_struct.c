/* Program to print today's date in the console by holding the date members in the form of structures*/

#include "date.h"
void main()
{
	struct date today;
	today.day=11;
	printf("Enter Month");
	scanf("%[^\n]",today.month);
	today.year=2005;
	printf("\nToday's date id %d-%s-%d\n",today.day,today.month,today.year);
}
