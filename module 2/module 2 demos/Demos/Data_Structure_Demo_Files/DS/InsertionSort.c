#include<stdio.h>
#include<conio.h>

void insertion_sort(int [],int);//prototype for Insertion Sort Function

int main() 
{
	int counter,num,arr[20];
	printf("Enter total elements: ");
	scanf("%d", &num);// Taking the Size of Array
	printf("Enter elements: ", num);//Entering Values at particular Index
	for (counter = 0; counter< num; counter++) 
	{
		scanf("%d", &arr[counter]);
	}
	insertion_sort(arr,num);//Calling Insertion Sort Function
	getch();
}

//Definition of Insertion Sort Function

void insertion_sort(int iarr[], int num1)
{
	/*  
	n_counter is counter for next variable
	p_counter is counter for previous variable

	*/

	int n_counter,p_counter,temp_var;
	for (n_counter = 1; n_counter < num1; n_counter++) 
	{
		temp_var = iarr[n_counter];
		p_counter = n_counter - 1;
		while ((temp_var < iarr[p_counter]) && (p_counter >= 0)) 
		{
			iarr[p_counter+ 1] = iarr[p_counter];
			p_counter = p_counter- 1;
		}
		iarr[p_counter + 1] = temp_var;
	}
	printf("After Sorting: ");
	for (n_counter= 0; n_counter< num1; n_counter++)
	{
		printf("%d\t", iarr[n_counter]);
	}
}
