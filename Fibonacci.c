#include <stdio.h>

int main(){

int n1 = 0; int n2 = 1;

int n;
printf("Enter No Of Terms: \n");
scanf("%d", &n);

printf("%d %d ", n1, n2);

int sum = 0;

for(int i = 0; i < n-2; i++)
{
	sum = n1 + n2;
	n1 = n2;
	n2 = sum;
	printf("%d ", sum);
}

return 0;

}
