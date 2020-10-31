#include <stdio.h>


int factorial(int na){

int ma = 1;
for(int i = 1; i <= na; i++)
{	
	ma = ma*i;
}

return ma;

}


int combination(int upper, int lower){

int upperf = factorial(upper);
int lowerf = factorial(lower);
int n = upper - lower;

int ans = (upperf) / ((factorial(n))* lowerf);

return ans;
}


int main(){
int n;
printf("Enter No Of Rows: \n");
scanf("%d", &n);

for(int i = 0; i < n; i++)
{
	for(int j = 0; j < (n-i)-1; j++)
	{
		printf(" ");
	}
	for(int j = 0; j <= i; j++)
	{
		int com = combination(i, j);
		printf("%d ", com);
	}
	printf("\n");
}

return 0;
}
