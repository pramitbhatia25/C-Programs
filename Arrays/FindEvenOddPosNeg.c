#include <stdio.h>

//given 1d array find pos neg even odd nos

int main()
{
	int array[20], positive = 0, negative = 0, even = 0, odd = 0, zero = 0;
	
	for(int i = 0; i < 20; i++)
	{
		printf("Enter element %d\n", i);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < 20; i++)
	{
		if(array[i]%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		if(array[i] > 0)
		{
			positive ++;
		}
		else if(array[i] < 0)
		{
			negative ++;
		}
		else
		{
			zero++;
		}
	}
	
	printf(" Positive : %d \n Negative : %d \n Odd : %d \n Even : %d \n Zero : %d \n", positive, negative, odd, even, zero);
	
	return 0;
}
