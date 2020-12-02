#include <stdio.h>

int main()
{
	int arr[6] = {5,9,8,3,0,1};
	int *b;
	
	b = arr;
	
	printf("%u\n", b);
	printf("%d\n", *b);
	printf("%d\n", *(b+2));
	
	return 0;
}
