/*Program to find the factorial of a number by recursive and iterative methods*/

#include<stdio.h>
#include<stdlib.h>
long int fact(int n);
long int Ifact(int n);

int main( )
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num<0) {
		printf("No factorial for negative number\n");
		exit(1);
	}

	printf("Factorial of %d is %ld\n", num, fact(num) );

	printf("Factorial of %d is %ld\n", num, Ifact(num) );
}/*End of main()*/

/*Recursive*/
long int fact(int n)
{
	if(n == 0)
		return(1);
	return(n * fact(n-1));
}/*End of fact()*/

/*Iterative*/
long int Ifact(int n)
{
	long fact=1;
	while(n>0)
	{
		fact = fact*n;
		n--;
	}
	return fact;
}/*End of ifact()*/
