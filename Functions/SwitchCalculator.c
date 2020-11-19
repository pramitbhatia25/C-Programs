#include <stdio.h>


//Calculator
//Enter 3 character phrase , like 3 * 4


int add(int a, int b)
{
	return a+b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int subtract(int a, int b)
{
	return a-b;
}

int modulo(int a, int b)
{
	return a%b;
}

int main()
{
	int a, b; char operation;
	
	printf("Enter phrase: ");
	scanf("%d %c %d", &a, &operation, &b);
	
	switch(operation)
	{
		case 'd': printf("%d\n", add(a, b)); break;

		case '-': printf("%d\n", subtract(a, b)); break;

		case '/': printf("%d\n", divide(a, b)); break;

		case '*': printf("%d\n", multiply(a, b)); break;

		case '%': printf("%d\n", modulo(a, b)); break;
		
		default: printf("Enter Valid Phrase\n"); main();
	
	}

	return 0;
}
