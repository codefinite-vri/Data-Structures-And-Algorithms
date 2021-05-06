/*Program that tests whether a number is divisible by 11 and 9 or not */

#include<stdio.h>
#include<stdlib.h>
int divisibleBy9(long int x);
int divisibleBy11(long int x);

int main( )
{
	long int num;
	printf("Enter the number to be tested : ");
	scanf("%ld", &num);
	
	if((num == 0) || divisibleBy9(labs(num)))
		printf("The number is divisible by 9\n");
	else
		printf("The number is not divisible by 9\n");
	
	if(divisibleBy11(labs(num)))
		printf("The number is divisible by 11\n");
	else
		printf("The number is not divisible by 11\n");
}/*End of main()*/

int divisibleBy9( long int n )
{
	int sumofDigits;
	if(n==9)
		return 1;
	if(n<9)
		return 0;
	sumofDigits=0;
	while(n>0)
	{
		sumofDigits += n%10;	
		n/=10;
	}
	return divisibleBy9(sumofDigits);
}/*End of divisibleBy9()*/

int divisibleBy11( long int n )
{
	int s1=0, s2=0;
	
	if(n == 0)
		return 1;
	if(n < 10)
		return 0;	
	
	while(n>0)
	{
		s1 += n%10;
		n /=10;
		s2 += n%10;
		n /= 10;
	}
	return divisibleBy11(labs(s1-s2));
}/*End of divisibleBy11()*/


