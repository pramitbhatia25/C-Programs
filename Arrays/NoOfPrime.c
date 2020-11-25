#include <stdio.h>

int main()
{

	int i, avg, count =  0, sum = 0, marks[20];
	
	for(i = 0; i < 20; i++)
	{
		printf("\nEnter Marks: ");
		scanf("%d", &marks[i]);
	}
	for(i = 0; i < 20; i++)
	{
		sum += marks[i];
		if(marks[i] > 89)
			count++;
	}
	
	avg = sum/20;
	
	printf("Average is %d", avg);
	printf("Above 90: %d", count);

	return 0;
}
