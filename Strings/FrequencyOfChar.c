#include <stdio.h>
#include <string.h>

//Read and display a string from source

int main()
{
	char b[100], ch, i = 0, count = 0;
	
	printf("Enter A String: ");
	fgets(b, 100, stdin);
	
	printf("\nEnter A Character To Find Frequency: ");
	scanf("%c", &ch);
	
	while(b[i])
	{
		if(ch == b[i++])
		{
			++count;
		}
	}
	
	printf("Frequency of %c = %d\n", ch, count);
	
	return 0;
}
