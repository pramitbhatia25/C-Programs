#include <stdio.h>

//Program To Reverse A Number


int sum = 0, rev;


int reverse(int n)
{
	if(n != 0)
	{
		rev = n%10;			//gets last digit (least sig)
		sum = sum*10 + rev;		//store last digit in sum as first digit
		reverse(n/10);			//n/10 => last digit dropped....then we get rev
	}
	else
	{
		return sum;
	}

return sum;
}


int main()
{
	int a, rev_a;
	
	printf("Enter A Number To Reverse: \n");
	scanf("%d", &a);
	
	rev_a = reverse(a);
	
	printf("%d", rev_a);
	
	return 0;
}

