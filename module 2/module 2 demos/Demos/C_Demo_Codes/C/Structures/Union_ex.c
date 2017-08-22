/*#include <stdio.h>
union marks
{
	float percent;
    	char grade;
};
int main ( )
{
    	union marks student1;
    	student1.percent = 98.5;
	printf( "Marks are %f address is %16lu grade:%c\n", student1.percent, &student1.percent,student1.grade);
    	student1.grade = 'A';
	printf( "Grade is %c address is %16lu perc=%f\n", student1.grade, &student1.grade,student1.percent);
}
*/
#include <stdio.h>

union number {
	int x;
   	double y;
};

void main()
{
	union number value; 
	value.x = 100; 
	printf( "%s\n%s\n%s%d\n%s%f\n\n",
		"Put a value in the integer member",
		"and print both members.",
		"int:   ", value.x,
      		"double:\n", value.y );

   	value.y = 100.0;
   	printf( "%s\n%s\n%s%d\n%s%f\n",
      		"Put a value in the floating member",
      		"and print both members.",
      		"int:   ", value.x,
      		"double:\n", value.y );
   
}