#include <stdio.h>
#include <stdlib.h>

const int z=5;

double sum(double x,double y){
return x+y;
}

double main()
{

    double x,y;
    printf("Enter The no. to be added \n");
    printf("enter the 1st no.");
    scanf("%lf",&x);
    printf("enter the 2nd no.");
    scanf("%lf",&y);
    printf("Sum of %lf and %lf : %lf",x,y,sum(x,y));

    printf("\nvalue of const: %d",z);
     printf("Enter the values in the array: \n");
   int myArray[5];
int n = 0;


    return 0;
}
