#include <stdio.h>

void main()
{
	int n, m;
	printf("Enter No: \n");
	scanf("%d", &n);
	printf("Enter Upto What Multiple: \n");
	scanf("%d", &m);
	for(int i = 1; i < m+1; i++)
	{
		int x  = n*i;
		printf("%d  *  %d = %d\n", n, i, x);
	}
}

