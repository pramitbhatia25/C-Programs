#include <stdio.h>

int main(){

int n;
int flag = 1;

printf("Enter Number : \n");
scanf("%d", &n);

for(int i = 2; i <= n/2; i++)
{
	if(n%i == 0)
	{
		flag = 0;	
		break;
	}
}

if(flag == 1) printf("The No is Prime\n");
if(flag == 0) printf("The No is Not Prime\n");

return 0;

}
