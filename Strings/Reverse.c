#include <stdio.h>

//Reverse String

int main()
{
	char s1[100];
	char s2[100];
	
	printf("Enter A String: ");
	scanf("%s", s1);

	int i = 0;
	
	while(s1[i] != '\0')
	{
		i++;
	}
	
	for(int j = i-1; j >= 0; j--)
	{
		s2[i-j-1] = s1[j];
	}
	
	puts("After Reverse: ");
	puts(s2);

	return 0;
}
