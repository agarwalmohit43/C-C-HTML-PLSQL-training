#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc,char *argv[])
{   int i;
    if(argc==1)
    {
        printf("\nNo argument passed to main");
    }
    printf("\nTotal argument %d",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s",argv[i]);
    }
    printf("\n");
    system("pause");
    return 0; 
}

