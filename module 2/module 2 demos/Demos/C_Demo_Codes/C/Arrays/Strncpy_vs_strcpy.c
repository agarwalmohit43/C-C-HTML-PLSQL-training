/*Program to demonstrate the usage of strcpy and strncpy*/

#include<stdio.h>
#define MAX 10
void main(void)
{

	char source[MAX] = "123456789"; 
	char source1[MAX] = "123456789"; 
	char destination[MAX] = "abcdefg"; 
	char destination1[MAX] = "abcdefg"; 
	char *return_string; 
	int index = 5; 
 
	/* This is how strcpy works */ 
	printf("destination is originally = '%s'\n", destination); 
	return_string = strcpy(destination, source); 
	printf("after strcpy, dest becomes '%s'\n\n", destination); 
 
	/* This is how strncpy works */ 
	printf( "destination1 is originally = '%s'\n", destination1 ); 
	return_string = strncpy( destination1, source1, index ); 
	destination1[index-1]= '\0';
	printf( "After strncpy, destination1 becomes '%s'\n", destination1 );
}