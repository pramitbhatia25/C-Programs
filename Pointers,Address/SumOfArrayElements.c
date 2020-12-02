#include <stdio.h>

//Find Sum of array elements using pointers

int main()
{
	int i, *ptr, sum = 0, arr[5] = {2, 4, 6, 8, 0};
	ptr = arr;
	
	for(i = 0; i < 5; ++i)
		sum += *(ptr + i);
		
	printf("Sum = %d\n", sum);
	return 0;
}
