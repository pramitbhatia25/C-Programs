#include <stdio.h>

//Read and display a string from source

int main()
{
	char src[100], dst[100];
	int i = 0;
	
	printf("Enter A String: ");
	scanf("%s", src);
	
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	
	printf("\nDestination String: %s\n", dst);
	return 0;
}
