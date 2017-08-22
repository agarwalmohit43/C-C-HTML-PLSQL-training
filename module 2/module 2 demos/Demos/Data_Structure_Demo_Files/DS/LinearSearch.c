#include <stdio.h>
#include<conio.h>

void linear_search(int [], int);//prototype for Linear Search Function
 
int main()
{
	//num_element= No. of elements in the array
   int arr[10], num_elements,index;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&num_elements);
 
   printf("Enter numbers\n");
 
   for (index=0 ; index < num_elements ; index++ )
   {
      scanf("%d",&arr[index]);
   }
 
   linear_search(arr,num_elements);//calling linear search function
   getch();
   return 0;
}

void linear_search(int iarr[], int num1)
 
{
	int num_search;//num_search=Number to be searched
        int counter,count=0;
	printf("Enter the number to search\n");
	scanf("%d",&num_search);

	
   for (counter = 0 ; counter< num1 ; counter++ )
   {
      if ( iarr[counter]!= num_search )    
      {
		  //count++;
         
	  }
	  else
	  {
		  printf("number is present at %d ", counter);
		 
	  }
	  
   }

   
}
