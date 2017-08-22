/*Program to check whether macro named USA and EUP is not defined*/


#include <stdio.h>
#define USA 1
#define EUP 1



#ifndef USA            
   #define currency_rate  100 
#endif               

#ifndef EUP                 
   #define currency_rate 46
#endif               
void main()
{
    int rs;
    rs = 10 * currency_rate; 
    printf ("%d\n", rs);
}