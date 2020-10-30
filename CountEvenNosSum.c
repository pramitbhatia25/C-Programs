#include <stdio.h>

int main(){

int count = 0; int sum = 0; int n , i;

for(i = 0; i < 10; i++)
{
	printf("Enter No: \n");
	scanf("%d", &n);
	
	count += 1 - n%2;
	sum += (1 - n%2)*n;
}

printf("Number of Even Nos is %d and Sum is %d\n", count, sum);
return 0;

}
