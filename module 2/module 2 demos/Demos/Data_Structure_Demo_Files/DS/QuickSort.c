#include<stdio.h>
#include<conio.h>

void quicksort(int [],int,int);

int main()
{
    //Declaring variables
    int array[100],num_elements,index;

    //Number of elements in array form user input
    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&num_elements);

    //code to ask to enter elements from user equal to n
    printf("Enter Elements in the list : ");
    for(index = 0; index < num_elements; index++)
    {
        scanf("%d",&array[index]);
    }

    //calling quickSort function defined below
    quicksort(array,0,num_elements-1);

    //print sorted array
    printf("Sorted elements: ");
    for(index=0;index<num_elements;index++)
	{
		printf(" %d",array[index]);
	}

    getch();
    return 0;
}

//Quick Sort function to Sort Integer array list
void quicksort(int array[], int firstIndex, int lastIndex)
{
    //declaring index variables
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        //assigning first element index as pivot element
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;

        //Sorting in Ascending order with quick sort
        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                //Swapping operation
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        //At the end of first iteration, swap pivot element with index2 element
        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;

        //Recursive call for quick sort, with partiontioning
        quicksort(array, firstIndex, index2-1);
        quicksort(array, index2+1, lastIndex);
    }
}

