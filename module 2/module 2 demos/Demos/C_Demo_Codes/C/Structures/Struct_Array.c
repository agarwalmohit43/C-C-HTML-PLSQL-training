/* Example- An array of structures */
# include<stdio.h>
void main()
{
	struct book
	{
 		char name[15];
 		int pages;
		float price;
	};
	struct book novel[10];
	int index;
	printf("n Enter name, pages and price of the book\n");
	/* accessing elements of array of structures */
	for(index=0;index<9;index++)
	{
    		scanf("%s%d",novel[index].name,&novel[index].pages);
	    	scanf("%f",&novel[index].price);
    		printf("\n");
	}
	printf("\n Name, Pages and Price of the book :\n");
	for(index=0;index<=9;index++)
	{
    		printf("%s %d",novel[index].name,novel[index].pages);
	    	printf("%f",novel[index].price);
	}
}
