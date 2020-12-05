#include <stdio.h>

//Print Names Of All Pandavs AND find all a's in their names

int main()
{

	char *p[5];
	
	char a[] = "Yudhishtir";
	char b[] = "Bhim";
	char c[] = "Arjun";
	char d[] = "Nakul";
	char e[] = "Sahadev";
		
	p[0] = a;
	p[1] = b;
	p[2] = c;
	p[3] = d;
	p[4] = e;
	
	int count = 0; 
	
	for(int i = 0; i < 5; i++)
	{
		printf("%s \n", p[i]);
	}


	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; p[i][j]; j++)
		{
			count += p[i][j] == 'a';
		}
	}
	
	printf("%d\n", count);
	return 0;
}
