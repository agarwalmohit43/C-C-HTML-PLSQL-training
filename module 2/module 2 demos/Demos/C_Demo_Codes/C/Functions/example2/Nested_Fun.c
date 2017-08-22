/* Example of function usage using multiple functions */
	# include<stdio.h>
 	void USA(void);
	void Singapore(void);
	void Italy(void);
	void Japan(void);
	void main(void)
	{
		printf("This is India \n");
		USA();
		Singapore();
		printf("I hope you enjoyed the world tour! \n");
	}
	void USA()
	{	
		printf("Welcome to United States Of America \n");
		Italy();
	}
	void Italy()
		{
			printf("Hi! Welcome to Italy \n");
			Japan();
		}
	void Japan()
		{
			printf("Hello! Welcome to sun rising country \n");
		}
	void Singapore()
		{
			printf("Enjoy shopping over here \n");
		}
