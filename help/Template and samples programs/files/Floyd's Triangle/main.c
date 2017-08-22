#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a=1;
    printf("Enter the no. of rows to be printed:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
