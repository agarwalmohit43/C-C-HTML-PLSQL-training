#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the string");
    reverse();
    getch();
    return 0;
}

void reverse(){
    char c;
    scanf("%c",&c);
    if(c!='\n'){
            reverse();
    printf("%c",c);

    }

}
