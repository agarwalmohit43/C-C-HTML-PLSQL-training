#include<stdio.h>
#include<conio.h>

void bubble_sort(int[], int);//prototype for Bubble Sort Function

void main() 
{
	int arr[30], num, index;

	printf("\nEnter no of elements :");
	scanf("%d", &num);

	printf("\nEnter array elements :");
	for (index = 0; index < num; index++)
	{
		scanf("%d", &arr[index]);
	}
	bubble_sort(arr, num);//Calling Bubble Sort Function
	getch();
}

//Definition of Bubble Sort Function

void bubble_sort(int iarr[], int num_elements) 
{
	/*

	counter is a variable for calculating the number of variables
	Index for position
	p_counter for each Pass Count

	*/
   int p_counter, index, counter, temp_var, flag=0;;

   printf("\nUnsorted Data:");
   for (counter = 0; counter < num_elements; counter++) 
   {
      printf("%d\t", iarr[counter]);
   }

   //for each pass
   
   for (p_counter = 1; p_counter < num_elements; p_counter++) 
   {
		for (index = 0; index < num_elements - 1; index++) 
		{
			if (iarr[index] > iarr[index + 1])
			{
				flag=1;
				temp_var = iarr[index];
				iarr[index] = iarr[index + 1];
				iarr[index + 1] = temp_var;
			}
		 }
		if(flag==0)
			break;
		else
			flag=0;

		printf("\nAfter pass %d : ", p_counter);
		for (counter = 0; counter < num_elements; counter++) 
		{
			printf("%d\t", iarr[counter]);
		}
   }
}
