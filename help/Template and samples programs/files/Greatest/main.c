#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,i,n;
    printf("Enter the Length \n");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory not available");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
       printf("%d No.",i+1);
       scanf("%d",&a[i]);
    }
    int greater=a[0];
    int j;
    for(j=1;j<n;j++)
    {
        if(a[j]>greater)
        {
            greater=a[j];
        }

    }
    printf("Elements In Array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

printf("\nGreatest among all %d",greater);
getch();
    return 0;
}
