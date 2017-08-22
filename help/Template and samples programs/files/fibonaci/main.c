#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,n,c,i;
    printf("Enter the length: ");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i=0;i<(n-2);i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
