#include <stdio.h>

//transpose of 2d array

int main()
{
	int array[3][3];
	for(int i= 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d %d \n", i,j);
			scanf("%d", &array[i][j]);
		}
	}
	
	int arrayt[3][3];
	for(int i= 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			arrayt[i][j] = array[j][i];
		}
	}

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d	", array[i][j]);
		}	
		printf("\n");
	}
	
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d	", arrayt[i][j]);
		}	
		printf("\n");
	}

	
	return 0;
}
