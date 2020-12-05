#include<stdio.h>

// add elements in every row of a matrix and store it in an array

int main()
{
	int i,j,a[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20} , b[4]={0,0,0,0};
	int (*pa)[5],*pb;
	pa=a;
	pb=b;
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < 5; j++)
		{
		    b[i]+=a[i][j];
		}
	}
		for ( i = 0; i < 4; i++)
		{
			printf("%d\n",b[i]);
		}
	return 0;
}
