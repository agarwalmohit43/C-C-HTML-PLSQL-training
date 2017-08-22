#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int sum;
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",size);
    sum=sumof(a);
    printf("%d\n",sum);
    getch();
    return 0;

}

int sumof(int a[])//->array act as pointer
{
    int i,sum=0;
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",size);
    for(i=0;i<size;i++)
    {

        sum+=a[i];
    }
    return sum;
}
