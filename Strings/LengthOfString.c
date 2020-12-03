#include <stdio.h>

//Read and display a string from source

int main()
{
	char str[100];
	int i = 0;
	
	printf("Enter A String : ");
	scanf("%s", str);
	
	while(str[i] != '\0')		// or int i = -1; while(str[++i]);
		++i;
	
	printf("Length Of String: %d\n", i);
	
	return 0;
}
