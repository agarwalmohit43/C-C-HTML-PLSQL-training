#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    p=&a;

    printf("\n%d",&a);
    printf("\n%d",p);
    printf("\n%d",p++);//pointer moves
    printf("\n%d",++p);//pointer moves
    printf("\n%d",++*p);//pointer value incremented
    printf("\n%d",++(*p));//pointer value incremented
    printf("\n%d",++*(p));//value of p is incremented
    printf("\n%d",*p++);//pointer moves return old
    printf("\n%d",(*p)++);//pointer value 
    printf("\n%d",*(p)++);//pointer moves return old
    printf("\n%d",*++p);//pointer moves
    printf("\n%d",*(++p));//pointer moves
	printf("\n%d",++*p++);
    printf("\n");
    return 0;
}

o/p:
3341576
3341576
3341576
3341584
4
5
6
6
4
5
6
7
8