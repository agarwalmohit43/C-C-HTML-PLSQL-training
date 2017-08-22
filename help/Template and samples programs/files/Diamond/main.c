#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=5,i,j;
    for(i=1;i<=9;i++){

        for(j=1;j<=9;j++){
            if(j<=a || j>=b){
                printf("*");
            }else{
            printf(" ");}
        }
        printf("\n");
       if(i<5){
        a--,b++;
       }else{
       a++,b--;}
    }
    return 0;
}
