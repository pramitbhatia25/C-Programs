#include <stdio.h>

//Concatenate 2 Strings

int main()
{
	char s1[100];
	char s2[100];
	
	printf("Enter A String 1: ");
	scanf("%s", s1);
	printf("Enter A String 2: ");
	scanf("%s", s2);
	
	int lengths1 = 0;
	
	while (s1[lengths1] != '\0')
	{
    		lengths1++;
	}
	
	for (int j = 0; s2[j] != '\0'; j++)
	{
    		s1[lengths1] = s2[j];
    		lengths1++;
  	}

	s1[lengths1] = '\0';
	
	printf("After Concatenation: %s \n", s1);
	
	return 0;
}





