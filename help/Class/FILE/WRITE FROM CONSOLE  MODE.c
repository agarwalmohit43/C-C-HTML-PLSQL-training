#include<stdio.h>
#include<stdlib.h>

int main()
{   FILE *fp;
    char ch;

    fp=fopen("testcopy.txt","w");
    if(fp==NULL)
    {
        printf("\nFILE DOES NOT EXISTS..!!");
        exit(0);
    }
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
   
    printf("\n");
    return 0;
}
