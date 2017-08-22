#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,c,i,l,u,mid,flag,pos;
    printf("Enter the total element to be entered: \n");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory not available");
        exit(0);
    }
    printf("\nEnter the element in array in asscending order:");
    for(i=0;i<n;i++){
        printf("\nEnter the element at %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d",&c);

    l=0,u=n-1;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==c){
            flag=1;
            pos=mid+1;
            break;
        }else if(c<a[mid]){
        u=mid-1;
        }else{
        l=mid+1;}
    }
    if(flag==1){
        printf("Element found  at position %d",pos);
    }else{
    printf("Element Not Found");}
    return 0;
}
