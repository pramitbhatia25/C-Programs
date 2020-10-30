#include <stdio.h>

int main(){

//Enetr 10 nos from kb one after another display no of prime nos you have ebntered

int count = 0;

for(int i = 0; i < 10; i++)
{
	int n;
	int flag = 1;

	printf("Enter Number : \n");
	scanf("%d", &n);

	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 0;	
			break;
		}
	}

	if(flag == 1) count++;
}

printf("The No of Primes is : %d\n", count);

return 0;

}
