#include<stdio.h>
#include<stdlib.h>

int main()
{   FILE *fp;
    char ch;

    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("\nFILE DOES NOT EXISTS..!!");
        exit(0);
    }
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
   
    printf("\n");
    return 0;
}
