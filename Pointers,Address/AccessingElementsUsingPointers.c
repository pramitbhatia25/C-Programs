#include <stdio.h>

//Access array elemts using pointers

int main()
{
	int n;
	
	printf("Enter Size of Array: \n");
	scanf("%d", &n);
	
	int a[n][n];
	
	printf("Enter Array Elements\n");
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Enter element r = %d, c = %d", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	
	printf("THE 2D ARRAY IS: ");
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d", *(*(a+i) + j));
		}
		printf("\n");
	} 
	
	return 0;
}
	
