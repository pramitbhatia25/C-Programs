#include <stdio.h>
        
        
        
//           0
//         1 0 1
//       2 1 0 1 2
//     3 2 1 0 1 2 3
//   4 3 2 1 0 1 2 3 4


int main()
{
	printf("Enter Pyramid Height: ");
	int n;
	scanf("%d", &n);
	int l, k;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < (n-i) -1; j++)
		{
			printf("  ");
		}
		l = i;
		for(int j = 0; j < i + 1; j++)
		{
			printf("%d ", l);
			l--;
		}
		k = 1;
		for(int j = i+1; j > 1; j--)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
		
	}
	return 0;
}
