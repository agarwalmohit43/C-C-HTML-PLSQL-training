#include<stdio.h>
void main(void)
{
	char acctype;//Savings-S Current-C
	int custid;
	long int creditcardnumber;
	float minimum_payment;
	double balance;
	scanf(" %c",&acctype);
	printf("%c ",&acctype);
	scanf("%d",&custid);
	printf("%d",custid);
	scanf("%ld",&creditcardnumber);
	printf("%ld",creditcardnumber);
	scanf("%f %lf", &minimum_payment, &balance);
	printf("%f %lf", minimum_payment, balance);
}