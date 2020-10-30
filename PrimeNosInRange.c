#include <stdio.h>

int main(){

int l, u;
printf("Enter Lower Limit: \n");
scanf("%d", &l);
printf("Enter Upper Limit: \n");
scanf("%d", &u);

for(int i = l; i <= u; i++)
{

	int n = i;
	int flag = 1;

	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 0;	
			break;
		}
	}

	if(flag == 1) printf("%d \n", n);
}

return 0;

}
