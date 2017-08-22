#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[100],target[100];
    printf("Enter Source String\n");
    gets(source);
    copystring(source,target);
    printf("Target string is %s",target);
    return 0;
}

void copystring(char *source,char *target){

while(*source){
    *target=*source;
    *target++;
    *source++;
}
*target='\0';
}
