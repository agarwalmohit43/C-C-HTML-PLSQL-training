#include <stdio.h>
#include<conio.h>

void binary_search(int [],int);//Prototype for Binary Search Function
 
int main()
{
   int index, num_elements, arr[10];//Num_elements is the no. of elements in the array
 
   printf("Enter number of elements\n");
   scanf("%d",&num_elements);
 
   printf("Enter %d integers\n");
 
   for ( index = 0 ; index < num_elements ; index++ )
      scanf("%d",&arr[index]);

   binary_search(arr,num_elements);//calling binary search functions
   getch();
   return 0;
}

void binary_search(int iarr[],int num)//Definition of Binary Search Function

{
 
	int num_search,first,last,middle;
	printf("Enter value to find\n");
	scanf("%d",&num_search);
 
	first = 0;
	last = num - 1;
	middle = (first+last)/2;
 
	while( first <= last )
	{
		if ( iarr[middle] < num_search )
         first = middle + 1;    
      else if ( iarr[middle] == num_search ) 
      {
         printf("%d found at location %d.\n", num_search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if ( first > last )
      printf("Not found! %d is not present in the list.\n", num_search);
 
}
