#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>


int main(void)
{
	DIR *d;
	struct dirent *dir;
	
	d = opendir(".");
		
	if(d != NULL)
	{
		while((dir = readdir(d)) != NULL)
		{
			printf("%s\n", dir -> d_name);
		}
		closedir(d);
	}
	
	printf("Would you like to delete a file? Y/N\n");
	
	char ans;
	scanf("%c", &ans);
	
	if(ans == 'Y')
	{
		printf("Enter File Name To Delete :\n");
		char* fname = malloc(sizeof(char)*50);
		scanf("%s", fname);
		remove(fname);
	}	
	
	return 0;
}	 
	

