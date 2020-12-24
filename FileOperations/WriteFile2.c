//write contents of array to a file
#include <stdio.h>

int main()
{
	FILE *fp; // pointer pointing to file type
	int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, i;
	fp = fopen ( "data2.c", "w" ); // fopen returns a pointer, w is write mode
	
	for(i = 0; i < 10; i++)
	{
		fprintf(fp,"%d\n",a[i]);
	}
	
	fclose(fp);
	return 0;
}


