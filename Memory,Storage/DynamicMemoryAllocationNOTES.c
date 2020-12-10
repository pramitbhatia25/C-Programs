#include <stdio.h>

// Understand scope of variable

void function1()
{
	int m = 20;
	printf("%d\n",m);
}

void function2()
{
	int m = 30;
	function1();
	printf("%d\n",m);
}

int main()
{
	auto int i = 1;
	{
		{
			printf("%d\n",i);
		}
		printf("%d\n",i);
	}
	
	int m = 10;
	function2();
	printf("%d\n",m);
	
	return 0;
}

/*in a function automatic variables are initialized every time we enter to the function
however in case of a static variable it is initialized once second time onwards if the function is called, the starting variable "will not" be reinitialized. It will takee its previus value to 
continue its execution basically static statement goes away
*/
