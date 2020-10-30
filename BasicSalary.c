#include <stdio.h>

void main(){

double bs, hra, da,gs;
printf("Enter Basic Salary :\n");
scanf("%lf", &bs);

if(bs<1500)
{
	hra = bs*(0.1);
	da = bs*(0.4);
}
else
{
	hra = 500;
	da = bs*(0.5);
}
gs = bs + hra + da;
printf("Gross Salary is : Rs %.2f", gs);

}
