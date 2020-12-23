#include <stdio.h>

//Sometimes we need to have user defined datatypes, that is dissimilar datatypes in a structure
//eg arrays only have one type of datatype

//we use struct
//basically we are writing int and not int a
//we are only creating a datatype definition like int, float, char
//memory is only allocated to the datatype when we write int a or datatype b


//datatype doesnt have existenc in memory, the moment we declare a variable of that datatype then memory is allocated

/*
struct nameofstruct
{
	data_type name_of_data_members;
}

*/

struct book			//structure definition
{
	char name[20];		//data members declaration
	float price;
	int pages;		
};

//struct book b,k[5];	//declaring a varibale//thus we have structure of book definition
			//basically here k[0] k[1] .... are all different books, thus 6 variables are there!
			//we can access data members of structures using 2 operators
			// in arrays we can access using * and [] operators
			// here we use . and arrow (->) 

//syntax is structurevaribalename.datatypemember
//if i want to access using structure variable use .
//if we wanna use pointers syntax is
// pointer_to_structvaribale -> datatype



//3 ways to declare struct
//1 struct name
//  {
//  }
//  struct name n1,n2;


//2 struct name
//  {
//  }
//  n1,n2;


//3 struct		not recommended as we cant use datatype further
//  {
//  }
//  n1,n2;

int main()
{
	struct book b,k[5];
	b.price = 20.50;
	b.pages = 100;
	k[0].pages = 100;
	//essentially we had 5 variables, all books, k[0] to k[5]. each variable k[i] is not an integer of array, it is struct
	
	printf("ENTER NAME");
	scanf("%s",k[0].name);
	//we dont use & with string
	b.name[5] = 's';
}
