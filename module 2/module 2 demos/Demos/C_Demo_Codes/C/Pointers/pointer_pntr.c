/*Example for Pointer to pointer*/

#include <stdio.h>
void main()
{
    int data; 
    int *iptr;     /* pointer to an integer data */
    int **ptriptr; /* pointer to int pointer */
    iptr = &data;  /* iptr points to data */
    ptriptr = &iptr; /* ptriptr points to iptr */
    *iptr = 100;     /* same as data=100 */
    printf("variable data: %d \n",data);
    //*iptr = 300;
   //printf("variable data: %d \n",iptr[1]);
   **ptriptr = 200;
   printf("variable data: %d \n",data);
   data = 300;
   printf("ptriptr is pointing  to : %d\n",**ptriptr);
  
}
