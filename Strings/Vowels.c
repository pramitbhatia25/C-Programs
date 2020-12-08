#include <stdio.h>

// Find no of vowels, consonants, digits in a string.

int main()
{
	char s1[150];
	printf("Enter A String : \n");
	scanf("%s", s1);
		
	int vowels = 0,consonants = 0, digits = 0;
	
	for(int i = 0; s1[i] != '\0'; i++)
	{
		if(s1[i] == 'a' || s1[i] == 'A' || s1[i] == 'e' || s1[i] == 'E' || s1[i] == 'i' || s1[i] == 'I' || s1[i] == 'o' || s1[i] == 'O' || s1[i] == 'u' || s1[i] == 'U')
			vowels++;
		else if((s1[i] > 'a' && s1[i] <= 'z')||(s1[i] > 'A' && s1[i] <= 'Z'))
		{
			consonants++;
		}
		else if(s1[i] >= '0' && s1[i] <= '9')
			digits++;
	}
	
	printf("String Entered: %s\n", s1);
	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	printf("Digits: %d\n", digits);

	return 0;
}
			
