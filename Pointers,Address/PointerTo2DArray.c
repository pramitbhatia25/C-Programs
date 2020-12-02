#include <stdio.h>

int main()
{
	int b[4][3] = {5,9,8,3,3,1,3,10,11,32,14,12};
	
	
	printf("%u\n", &b);
	printf("%d\n", *&b);
	printf("%u\n", *b);
	printf("%d\n", **b);
	printf("%u\n", *(b+2));
	printf("%d\n", *(*(b+2) + 1));
	
	return 0;
}


/*
In call by reference parameter passing, the formal parameter is always an address/pointer variable declaration
Formal parameter is always a declaration statement
Actual parameter appears in right hand side of declaration statement
Actual p can be an address, address expression, at the time of calling a function the actual parameter(address) is assigned to formal parameter


Write a function which will exchange or swap btw two variables
swapby(int*x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("\n	x = %d y = %d", *x, *y);
}
*/
