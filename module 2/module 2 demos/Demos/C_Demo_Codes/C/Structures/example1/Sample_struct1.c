/*Program to print yesterday,today and tomorrow's date by copying structure*/

#include "date.h"

void main()
{
	struct date tomorrow={"March",1,2011},yesterday, today;
	 /* copying element by element basis */
	strcpy(today.month,tomorrow.month);
	today.day=tomorrow.day;
	today.year=tomorrow.year;
	 /* copying entire structure to another structure */
	yesterday=today;
	
	printf("\nYesterday's date id %d-%s-%d\n",yesterday.day,yesterday.month,yesterday.year);
	printf("\nToday's date id %d-%s-%d\n",today.day,today.month,today.year);
	printf("\nTomorrow's date id %d-%s-%d\n",tomorrow.day,tomorrow.month,tomorrow.year);
}
