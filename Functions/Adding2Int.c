#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b;
	printf("Enter 2 nos to be added: ");
	scanf("%d %d", &a, &b);
	
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}
