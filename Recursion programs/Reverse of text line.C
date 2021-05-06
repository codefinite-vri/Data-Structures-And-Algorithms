/* Enter a line of text and Reverse it*/
#include<stdio.h>
#include<stdlib.h>

void func(void);

int main( )
{
	printf("Enter text :\n");
	func();
	printf("\n");
}/*End of main()*/

void func(void)
{
	int c;

	c = getchar();
	switch (c)
	{
	case EOF:
	case '\n':
		break;
	default:
		func();
		break;
	}

	if (c != EOF)
		putchar(c);
}
