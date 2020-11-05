#include <stdio.h>

//To find Factorial Of A Number

long int factorial(int n)
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
	int a; long int fact;
	printf("Enter any Number: \n");
	scanf("%d", &a);
	
	fact = factorial(a);
	
	printf("Factorial value = %ld\n", fact);
	return 0;
}	
