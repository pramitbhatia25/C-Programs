//display contents of a file on screen
#include <stdio.h>

int main()
{
	FILE *fp = fopen("data3.c","r");
	
	char ch;
	
	while( (ch = fgetc(fp)) != EOF )
		printf("%c ",ch);
	
	fclose(fp);
	return 0;
}

