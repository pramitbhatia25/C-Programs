#include <stdio.h>

//cost of one type of mobile service is 250 plus 1.25 for each call made above 100 calls

int main()
{
	int calls = 0;
	printf("Enter total no. of calls made: \n");
	scanf("%d",&calls);
	
	float cost = (calls - 100 > 0) ? (calls - 100)*(1.25) + 250 : 250;
	printf("\nThe total cost is : %.2lf\n", cost);
	return 0;
}
