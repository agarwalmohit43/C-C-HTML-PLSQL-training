#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int id;
    //int i=10;
    //char name[25]="MOHIT";
    char ch[20];int i;

    fp=fopen("mohit.txt","r");
    if(fp==NULL)
    {
        printf("Unable to open file");
    }
    //id=fprintf(fp,"%s\t%d",name,i);
    while(!feof(fp))
    {
        //ch=getc(fp);
       // fscanf(fp,"%s\t%d",ch,&i);
        //printf("\n%s\t%d",ch,i);
       // fgets(ch,20,fp);
       // printf("%s",ch);
       putchar(fgetc(fp));

    }
   // printf("%d",id);

    fclose(fp);

    return 0;
}
