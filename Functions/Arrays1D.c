#include <stdio.h>

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char c[12] = { 'a','b','c','d','e','f','g','h','i','j', 'k', 'l' };
	float d[10] = { 0.1, 1.9, 2.8, 3.7, 4.6, 5.5, 6.4, 7.3, 8.2, 9.1 };
	 
	for(int i = 0; i < 10; i++)
	{
		printf("\n%d\n", a[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("\n%c\n", c[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("\n%f\n", d[i]);
	}
	
	return 0;
}
