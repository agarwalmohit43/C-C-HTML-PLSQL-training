#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int l,i,flag=0;
    char str[50];
    printf("Enter the String: ");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    if(str[i] != str[l-i-1]){
        flag++;
        break;
    }
    if(flag==0){
        printf("\nPalindrome");
    }else{
     printf("\nNot Palindrome");}
    return 0;
}
