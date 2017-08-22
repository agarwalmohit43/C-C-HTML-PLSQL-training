/*
 * stringCat.c
 * implementation of the strcat function
 */
char *stringCat( char *strOne, const char *strTwo )
{
	char *ptr = strOne;

	while( *strOne )
	{
		++strOne;
	}
	while( (*strOne = *strTwo) )
	{
		++strOne, ++strTwo;
	}

	return ptr;
}
