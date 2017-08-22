#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int empId;
    char empName[20];
    float empSalary;
}employeeDetails;

int main()
{   int i;
    FILE *fp;
    employeeDetails *emp;
    emp=(employeeDetails *)malloc(0*sizeof(employeeDetails));

    //FILE
    fp=fopen("employee.txt","r");
    if(fp==NULL)
    {
        printf("\nUnable to open file");
    }
    for(i=0;i<2;i++)
    {
        fscanf(fp,"\nEmployee Id: %d",&emp[i].empId);
        fscanf(fp,"\nEmployee Name: %s",emp[i].empName);
        fscanf(fp,"\nEmployee Salary: %f",&emp[i].empSalary);
        fscanf(fp,"\n");
        printf("\n%d",emp[i].empId);
        printf("\n%s",emp[i].empName);
        printf("\n%f\n",emp[i].empSalary);
		
    }
    fclose(fp);
    
    printf("\n");
    return 0;
}
