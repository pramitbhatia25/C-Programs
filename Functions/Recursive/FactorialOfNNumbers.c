#include <stdio.h>


long int smallfactorial(int n)
{
	return (n==1 ? 1 : n*smallfactorial(n-1));
}

int main()
{
	long int n;
	printf("Enter Number of Nos for which you want factorial: \n");
	scanf("%ld", &n);
	
	for(int i = 1; i <= n; i++)
	{
		long int fact;
		
		fact = smallfactorial(i);
		
		printf("Factorial value  of %d = %ld\n", i, fact);
	}	
	
return 0;

}	
