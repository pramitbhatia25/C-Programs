#include <stdio.h>

int find_max (int n)			//n is the total no of nos given.
{
	int next_num, largest = 0, i;	//
	for(i = 0; i < n; i++)
	{
		printf("Enter The Next Number: \n");
		scanf("%d", &next_num);
		
		if(next_num > largest)
		{
			largest = next_num;
		}
	}

return largest;

}

int main()
{
	int a;
	a = find_max(10);	//find max of 10 nos which user will input
	
	printf(" Max is %d\n", a);
	
	printf(" Max is %d\n", find_max(15));   // find max of 15 nos

return 0;

}



