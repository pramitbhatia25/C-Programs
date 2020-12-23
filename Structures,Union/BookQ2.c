#include <stdio.h>

//pritn from nested structure

int main()
{
	struct info
	{
		char name[20];
		char address[20];
	};
	
	struct classinfo
	{
		int rollno;
		struct info a;
	};
	
	struct classinfo student1 = { 1,"Rao","Pune" };
	struct classinfo student2 = { 2,"Reddy","Mumbai" };
	struct classinfo student3 = { 3,"Amit","Pune" };
	struct classinfo student4 = { 4,"Adarsh","Mumbai"};
	
	
	printf("Student Details Are:\nStudent 1: RollNo: %d Name: %s Address: %s\nStudent 2: RollNo: %d Name: %s Address: %s\nStudent 3: RollNo: %d Name: %s Address: %s\nStudent 4: RollNo: %d Name: %s Address: %s\n",student1.rollno, student1.a.name,student1.a.address,student2.rollno, student2.a.name,student2.a.address,student3.rollno, student3.a.name,student3.a.address,student4.rollno, student4.a.name,student4.a.address);
	
	
	return 0;
}

