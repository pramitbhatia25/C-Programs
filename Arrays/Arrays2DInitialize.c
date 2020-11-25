#include <stdio.h>

//Initialize and display 2d array

int main()
{
	int array1[4][3] = { {12,62,32}, {15,75,35}, {15,75,235}, {15,75,352} }; 
	int array2[4][3];
	
	for(int i= 0; i < 4; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d %d \n", i,j);
			scanf("%d", &array2[i][j]);
		}
	}
	
	
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d	", array2[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
