/* Program to access array elements using pointers */


# include <stdio.h>
void main()
{
    int ar[5]={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++)
	printf("%d-%d\n",(ar+i),*(ar+i));
}

