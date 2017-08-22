/* Program to calculate and print telephone bill for customers by checking certain conditions */
#include<stdio.h>

void main()
{
	int units, custno;
        float charge;
        printf("Enter customer no and units consumed: ");
        scanf("%d %d", &custno, &units);
        if (units <= 200)
        	charge =(float) 0.5 * units;
	else if (units <= 400)
        	charge = 100 +(float) 0.65 * (units - 200);
	else if (units <= 600)
        	charge = 230 +(float) 0.8 * (units - 400);
        else
                charge =(float) 390 + (units - 600);
	printf("Customer No: %d consumed %d units \n",custno,units);
        printf("The total bill amount is : %.2f \n", charge);    

}
