/*Program to find out Even or Odd Number*/

#include <stdio.h>


int main(void)
{
  int test = 0;              

  if( test % 2 == 0) 
  {
    printf("The number %d is even", test);

    if ( (test/2) % 2 == 0)
    {
      printf("\nHalf of %d is also even", test);
      printf("\nThat's interesting isn't it?\n");
    }
  }
  else
    printf("The number %d is odd\n", test);
  return 0;
}