#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[50];
    printf("Enter the String: ");
    gets(string);
    stru(string);
    printf("%s",string);
    return 0;
}
void stru(char *string){
while(*string){
    if(*string>='a' && *string<='z'){
        *string=*string-32;
    }
    *string++;
}
}
