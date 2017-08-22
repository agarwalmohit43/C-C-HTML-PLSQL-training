#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    printf("Enter The length: ");
    scanf("%d",&n);
    printf("\nEnter the way you wanna fibonacci series\n1.Using Recursive\n2.Without Recursive Method\n");
    scanf("%d",&c);
    printf("%d %d",0,1);
    switch(c){
    case 1: rec(n-2);
            break;
    case 2:wrec(n);
            break;
    default:printf("Invalid Choice");
    }
    return 0;
}
void rec(int n){
    static int a=0,b=1,sum;

    if(n>0)
    {
    sum=a+b;
    a=b;
    b=sum;
    printf(" %d",sum);
    rec(n-1);
    }

}

void wrec(int n)
{
    int count=2;
     int a=0,b=1,sum;
    while(count<n)
    {
    sum=a+b;
    a=b;
    b=sum;
    ++count;
    printf(" %d",sum);
    }

}
