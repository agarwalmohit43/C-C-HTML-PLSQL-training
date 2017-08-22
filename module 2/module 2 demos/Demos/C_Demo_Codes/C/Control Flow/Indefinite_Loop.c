#include <stdio.h>
#include <ctype.h>           /* For tolower() function */

void main()
{
  char answer = 'N';

  printf("\nThis program calculates the average of any number of values.");

  for( ;; )                           /* Indefinite loop */
  {
    printf("\nDo you want to enter another value? (Y or N): ");
    scanf(" %c", &answer);

    if(answer == 'N' ){
      break;
    }
  }

}
