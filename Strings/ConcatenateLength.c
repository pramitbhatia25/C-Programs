#include <stdio.h>

//Concatenate 2 Strings

int main()
{
	char s1[100];
	char s2[100];
	char ch;
	
	printf("Enter A String 1: ");
	scanf("%s", s1);
	scanf("%c", &ch);
	printf("Enter A String 2: ");
	scanf("%s", s2);
	
	int i = 0; 
	int j = length(s1);
	while(s1[j++] = s2[i++]);

	
	puts("After Concatenating: ");
	puts(s1);

	return 0;
}

int length(char *s)
{
	int k = -1;
	while(s[++k]);
	return k;
}
