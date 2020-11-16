#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
	int orignaln = 0, result=0, remainder = 0;
	int noofdigits = 0;
	orignaln = n;
	
	
	while(n > 0)
	{
		noofdigits += 1;
		n = n/10;
	}
	
	n = orignaln;
	
	while(n>0)
	{
		remainder = n%10;
		result += pow(remainder, noofdigits);
		n = n/10;
	}
	
	return result == orignaln ? 1 : 0;
}

int main()
{
	int no;
	printf("Enter upper limit of nos to be checked: \n");
	
	scanf("%d", &no);
	
	for(int i = 0; i < no; i++)
	{
		int ans = armstrong(i);
		if(ans == 1) printf("%d -- yes\n", i);
	}

	return 0;
}
	
	
