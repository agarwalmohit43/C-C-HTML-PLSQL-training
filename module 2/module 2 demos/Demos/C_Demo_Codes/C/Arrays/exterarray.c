#include<stdio.h>

/*
Extern declaration of i & j.
No new variables are created
*/
extern int arr1[4];


int arraysize()
{
	int len;
	len=sizeof(arr1);
	return(len);
}
