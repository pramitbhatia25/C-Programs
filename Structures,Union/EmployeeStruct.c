#include<stdio.h>

//struct used for emplyee details


   
int main()
{
	struct employee
	{
		char name[20];
		char address[20];
		float salary;
		int age;
	};
    
	
	int n = 0;
	
	printf("Enter no of employee:\n");
	scanf("%d",&n);

	struct employee c[n];
	
	for(int i=0; i<n; i++)
	{
		printf("\nEnter name,address,salary and age : ");
        	scanf("%s %s %f %d",c[i].name,c[i].address,&c[i].salary,&c[i].age);
    	}
    	
    	printf("\nEmployee Details\n");
    	for(int i=0; i<n; i++)
	{       
        	printf("\n%s %s %.2f %d",c[i].name,c[i].address,c[i].salary,c[i].age);
	}
	
	float sum = 0;	
	float avg;
    	printf("\nAverage Salary\n");
    	for(int i=0; i<n; i++)
	{       
		sum += c[i].salary;
	}
	
	avg = sum/n;
	printf("\nThe Average Salary is %.2f",sum);
	
	return 0;
}
