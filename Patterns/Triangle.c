#include <stdio.h>

/*

*
* *
* * *
* * * *

*/

void main(){

int x;
printf("Enter rows: \n");
scanf("%d", &x);

for(int i = 1; i <= x; i++)
{

	for(int j = 1; j<= i; j++)
	{
		printf("*	");
	}
	printf("\n");
}
}
