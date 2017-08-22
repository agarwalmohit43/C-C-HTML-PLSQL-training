#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,flag=0;
    printf("Enter the no.: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            {
                flag++;
            }
    }
    if(flag==2)
        {
        printf("%d is Prime",n);
        }
    else
        {
        printf("%d is not Prime",n);
        }
    return 0;
}
