#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
       int n,a[max],pos,i,val;
       printf(" Enter the no. of element to be entered: ");
        scanf("%d",&n);
        printf("\n Enter the elements in array: ");

        for(i=0;i<n;i++){
                printf("\n Enter the %d element: ",i+1);
        scanf("%d",&a[i]);
        }
        printf("\n Enter the position for new element: ");
        scanf("%d",&pos);
        printf("\n Enter the value for new element: ");
        scanf("%d",&val);

        for(i=n;i>=pos-1;i--){
            a[i]=a[i-1];
        }
        a[pos-1]=val;

        printf("\n Final Array: ");
        for(i=0;i<=n;i++){
            printf(" %d ",a[i]);

        }
        return 0;
}
