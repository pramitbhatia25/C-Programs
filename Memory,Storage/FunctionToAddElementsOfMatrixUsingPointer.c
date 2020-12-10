#include <stdio.h>
/*how do we pass 2dimensional array into a function

	to pass a single variable in call by reference we pass its address.
	to pass one dimensional array in call by reference we declare the formal parameter as address to single element
	normally it is address of first eleemtnt of the array.
	to pass a 2d array in call by reference, we declare the formal parameter as a "pointer to size of a row" int(*pa)[5], so that the 2d array can be accesses using this pointer 
	as we do in case of 2d array. 
	
	write a function to add eleements preesent in every row of a matrix and store it in an array ising pointer
*/	

void add_mat_row(int (*pa)[5], int *pb)
{
	int i, j;
	for(i = 0; i < 4; i++)
	{
		pb[i] = 0;
		for(j = 0; j < 5; j++)
		{
			pb[i] = pb[i] + pa[i][j];
		}
	}
}

void main()
{
	int x[4][5], y[4];
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			x[i][j] = 1;
		}
		
	}
	
		
	add_mat_row(x,y);
	
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n",y[i]);
	}
	
}
		
//thus here x has 4 rows of 5 elements each, thus output is sum of each row that is 5
		
//excerice 4.13, 4.19,4.20,5.10,5.14,6.4,6.16,6.19,7.20,8.3,8.5,8.8,8.18,9.8,9.11,9.17,10.8,10.16,10.19

