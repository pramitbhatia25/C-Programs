#include <stdio.h>

int factorial(int n)
{
	if(n == 1) return 1;
	else
	return (n * factorial(n-1));
}

int smallfactorial(int n)
{
	return (n==1 ? 1 : n*smallfactorial(n-1));
}

int main()
{
	int a, fact;
	printf("Enter any Number: \n");
	scanf("%d", &a);
	
	fact = factorial(a);
	
	printf("Factorial value = %d\n", fact);
	return 0;
}	
