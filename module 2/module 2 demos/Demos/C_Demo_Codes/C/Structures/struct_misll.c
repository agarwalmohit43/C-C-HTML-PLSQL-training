//#pragma pack( push,1) 

/*struct emp //try all combinationsand show the
                demo without pragama statement
{
int empid;
char band;
char gender;

};*/

/*struct emp
{

char band;
char gender;
int empid;
};
*/

struct emp
{
char name[3];
char role[2];
double salary;
};

/*struct emp
{

char gender;
int empid;
};*/



int main(void)
{
struct emp emp_details;
printf("%d\n",sizeof(emp_details));
return 0;
}
