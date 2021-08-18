#include <stdio.h>
#include <math.h>

int main(){

int n;
printf("Enter Powser Upto Which Required : \n");
scanf("%d",&n); 
printf("Power		Value\n");
for(int i = 0; i < n; i++)
{
	int value = pow(2, i);
	printf("%d		%d\n", i, value);

}

return 0;

}
