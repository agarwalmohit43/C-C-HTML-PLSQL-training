#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   	double n,i;

	printf("enter the given number:");
	scanf("%lf",&n);
	for(i=0;i<=10;i++)
	{

		printf("%lf ^ %lf=%lf\n",n,i,pow(n,i));
	}
	return 0;
}
