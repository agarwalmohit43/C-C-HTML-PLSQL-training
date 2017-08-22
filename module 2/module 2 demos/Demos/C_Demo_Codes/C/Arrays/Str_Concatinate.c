/*Example for String concatenate*/

#include <stdio.h>
#include <string.h>

void main()
{ 
	char firstname[ 20 ] = "Tom "; 
	char lastname[] = "Jerry ";  
	char name[ 40 ] = "";       
   
	printf( "Firstname = %s\nLastname = %s\n", firstname, lastname );

	printf( "strcat( firstname, lastname ) = %s\n", strcat( firstname, lastname ) );
	printf("Firstname=%s\tLastname=%s\n\n",firstname,lastname);
	printf( "strncat( name, firstname, 6 ) = %s\n",strncat( name, firstname, 6 ) );
	printf("firstname=%s\tname=%s\n\n",firstname,name);
	printf( "strcat( name, firstname ) = %s\n", strcat( name, firstname ) );
	printf("firstname=%s\tname=%s\n\n",firstname,name);
 
}