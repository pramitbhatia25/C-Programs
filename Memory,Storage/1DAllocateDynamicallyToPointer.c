#include <stdio.h>
#include <stdlib.h>


//Allocate n elements dynamically to a pointer variable ,assign data and find sum of all elements using poonter variuable

int main()
{
	int n,i,*ptr,sum = 0;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	
	ptr = (int*) malloc(n*sizeof(int));
		
	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d of array:",i);	
		scanf("%d",ptr + i);
		sum += *(ptr + i);
	}
	
	printf("SUM = %d",sum);
	free(ptr);
	return 0;
}


