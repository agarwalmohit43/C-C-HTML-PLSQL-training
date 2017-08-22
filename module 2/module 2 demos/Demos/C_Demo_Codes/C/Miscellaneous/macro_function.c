//Macro just indicates replacement, 
//not the function call.


#include <stdio.h>

#define add(x1,y1)  x1 + y1
#define mult(x1,y1)  x1 * y1

void main ()
{
    int a,b,c,d,result;
    a = 2;
    b = 3;
    c = 4;
    d = 5;
    result = mult(add(a, b), add(c, d));

    // mult(a+b, c+d)
    // a+b * c+d

    printf ("Result is %d\n", result);
}