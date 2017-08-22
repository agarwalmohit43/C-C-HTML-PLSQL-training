/*
 * stringCatTest.c
 * implementation of the strcat function
 */
#include <stdio.h>
#include "stringCat.h" /* user made static library stringCat, header file reside in the current directory */

void main ( void ) 
{
	char sOne[20] = "Hello";
	char sTwo[] = " World";

	stringCat( sOne, sTwo );
	printf( sOne );
}
