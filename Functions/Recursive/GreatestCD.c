#include <stdio.h>

int GCD(int n1, int n2)			//n1>= n2
{
	return( n1%n2 ? GCD(n2, n1%n2) : n2);
}

int main()
{
	int g, a, b;
	
	printf("Enter 2 positive integers: \n");
	scanf("%d %d", &a, &b);
	
	g = ( a > b ? GCD(a, b) : GCD (b, a));
	
	printf("GCD is : %d", g);
	
	return 0;
}
