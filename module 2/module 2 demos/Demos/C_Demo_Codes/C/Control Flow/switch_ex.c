/**
 ** This example contains a switch statement that performs
 ** the same statement for more than one case label.
 **/

#include <stdio.h>

void main()
{
	int month;
	/* Read in a month value */
	printf("Enter month: ");
	scanf("%d", &month);
	/* Tell what season it falls into */
	switch (month)
	{
	     	case 12:
		case 1:
		case 2:
			printf("month %d is a winter month\n", month);
			break;
		case 3:
		case 4:
		case 5:
			printf("month %d is a spring month\n", month);
			break;
		case 6:
		case 7:
		case 8:	 
			printf("month %d is a summer month\n", month);
		        break;
		case 9:
		case 10:
		case 11:
			printf("month %d is a waterfall month\n", month);
			break;
		case 66:
		case 99:
		default:
			printf("month %d is not a valid month\n", month);
	}
  
}
