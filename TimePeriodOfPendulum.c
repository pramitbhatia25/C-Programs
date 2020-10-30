#include <stdio.h>
#include <math.h>

#define PI 3.14
#define G 9.8

int main(){

int l;
float t;
printf("Length \t\t Time Period");
for(l = 10; l <= 50; l += 10)
{
	t = 2.0* PI* sqrt(l/G);
	printf("\n %d \t\t %5.2f", l, t);
}

return 0;
}


