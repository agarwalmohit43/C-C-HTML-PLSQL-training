
/* Program to demonstrate Call by Reference */

# include<stdio.h>

void swap(int*,int*);

void main(void)
{
	int RedBallCount=5, BlueBallCount=10;
	printf("Before Swapping... \n\tRedBallCount:%d \n\t BlueBallCount:%d",RedBallCount, BlueBallCount);
	swap(&RedBallCount,&BlueBallCount);
	printf("\nAfter Swapping...\n\tRedBallCount:%d \n\t BlueBallCount:%d\n",RedBallCount, BlueBallCount);
}	

void swap(int *RedBallCount, int *BlueBallCount)
{
    int discriminent;
    discriminent  =*RedBallCount;
    *RedBallCount =*BlueBallCount;
    *BlueBallCount=discriminent;
}