#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    if(year%400==0){
        printf("%d is a Leap year",year);

    }else if(year%100==0){
    printf("%d is not a Leap year",year);
    }else if(year%4==0){
    printf("%d is a Leap year",year);
    }else{
            printf("%d is not a Leap year",year);

    }
    return 0;
}
