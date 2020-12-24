//copy a file
#include <stdio.h>

int main()
{
	FILE *fp = fopen("data5a.c","r");
	FILE *ft = fopen("data5b.c","w");

	char ch;
	
	if(fs == NULL)
	{
		puts("Cannot Open Source File\n");
		exit();
	}
	if(ft == NULL)
	{
		puts("Cannot Open Target File\n");
		fclose(fs);
		exit();
	}

	while( (ch = fgetc(fp)) != EOF)
	{
		fprintf(fp,"%c",ch);
	}
	
	return 0;
}	
	
	
	
