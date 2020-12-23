#include <stdio.h>

//compare 2 different structure variables

int main()
{
	struct class
	{
		int number;
		char name[20];
		float marks;
	};
	
	int x;
	
	struct class student1 = { 1,"Rao",100 };
	struct class student2 = { 2,"Reddy",99 };
	struct class student3 = { 3,"Amit",80 };
	struct class student4;
	
	student4 = student3;
	
	x = (student4.marks == student3.marks)? 1:0;
	
	if(x==1)
		printf("Equal Marks\n");
	else
		printf("Not Equal\n");
		
	return 0;
}

