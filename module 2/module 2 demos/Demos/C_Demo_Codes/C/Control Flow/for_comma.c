#include <stdio.h>

void main()
{
    int i, j;
   
    for (i = 0, j = 10; i < 3 && j > 8; i++, j--)
	{
       printf (" the value of i and j %d %d\n",i, j);
    }
}