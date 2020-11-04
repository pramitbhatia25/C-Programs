#include <stdio.h>

int fun(char ch)
{
	if( ch >= 97 && ch <= 122)	//Upper Case
		return ch;
	else
		return ch + 32;
} 

int main()
{
	int a; char c;

	printf("Enter A Character : \n");
	scanf("%c", &c);
	
	a = fun(c);
	printf("%c\n", a);
	return (0);
}
