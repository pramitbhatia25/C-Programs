#include <stdio.h>

long int power1(long int base, long int power)
{
	if(power == 0)
	{
		return 1;
	}
	else
	{
		return (base * power1(base, power -1));
	}
}

int main()
{
	long int base, power;
	printf("Enter Base, Power: \n");
	scanf("%ld, %ld", &base, &power);
	
	long int ans = power1(base, power);
	printf("%ld", ans);
	
return 0;

}	
