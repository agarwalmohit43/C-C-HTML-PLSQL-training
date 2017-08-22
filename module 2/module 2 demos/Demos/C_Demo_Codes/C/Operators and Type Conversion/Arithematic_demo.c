/*Program to calculate number of months and days*/

# include <stdio.h>

void main( )
{
	int month, day=155 ; 
	/* Variable declaration */
	month = day / 30 ;
	day = day % 30 ;
	printf("No.of months=%d\n No.of Days = %d\n",month,day); 
	/* d to print an integer value. 
	* In  output %d gets replaced by value of month and day */
}
