#include <stdio.h>

int main()
{
	struct address
	{
		char phone[15];
		char city[25];
		int pin;
	};
	
	struct emp
	{
		char name[25];
		struct address adr;
	};
	
	struct emp e = {"Pramit","54545","Pune",10};
	
	printf("\nName is %s\nPhone No is %s\nCity is %s\nPin is %d\n",e.name,e.adr.phone,e.adr.city,e.adr.pin);
	
	return 0;
}
	
