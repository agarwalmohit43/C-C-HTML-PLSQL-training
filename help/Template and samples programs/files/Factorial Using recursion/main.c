#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the no.:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
