#include <stdio.h>

int SumOfDigits(int n)
{
	return( n/10 ? n%10 + SumOfDigits(n/10) : n);		//n/10 implies we check if n is single digit no.
}								// if it returns 0 implies false => returns n


int main()
{
	int a, s;
	
	printf("Enter Any Number: \n");
	scanf("%d", &a);
	
	s = SumOfDigits(a);
	
	printf("Sum Of Digits of %d = %d\n", a, s);
	
	return 0;
}
