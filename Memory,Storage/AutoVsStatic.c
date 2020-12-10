#include <stdio.h>

// Understand scope of variable

void incrementauto()
{
	auto int m = 1;
	printf("%d\n",m);
	m++;
}

void incrementstatic()
{
	static int m = 1;
	printf("%d\n",m);
	m++;
}

int main()
{
	incrementauto();
	incrementauto();
	incrementauto();
	incrementstatic();
	incrementstatic();
	incrementstatic();
	
	return 0;
}


/*
thus increment auto gives 1 always
but increment static gives 1 then 2 then 3

in a function automatic variables are initialized every time we enter to the function
however in case of a static variable it is initialized once second time onwards if the function is called, the starting variable "will not" be reinitialized. It will takee its previus value to 
continue its execution basically static statement goes away
*/
