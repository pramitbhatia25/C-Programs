//count chars, space, tabs and newlines

#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;
	int noc = 0,nob = 0, not = 0, non = 0;
	
	fp = fopen("data4.c","r");
	
	while( (ch = fgetc(fp)) != EOF)
	{
		noc++;
		if(ch == ' ')
			nob++;
		if(ch == '\t')
			not++;
		if(ch == '\n')
			non++;
	}
	printf("%d\n%d\n%d",nob,not,non);

	fclose(fp);
	return 0;
}
