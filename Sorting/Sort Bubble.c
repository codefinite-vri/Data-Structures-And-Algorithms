/*Program of sorting using bubble sort*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	int arr[MAX],i,j,temp,n,xchanges;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	if(n > MAX)
	{
		printf("number of elements must not exceed %d\n", MAX);
		exit(1);
	}

	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	/*Bubble sort*/
	for(i=0; i<n-1; i++)
	{
		xchanges=0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			}
		}
		if(xchanges==0) /*If list is sorted*/
			break;
	}

	printf("Sorted list is :\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}/*End of main()*/

