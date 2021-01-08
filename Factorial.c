#include <stdio.h>
//find factorial
int main(){

int n;

puts("Enter your Number: \n");
gets(n);
//scanf("%d", &n);

int ms = 1;

for(int i = 1; i <= n; i++)
{
	ms *= i;
}

printf("%d", ms);

return 0;

}
