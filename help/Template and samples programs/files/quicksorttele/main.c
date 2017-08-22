#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*arr,i;
    printf("Enter the no. of values to be entered: ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Not available");
    }else{
    for(i=0;i<n;i++){
        printf("\n Enter the %d term",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\n Elements Before unsorted:")
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);

    }

    quick(arr,0,n-1);
    printf("\n Elements After Sorting:")
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);

    }

    }
    return 0;
}

void quick(int arr[],int low,int up){
int pivot;
if(low>=up)
    return;
pivot=partition(arr,low,up);
quick(arr,low,pivot-1);
qucik(arr,pivot+1,up);

}
int partition(int arr[],int low,int up){
int i=low+1;
int j=up;
int temp;
int pivot=arr[low];
while(i<=j){
    while(arr[i]<pivot && i<up){
        i++;
    }while(arr[j]>pivot){
    j++;}
    if(i<=j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=arr[i];

        i++;j--;
    }
    arr[low]=arr[j];
   arr[j]=pivot;
    return pivot;
}
}

