#include <stdio.h>

int main(){

int n;

printf("Enter your Number: \n");
scanf("%d", &n);

int ms = 1;

for(int i = 1; i <= n; i++)
{
	ms *= i;
}

printf("%d", ms);

return 0;

}
