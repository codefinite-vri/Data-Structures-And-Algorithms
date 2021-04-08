/*Display a number in words*/

#include<stdio.h>
void f(int n); 

const char* nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() 
{ 
	int num = 12340;
	f(num);
} 

void f(int n) 
{ 
	if(n==0)
		return;

	f(n/10);

	printf("%s ", nums[n%10]);
} 
