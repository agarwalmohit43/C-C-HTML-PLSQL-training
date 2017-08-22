#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int i,n,flag=0,j,counter=0,sum=0,initial;
    printf("\nEnter the limit of number:");
    scanf("%d",&n);
    initial=n;
    for(i=1;i<=initial;i++)
    {
        if(i%2==0)
        {
            initial=initial/2;
            printf("\nNext value is %d",initial);
        }else
        {
            initial=initial*3+1;
            printf("\nNext value is %d",initial);
        }
    }



	printf("\n");
	system("pause");
	return 0;
}
