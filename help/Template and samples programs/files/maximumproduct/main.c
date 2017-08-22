#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
int main()
{
    int arr[]={-5,-4,-3,0,1,5,9,10};
    int max=maxProduct(arr);
    printf("\n Max Product: %d",max);
    return 0;
}

int maxProduct(int numbers[])
{
        int b=numbers[0];
        int maxProduct = numbers[0];
        int productSoFar = numbers[0];
        int i;
        if(productSoFar == 0) productSoFar = 1;

        for(i=1;i<8;i++){
            productSoFar = productSoFar*numbers[i];
            maxProduct = MAX(maxProduct,productSoFar);
            b=MIN(b,productSoFar);
            if(productSoFar == 0) productSoFar = 1;
        }
        printf("Min Product: %d",b);
        return maxProduct;
    }
