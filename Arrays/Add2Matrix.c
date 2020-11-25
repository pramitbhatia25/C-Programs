#include <stdio.h>

//add 2 4*4 2d arrays

int main()
{
	int array[4][4];
	for(int i= 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("Enter element - %d %d : ", i,j);
			scanf("%d", &array[i][j]);
		}
	}
	
	int array2[4][4];
	for(int i= 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("Enter element - %d %d : ", i,j);
			scanf("%d", &array2[i][j]);
		}
	}

	int arrayadded[4][4];
	

	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			arrayadded[i][j] = array[i][j] + array2[i][j];
		}	
	}

	printf("Your Matrix 1\n");	
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("%d	", array[i][j]);
		}	
		printf("\n");
	}

	printf("Your Matrix 2\n");	
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("%d	", array2[i][j]);
		}	
		printf("\n");
	}
	printf("Added Matrix\n");	
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("%d	", arrayadded[i][j]);
		}	
		printf("\n");
	}

	
	return 0;
}
