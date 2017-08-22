#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
         printf("\nEnter roll no.");
    scanf("%d",&s1[i].rollno);
    printf("\nEnter Name");
    scanf("%s",s1[i].name);
    printf("\nEnter marks");
    scanf("%f",&s1[i].marks);
    
    }

    for(i=0;i<5;i++)
    {
        printf("\n%d\t%s\t%f",s1[i].rollno,s1[i].name,s1[i].marks);
    }
   
    printf("\n");
    system("pause");
    return 0; 
}

