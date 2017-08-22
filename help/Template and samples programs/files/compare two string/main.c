#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[5],b[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    if(strcmp(a,b)==0){
        printf("Strings a and b are equal %s %s ",a,b);
    }else{
    printf("String a and b are not equal");
    }

    return 0;
}
