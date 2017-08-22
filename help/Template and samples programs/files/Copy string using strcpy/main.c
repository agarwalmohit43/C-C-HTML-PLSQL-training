#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter the String: ");
    gets(str1);
    strcpy(str2,str1);
    printf("\n%s",str2);
    return 0;
}
