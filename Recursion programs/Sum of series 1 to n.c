/*Program to display and find out the sum of series 1 to n*/

#include<stdio.h>
int series(int n);
int rseries(int n);

main( )
{
	int n;
	printf("Enter number of terms : ");
	scanf("%d", &n);
	
	printf("\b\b = %d\n", series(n));	/*  \b to erase last +sign */
	printf("\b\b = %d\n\n\n", rseries(n));
}/*End of main()*/

/*Iterative function*/
int series(int n)
{
	int i, sum=0;
	for(i=1; i<=n; i++)
	{
		printf("%d + ", i);
		sum+=i;	
	}
	return sum;
}/*End of series()*/

/*Recursive function*/
int rseries(int n)
{
	int sum;
	if(n == 0)
		return 0;
	sum = (n + rseries(n-1));
	printf("%d + ",n);
	return sum;
}/*End of rseries()*/

