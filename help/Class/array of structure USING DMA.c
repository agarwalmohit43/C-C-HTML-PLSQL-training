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

    struct student *students;
    int i,n;
    printf("\nEnter no of student: ");
    scanf("%d",&n);
    students=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("\nEnter roll no.: ");
    scanf("%d",&students[i].rollno);
    printf("\nEnter Name: ");
    scanf("%s",students[i].name);
    printf("\nEnter marks: ");
    scanf("%f",&students[i].marks);
    
    }
    printf("\nRoll\tName\tMarks");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t%s\t%f",students[i].rollno,students[i].name,students[i].marks);
    }
   
    printf("\n");
    system("pause");
    return 0; 
}

