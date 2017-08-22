/*  Program to print required power of given number  */
# include <stdio.h>
void main(void)
{
	int pow, num;
	int result = 1,count = 1 ;
	printf("Enter the number and its power:");
	scanf("%d%d", &num, &pow);
	while (count <= pow)
	{
		result *= num;
		count ++ ;
	}
	printf("Number %d to power %d  is = %d",num,pow,result) ;
}
