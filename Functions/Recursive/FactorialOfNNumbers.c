#include <stdio.h>


int smallfactorial(int n)
{
	return (n==1 ? 1 : n*smallfactorial(n-1));
}

int main()
{
	int n;
	printf("Enter Number of Nos for which you want factorial: \n");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		int fact;
		
		fact = smallfactorial(i);
		
		printf("Factorial value  of %d = %d\n", i, fact);
	}	
	
return 0;

}	
