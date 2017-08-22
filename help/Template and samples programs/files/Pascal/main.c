#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int m,c=20,sum=11,i;;


    for(i=1;i<5;i++){
    for(m=1;m<=c;m++)
    {
        printf(" ");
    }
       printf("%d\n",(int)pow(sum,(i-1)));
       c--;
    }
    return 0;
}
