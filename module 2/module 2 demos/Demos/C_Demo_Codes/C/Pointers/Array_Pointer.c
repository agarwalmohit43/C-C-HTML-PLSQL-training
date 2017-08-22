# include <stdio.h>
void main()
{
    int m = 25, n = 50, o = 60, p = 74;
    int i;
	//ar[4]={&m,&n,&o,&p};
	int *ar[4]={&m,&n,&o,&p};
    for(i=0; i<4; i++)
        printf("%d\t",*(*(ar+i)));//*(ar+i)*/

//char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"} ;

}
