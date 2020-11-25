#include <stdio.h>

int main()
{

	int i, item, m[20], pos = -1;
	
	printf("\nEnter Item: ");
	scanf("%d", &item);
	
	for(i = 0; i < 20; i++)
	{
		printf("\nEnter data: ");
		scanf("%d", &m[i]);
	}
	for(i = 0; i < 20; i++)
	{
		if(item == m[i])
		{
			pos = i;
			break;
		}
	}
	
	if(pos == -1)
	{
		printf("Not present");
	}
	else
	{
		printf("Position is %d", pos);
	}

	return 0;
}
