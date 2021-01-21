#include <stdio.h>

int main()
{
	int n;
	printf("Enter Number to Test:\n");
	scanf("%d", &n);
	
	int sum = 0; int i = n;
	
	while(n%10)
	{
		sum += factorial(n%10);
		n = n/10;
	}
	
	if(sum == i) printf("Sahiiii = %d", sum);
	
	return 0;
}

int factorial(int x)
{
	return (x == 0? 1 : x * factorial(x-1));
}
