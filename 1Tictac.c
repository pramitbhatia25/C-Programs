#include <stdio.h>
#include <stdbool.h>

int chance = 1;
//chance can be 1 or 2 --- starts with 1

char c1 = ' ';
char c2 = ' ';
char c3 = ' ';
char c4 = ' ';
char c5 = ' ';
char c6 = ' ';
char c7 = ' ';
char c8 = ' ';
char c9 = ' ';


void printboard()
{
	printf("  %c  |  %c  |  %c  \n", c1, c2, c3);
	printf("-----|-----|-----\n");
	printf("  %c  |  %c  |  %c  \n", c4, c5, c6);
	printf("-----|-----|-----\n");
	printf("  %c  |  %c  |  %c  \n", c7, c8, c9);

}

void markspot(int s)
{
	if(chance == 1)
	{
		switch(s)
		{
			case 1: (c1 == ' ') ? (c1 = 'x') : printf("Marked");break;
			case 2: (c2 == ' ') ? (c2 = 'x') : printf("Marked");break;
			case 3: (c3 == ' ') ? (c3 = 'x') : printf("Marked");break;
			case 4: (c4 == ' ') ? (c4 = 'x') : printf("Marked");break;
			case 5: (c5 == ' ') ? (c5 = 'x') : printf("Marked");break;
			case 6: (c6 == ' ') ? (c6 = 'x') : printf("Marked");break;
			case 7: (c7 == ' ') ? (c7 = 'x') : printf("Marked");break;
			case 8: (c8 == ' ') ? (c8 = 'x') : printf("Marked");break;
			case 9: (c9 == ' ') ? (c9 = 'x') : printf("Marked");break;
		}
	}
	if(chance == 2)
	{
		switch(s)
		{
			case 1: (c1 == ' ') ? (c1 = 'y') : printf("Marked");break;
			case 2: (c2 == ' ') ? (c2 = 'y') : printf("Marked");break;
			case 3: (c3 == ' ') ? (c3 = 'y') : printf("Marked");break;
			case 4: (c4 == ' ') ? (c4 = 'y') : printf("Marked");break;
			case 5: (c5 == ' ') ? (c5 = 'y') : printf("Marked");break;
			case 6: (c6 == ' ') ? (c6 = 'y') : printf("Marked");break;
			case 7: (c7 == ' ') ? (c7 = 'y') : printf("Marked");break;
			case 8: (c8 == ' ') ? (c8 = 'y') : printf("Marked");break;
			case 9: (c9 == ' ') ? (c9 = 'y') : printf("Marked");break;
		}
	}
}

bool checktowin()
{
	return false;
}


int main()
{
	//initially board is empty
/*	
	  c  |  c  |  c  
	 ----|-----|-----
	  c  |  c  |  c  
	 ----|-----|-----
	  c  |  c  |  c  
	  
this is character board -- all characters are variables -- can be either x or o
*/

	printf("\n\nWelcome to TicTacToe! -- Player 1 Will Start\n\n");
	printboard();
	printf("\n");
	
	bool checkwin = false;
	while(!checkwin)
	{
		printf("Player %d make your move -- Enter spot no:\n", chance);
		int s =0;
		scanf("%d", &s);
		markspot(s);
		printboard();
		if(checktowin())
			checkwin = true;
		else
			checkwin = false;
	}
	
	  
}
