#include <stdio.h>

// Understand scope of variable

int main()
{
	int a = 5;
	
	{
		int a = 10;
		printf("A inside bracket before ++ is %d\n",a);
		a++;
		printf("A inside bracket after ++ is %d\n",a);
	}
	
	printf("A outside bracket after ++ is %d\n",a);
	return 0;
}

/*in a function automatic variables are initialized every time we enter to the function
however in case of a static variable it is initialized once second time onwards if the function is called, the starting variable "will not" be reinitialized. It will takee its previus value to 
continue its execution basically static statement goes away
*/
