#include <stdio.h>
 
//multiply 3*4 matrix by constant

int main()
{
	int array[3][4];
	
	for(int i= 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("Enter element: %d %d \n", i,j);
			scanf("%d", &array[i][j]);
		}
	}
	
	int array2[3][4];
	
	int constant;
	
	printf("\nEnter constant \n");
	scanf("%d", &constant);
	
	
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 4; ++j)
			array2[i][j] = array[i][j] * constant;
	
	printf("Your Matrix: \n");
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("%d	", array[i][j]);
		}	
		printf("\n");
	}

	printf("Modified Matrix: \n");
	
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			printf("%d	", array2[i][j]);
		}	
		printf("\n");
	}


		
	return 0;
}
