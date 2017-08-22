/*Program to write even and odd numbers in a file
*Example for seek function*/

#include<stdio.h>

void main()
{
	FILE *fr,*fwo,*fwe;
	int num,tot;

	fwo=fopen("even.txt","w");
	fwe=fopen("odd.txt","w");
	fprintf(fwo,"%d",num);
	printf("How many numbers you want to enter:");
	scanf("%d",&tot);

	while(tot>0)
	{
		printf("Enter a number : ");
		fscanf(stdin,"%d",&num);
		if(num%2==0)
			fprintf(fwe,"%d",num);
		else
			fprintf(fwo,"%d",num);
		tot--;
	}
	
	fclose(fwo);
	fclose(fwe);
	

	fr=fopen("even.txt","r");
	fseek(fr,0,SEEK_SET);


	fscanf(fr,"%d",&num);
	fprintf(stdout,"%d",num);

//	fscanf(fr,"%d",&num);



	fclose(fr);
	
}