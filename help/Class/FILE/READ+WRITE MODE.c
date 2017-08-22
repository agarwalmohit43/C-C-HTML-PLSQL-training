#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   FILE *fp,*fp1;
    char ch;

    fp=fopen("test.txt","r");
    fp1=fopen("testcopy.txt","w");
    if(fp==NULL)
    {
        printf("\nFILE DOES NOT EXISTS..!!");
        exit(0);
    }
    if(fp1==NULL)
    {
        printf("\nNot able to open");
        exit(0);
    }
    while((ch=getc(fp))!=EOF)
    {
        
        //ch-='a'-'A';
       // if(ch>='a' && ch<='z')
        //ch-=32;
        putc(toupper(ch),fp1);
    }
    fclose(fp);
   fclose(fp1);
    printf("\n");
    return 0;
}
