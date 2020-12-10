#include <stdio.h>
#include <stdlib.h>
#define col 5

//Allocate n elements dynamically to a pointer variable ,assign data and find sum of all elements using poonter variuable

int main()
{
	int n,i,sum = 0;
	int (*a)[col]; 						// pointer pointing to 5 element row
	printf("Enter number of rows: ");
	scanf("%d",&n);
	
	a = ( int (*)[col] ) malloc(n*5*sizeof(int));		//(int) is an address pointing to 5 integer elements
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter Element %d %d\n",i,j);
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}	
	}
		
	printf("Sum = %d",sum);
	return 0;
	
}


