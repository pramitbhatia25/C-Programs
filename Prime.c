#include <stdio.h>

int main()
{

	int n;
	int flag = 0;
	printf("Enter Number : \n");
	scanf("%d", &n);

	flag = prime(n);

	if(flag == 1) printf("The No is Prime\n");
	if(flag == 0) printf("The No is Not Prime\n");

	return 0;

}

int prime(int n)
{
	int flag = 1;
	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 0;	
			break;
		}
	}	

	
	return flag;

}
