#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,sum=0;
    printf("Enter the no: ");
    scanf("%d",&x);
    while(x!=0){
        a=x%10;
    sum=sum*10+a;
    x=x/10;
    }
    printf("%d",sum);

    return 0;
}
