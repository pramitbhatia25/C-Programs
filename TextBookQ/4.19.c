#include <stdio.h>

//check if entered date, month year are valid

int main()
{
	int date = 0;
	int month = 0;
	int year = 0;
	
	printf("Enter a date: \n");
	scanf("%d",&date);
	
	printf("Enter a month: \n");
	scanf("%d",&month);

	printf("Enter a year: \n");
	scanf("%d",&year);
	
	int correct = 0;
	
	if(date<1 || date > 31)
		correct = 1;
	
	if(month<1 || month > 12)
		correct = 1;
	
	if(correct == 0)
		printf("\nCorrect Date\n");
	
	if(correct == 1)
		printf("\nWrong Date\n");
	
	 
	return 0;
}
