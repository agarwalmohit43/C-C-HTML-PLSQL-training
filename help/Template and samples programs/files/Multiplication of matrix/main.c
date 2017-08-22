#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter the No. of Rows For 1st matrix: ");
    scanf("%d",&r1);
     printf("\nEnter the No. of Columns For 1st matrix: ");
    scanf("%d",&c1);

    printf("\nEnter the No. of Rows For 2nd matrix: ");
    scanf("%d",&r2);
     printf("\nEnter the No. of Columns For 2nd matrix: ");
    scanf("%d",&c2);
     int a[r1][c1],b[r2][c2],c[20][20];

    if(c1 != r2){
        printf("\nThe required Matrix cannot be multiplied.");
    }else{

    printf("\nEnter the element For the 1st matrix");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\nEnter the Values for %d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the element For the 2nd matrix");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("\nEnter the Values for %d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<r2;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    }

    printf("\nMultiplied array: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){

            printf(" %d ",c[i][j]);
         if(j==c2-1){
            printf("\n\n");
        }}}
    return 0;
}
