#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef union {
char name[50];
int roll;
}mohit;
int main()
{
     mohit m;
    strcpy(m.name,"MOhit");

    printf("name: %s",m.name);
    m.roll=142251;
    printf("\nroll: %d",m.roll);
    return 0;
}
