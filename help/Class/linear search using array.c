#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 10

void permutaion(char a[max],int q,int w);
void swap(int *n,int *m);
int main()
{
    int i,a[max],elements,flag=0,pos;
    printf("\Enter the %d elements:\n",max);
    for(i=0;i<max;i++)
    {
        printf("\Enter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&elements);
   for(i=0;i<max;i++)
   {
        if(elements==a[i])
        {
            flag=1;
            pos=i;
            break;
        }

   }
   if(flag==1)
   {
       printf("\nElement Found at position %d",(pos+1));
   }else
   {
       printf("\nElement not found");
   }
    printf("\n");
    system("pause");
    return 0;
}
