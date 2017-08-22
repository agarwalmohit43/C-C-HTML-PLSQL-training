#include <stdio.h>
#include <stdlib.h>
void quick(int a[],int low,int up);
int partition(int a[],int low,int up);

int main()
{
    int *a,n,i;
    printf("Enter the total elements to be entered: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory Not Available");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("\nEnter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
     quick(a,0,n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}

void quick(int a[],int low,int up){
int pivloc;
if(low>=up)
    return;
pivloc=partition(a,low,up);
quick(a,low,pivloc-1);
quick(a,pivloc+1,up);
}

int partition(int a[],int low,int up){
int temp,i=low+1,j=up,pivot=a[low];
while(i<=j){
    while((a[i]<pivot)&&(i<up))
        i++;
    while(a[j]>pivot)
        j--;
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }else
    i++;
}
a[low]=a[j];
a[j]=pivot;
return j;
}



