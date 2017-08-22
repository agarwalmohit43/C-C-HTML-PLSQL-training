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
{   int i,n;
    FILE *fp;
    employeeDetails *emp;
	printf("\nEnter the total no. of employee");
	scanf("%d",&n);
    emp=(employeeDetails *)malloc(n*sizeof(employeeDetails));
    for(i=0;i<n;i++)
    {
        printf("\nEnter employee id: ");
    scanf("%d",&emp[i].empId);
    printf("\nEnter employee name: ");
    scanf("%s",emp[i].empName);
    printf("\nEnter employee salary: ");
    scanf("%f",&emp[i].empSalary);
    }
    //FILE
    fp=fopen("employee.txt","a");
    if(fp==NULL)
    {
        printf("\nUnable to open file");
    }
    for(i=0;i<n;i++)
    {
        fprintf(fp,"\nEmployee Id: %d",emp[i].empId);
        fprintf(fp,"\nEmployee Name: %s",emp[i].empName);
        fprintf(fp,"\nEmployee Salary: %f",emp[i].empSalary);
		fprintf(fp,"\n");
		
    }
    fclose(fp);
    
    printf("\n");
    return 0;
}
