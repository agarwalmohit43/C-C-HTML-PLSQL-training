#include <stdio.h>

int main(void)
{
  int chosen = 15;            
  int guess = 0;              
  int count = 3;              

  printf("\nA Number.\n");

  for( ; count>0 ; --count)
  {
    printf("\nYou have %d tr%s left.",count,count == 1 ? "y" : "ies");
    printf("\nEnter a guess: ");
    scanf("%d", &guess);

    if (guess == chosen)
    {
      printf("\nYou guessed it!\n");
      return 0;               
    }

    if(guess<1 || guess > 20)
      printf("between 1 and 20.\n ");
    else
      printf("Sorry. %d is wrong.\n", guess);
  }
  printf("\nYou have had three tries and failed. The number was %d\n", chosen);
  return 0;

	/*for(;;)
	{
		printf("hello");
	}*/
}