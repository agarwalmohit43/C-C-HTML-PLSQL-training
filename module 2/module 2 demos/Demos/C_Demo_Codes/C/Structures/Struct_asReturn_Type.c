/* Example- structures and functions */
# include<stdio.h>
struct time
{ 
	int min,hr,sec; 
};

void main()
{
	struct time time_udt(struct time);
	struct time or_time,nx_time;
	printf("Enter time(hh:mm:ss):");
	scanf("%d:%d:%d",&or_time.hr,&or_time.min,&or_time.sec);
	nx_time = time_udt(or_time);
	printf("Updated time is :%2d:%2d:%2d\n",nx_time.hr,nx_time.min,nx_time.sec);
}

struct time time_udt(struct time now)
{
	struct time new_time;
	new_time=now;
	++new_time.sec;
	if(new_time.sec==60)
	{
		new_time.sec=0;
		++new_time.min;
		if(new_time.min==60)
		{
			new_time.min=0;
			++new_time.hr;
			if(new_time.hr==24)
	 			new_time.hr=0;
		}   
	}   
	return(new_time);
} 
