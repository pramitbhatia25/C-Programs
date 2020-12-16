#include <stdio.h>

//make a struct book and assign values to a variable of book

int main()
{
	struct book
	{
		char name[20];
		float price;
		int pages;
	};
	
	struct book b1,b2;
	
	printf("\nEnter the names,page,price of book1\n");
	scanf("%s%d%f",b1.name,&b1.pages,&b1.price);

	printf("\nEnter the names,page,price of book2\n");
	scanf("%s%d%f",b2.name,&b2.pages,&b2.price);
	
	printf("\nThis is data entered:\nBook 1 name %s pages %d price %f\nBook 2 name %s pages %d price %f\n",b1.name,b1.pages,b1.price,b2.name,b2.pages,b2.price);
	return 0;
}
