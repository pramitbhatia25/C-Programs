//copy a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("data5a.c","r");
	FILE *ft = fopen("data5b.c","w");

	char ch;
	
	if(fp == NULL)
	{
		puts("Cannot Open Source File\n");
		exit(0);
	}
	if(ft == NULL)
	{
		puts("Cannot Open Target File\n");
		fclose(fp);
		exit(0);
	}

	while( (ch = fgetc(fp)) != EOF)
	{
		fprintf(ft,"%c",ch);
	}
	
	return 0;
}	
	
	
	
