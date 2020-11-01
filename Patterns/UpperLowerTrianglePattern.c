#include <stdio.h>
/*

   1      1
  222    222
 33333  33333
44444444444444 
 33333  33333
  222    222
   1      1

*/
int main(){


int n;
printf("Enter N: \n");
scanf("%d", &n);

for(int i = 0; i < n; i++)
{
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < ((2*i) + 1); j++)
	{
		printf("%d", i+1);
	}
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < ((2*i) + 1); j++)
	{
		printf("%d", i+1);
	}
	printf("\n");
}
 
for(int i = n-2; i >= 0; i--)
{
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < ((2*i) + 1); j++)
	{
		printf("%d", i+1);
	}
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j < ((2*i) + 1); j++)
	{
		printf("%d", i+1);
	}
	printf("\n");
}
return 0;
}
