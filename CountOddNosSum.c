#include <stdio.h>

int main(){

int count = 0; int sum = 0; int n , i;

for(i = 0; i < 10; i++)
{
	printf("Enter No: \n");
	scanf("%d", &n);
	
	count += n%2;
	sum += (n%2)*n;
}

printf("Number of Odd Nos is %d and Sum is %d", count, sum);
return 0;

}
