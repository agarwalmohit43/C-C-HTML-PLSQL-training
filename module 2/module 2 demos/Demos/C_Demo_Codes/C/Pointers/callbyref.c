/* Program to demonstrate Call by Reference */
# include<stdio.h>
void swap(int *RedballCount, int *BlueballCount)
{
     int discriminent;
     discriminent =*RedballCount;
    *RedballCount=*BlueballCount;
    *BlueballCount= discriminent;
}
void main()
{
	int RedballCount=5, BlueballCount=10;
	printf("Before Swapping…RedballCount:%d BlueballCount :%d",
		RedballCount, BlueballCount);
	swap(&RedballCount,&BlueballCount);
	printf("After Swapping… RedballCount :%d BlueballCount :%d", 
		RedballCount, BlueballCount);
}