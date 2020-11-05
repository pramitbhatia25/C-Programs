#include <stdio.h>

int fibonacci(int n)
{
	return (n ==1 || n == 2 ? 1 : fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
	int n;
	
	printf("Enter Number Of Terms Required: \n");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		printf("\n%d", fibonacci(i));
	}
	
	return 0;
}
