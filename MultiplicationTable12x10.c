#include <stdio.h>

int main(){

for(int i = 1; i <11; i++)
{
	for(int j = 1; j <=12; j++)
	{
		int multiple = i*j;
		printf("%d \t", multiple);
	}
	printf("\n");
}

return 0;

}
