/*Program to check whether macro named USA and EUP is defined*/

//#define USA 1
//#define EUP 1
#include <stdio.h>


#if (defined (USA))
     #define currency_rate 46
#elif (defined (EUP))
     #define currency_rate 100
#else
     #define currency_rate 1
#endif

void main()
{
    int rs;
    rs = 10 * currency_rate;
    printf ("%d\n", rs);
}