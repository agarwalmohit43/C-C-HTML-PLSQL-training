#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,n,n1;
    printf("Enter the no.: ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        a=n%10;
        sum=sum*10+a;
        n=n/10;
    }
    if(sum == n1){
        printf("%d is Palindrome",n1);
    }else{
printf("%d is not Palindrome",n1);
}
    return 0;
}
