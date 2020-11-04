#include <stdio.h>

float add(float a, float b)
{
	return a+b;
}

int main()
{
	float a, b;
	printf("Enter 2 nos to be added: ");
	scanf("%f %f", &a, &b);
	
	float sum = add(a, b);
	printf("%.0f\n", sum);
	return 0;
}
