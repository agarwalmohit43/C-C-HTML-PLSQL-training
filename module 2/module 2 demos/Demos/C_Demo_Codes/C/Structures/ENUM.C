/*Program to demonstrate enum by printing month and its month name */

/*#include <stdio.h> 
void main()
{
	enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
	enum Days TheDay;
	int day = 0;
	printf("Please enter the day of the week (0 to 6)\n");
	scanf("%d",&day);
	//TheDay = Days(day);

	if(day == Sunday || day == Saturday)
		printf("Hurray it is the weekend\n");
	else
		printf("Curses still at work\n");


}*/



#include <stdio.h>

enum months { JAN =3 , FEB=1, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

void main()
{ 
	enum months month; 
	const char *monthName[] = { "", "January","","February", "March", 
				    "April", "May", "June", "July",
		                    "August", "September", "October",
				    "November", "December","abc","def" };
   	for ( month = FEB; month <= DEC; month++ ) 
	{
		printf( "%2d%11s\n", month, monthName[ month ] );
	} 
}
  
