/*Program to raise an error if macro is not defined*/

//#define USA 1
//#define EUP 1
#include <stdio.h>


#if (!defined (USA) || !defined (EUP))
   #error ERROR: NO_CURRENCY rate is specified.
#endif

void main()
{
    int rs;
    rs = 10*USA;
    printf ("%d\n", rs);
}