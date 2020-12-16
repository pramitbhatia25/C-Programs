#include <stdio.h>

//check if triangle is isosceles or not

int main()
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	
	printf("Enter a side: \n");
	scanf("%d",&s1);
	
	printf("Enter a side: \n");
	scanf("%d",&s2);

	printf("Enter a side: \n");
	scanf("%d",&s3);
	
	if(s1 == s2 || s1 == s3 || s2 == s3)
		printf("\nEntered triangle is isosceles\n");	 
	else
		printf("\nNot Isosceles\n");
		
	return 0;
}
