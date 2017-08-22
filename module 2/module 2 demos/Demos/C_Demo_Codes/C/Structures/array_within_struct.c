/*Program to print today's date by using array within a structure for weekday and month*/
#include "date.h"
void main()
{
	struct date today={"Sunday",1,11,"May",2011};
	printf("\nToday's date id %s %d-%d-%d\n",today.weekday,today.day,today.month,today.year);
}
