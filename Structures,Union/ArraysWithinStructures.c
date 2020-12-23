#include <stdio.h>

int main()
{

	struct marks
	{
		int rollno;
		int subject[6];
	} students[5];
	
	for(int i = 0; i < 5; i++)
	{
		printf("Enter roll,subject\n");
		scanf("%d %d", &students[i].rollno,&students[i].subject[0]);
	}
	for(int i = 0; i < 5; i++)
	{
		printf("Roll,subject for student[%d] is %d %d\n", i, students[i].rollno , students[i].subject[0]);
	}
	return 0;
}
