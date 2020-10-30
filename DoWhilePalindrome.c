#include <stdio.h>

int main(){

long int n, rev_n = 0, org_n;
printf("Enter the Number: \n");
scanf("%ld", &n);

org_n = n;

do
{
	rev_n = rev_n*10 + n%10;
	n = n/10;
}while(n > 0);

printf("\n The Reverse Number Is %ld", rev_n);
if(org_n == rev_n)
{
	printf("\n Palindrome");
}
else 
{
	printf("\n Not A Palindrome");
}

return 0;

}
