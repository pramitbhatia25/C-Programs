#include <stdio.h>

//check if triangle is isosceles or not

int main()
{

	char name1[20];
	int code1;
	float price1;

	char name2[20];
	int code2;
	float price2;
	
	printf("Enter a Name:\n");
	scanf("%s",name1);

	printf("\nEnter a Code:\n");
	scanf("%d",&code1);

	printf("\nEnter a Price:\n");
	scanf("%f",&price1);

	printf("\nEnter a Name:\n");
	scanf("%s",name2);

	printf("\nEnter a Code:\n");
	scanf("%d",&code2);

	printf("\nEnter a Price:\n");
	scanf("%f",&price2);
	
	
	printf("\n\n\n\tNAME\tCODE\tPRICE\n");
	printf("\t%s\t%d\t%.2f\n",name1,code1,price1);
	printf("\t%s\t%d\t%.2f\n",name2,code2,price2);

	return 0;
}
