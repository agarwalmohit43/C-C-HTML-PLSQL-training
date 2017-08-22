/*Program to calculate area of circle*/

#include<stdio.h>

#define PI 3.14
#define AREA(r) PI*r*r

void main()
{
	float radius;

	printf("Enter value for Radius : ");
	scanf("%f",&radius);

	printf("Area of Circle is : %.3f\n",AREA(radius));
}
