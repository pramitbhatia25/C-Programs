//Read contents of a file, store int onto array, and find sum of the elements
//name of file    data.c
//10 20 30 40....

//fscanf syntax is mostly same we have to add pointer to the file
#include <stdio.h>

int main()
{
	FILE *fp; // pointer pointing to file type
	int a[10], sum = 0, i;
	fp = fopen ( "data1.c", "r" ); // fopen returns a pointer, r is read mode
	
	for(i = 0; i < 10; i++)
	{
		fscanf(fp,"%d\n",&a[i]); // after reading the first data the pointer points to the next data point in the file, so first 10 then 20
		sum += a[i];
	}
	
	printf("SUM = %d", sum);
	
	for(i = 9; i >= 0; i--)
	{
		printf("\n%d",a[i]);
	}
	fclose(fp);
	return 0;
}


