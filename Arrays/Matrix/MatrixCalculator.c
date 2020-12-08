#include <stdio.h>

// Addition, Subtraction of 2 Matrices

void add(int m1[3][3], int m2[3][3], int m3[3][3], int r, int c)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			m3[i][j]  = m1[i][j] + m2[i][j];
		}
	}
	
}

int main()
{
	int r, c;
	
	printf("Enter Order Of Matrices: Rows , Columns\n");
	scanf("%d , %d", &r, &c);

	int m1[r][c], m2[r][c];
	
	printf("Enter Values Of Matrix 1: \n");
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf("\nEnter Element %d %d\n", i, j);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Enter Values Of Matrix 2: \n");
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf("\nEnter Element %d %d\n", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("\n\nMatrix 1: \n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{
			printf("%d	", m1[i][j]);
		}	
		printf("\n");
	}

	printf("\n\nMatrix 2: \n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{
			printf("%d	", m2[i][j]);
		}	
		printf("\n");
	}
	
	
	
	char ch[1]; int m3[r][c]; char ch2[1];
	
	printf("Enter Symbol '+' or '-' \n");
	scanf("%c", ch2);
	scanf("%c", ch);
	
 
	if(ch == '+')
		add(m1, m2, m3, r, c);
	
	if(ch == '-')
//		subtract(m1,m2,m3);
	
	printf("\nResult:  \n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{
			printf("%d	", m3[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}


