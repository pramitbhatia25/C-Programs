#include <stdio.h>

//Call By Value Parameter Passing

void display2(int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("=");
		printf("\n");
	}
}

void display3(int n, char ch)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%c", ch);
		printf("\n");
	}
}

int main()
{
	int n; int d; char ch;
	printf("Enter A Number: \n");
	scanf("%d", &n);
	display2(n);
	
	printf("Enter A Number Space Character :\n");
	scanf("%d %c",&d, &ch);
	display3(d, ch); 
	return 0;
}
