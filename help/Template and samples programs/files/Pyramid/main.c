#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=20,i,j,k,m;
    for(i=1;i<=5;i++){
        for(m=1;m<=c;m++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
        c--;
    }
    return 0;
}
