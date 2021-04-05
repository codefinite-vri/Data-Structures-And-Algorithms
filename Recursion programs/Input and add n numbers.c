/* Input and add n numbers*/
#include<stdio.h>
#include<stdlib.h>
int	InputAndAdd(int n);
int main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	if (n < 1)
	{
		printf("Input must be a positive integer\n");
		exit(1);
	}
	printf("%d\n",InputAndAdd(n));
}
int	InputAndAdd(int n)
{
	int a;
	printf("Enter a number : ");      
	scanf("%d",&a);
	if (n == 1)
	    return a;
	else
	    return a + InputAndAdd(n-1);
}
