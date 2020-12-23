#include <stdio.h>

//arrow operator cannot be used with name of structure
//Syntax =====  pointer to structure variable -> name of data member


int main() 
{

	struct book
	{
		char name[20];
		float price;
		int pages;
	};
	
	
	struct book b1 = {"k1 Ri",123.23,122};
	struct book *ptr2,b[3];
	
	struct book *ptr;
	
	ptr = &b1;

	printf("\n%s",ptr->name);
	printf("\n%f",ptr->price);
	printf("\n%d",ptr->pages);

	int i;
	ptr2 = b;
	for(i = 0; i < 3; i++)
	{
		printf("\nEnter name,page,price\n");
		scanf("%s %d %f", (ptr2+i)->name, &(ptr2+i)->pages, &(ptr2+i)->price);
	}
	for(i = 0; i < 3; i++)
	{
		printf("\nname,page,price is %s %d %f\n",(ptr2+i)->name, (ptr2+i)->pages, (ptr2+i)->price);
	}

	
	
	//ptr is pointer pointing to book variable b1
	//b1 is the name of the variable
	//&b1 is the address of the b1 variable
	//* operator is not applicable here
	//ptr is pointing to b1 thus we can access all members of b1 with ptr
	
	//thus we can access by writing ptr -> name
	

	
	//if we write struct book *ptr, b[5]; we have declared 5 structure variables b[0] 1,2,3,4 
	//also we have one pointer variable.....ptr asks for an address to a structure, of book type
	//so we have a strucutre b[0], we can assign ptr = &b[0];
	
	//b is address to first structure b[0]., &b is address to 5 structures
	
	// if we write ptr = b; it points to first structure
	
	//ptr is pointing to b[0], (ptr + 1) is a pointer pointing to b[1]
	
	
	return 0;	
}
