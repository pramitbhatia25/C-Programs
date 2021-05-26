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

void playchance()
{
	printf("\n\nPlayer %d make your move: ", chance);
	int s = 0;
	scanf("%d", &s);
	if(s == 1)
	{
		if(c1 == ' ')
		{
			if(chance == 1)
				c1 = 'x';
			if(chance == 2)
				c1 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 2)
	{
		if(c2 == ' ')
		{
			if(chance == 1)
				c2 = 'x';
			if(chance == 2)
				c2 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 3)
	{
		if(c3 == ' ')
		{
			if(chance == 1)
				c3 = 'x';
			if(chance == 2)
				c3 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 4)
	{
		if(c4 == ' ')
		{
			if(chance == 1)
				c4 = 'x';
			if(chance == 2)
				c4 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 5)
	{
		if(c5 == ' ')
		{
			if(chance == 1)
				c5 = 'x';
			if(chance == 2)
				c5 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 6)
	{
		if(c6 == ' ')
		{
			if(chance == 1)
				c6 = 'x';
			if(chance == 2)
				c6 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 7)
	{
		if(c7 == ' ')
		{
			if(chance == 1)
				c7 = 'x';
			if(chance == 2)
				c7 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 9)
	{
		if(c9 == ' ')
		{
			if(chance == 1)
				c9 = 'x';
			if(chance == 2)
				c9 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else if(s == 8)
	{
		if(c8 == ' ')
		{
			if(chance == 1)
				c8 = 'x';
			if(chance == 2)
				c8 = 'y';
			
		}
		else
		{
			printf("Marked, lost chance");
		}
	}
	else
	{
		printf("Sorry, %d is not possible, lost chance", s);
	}
	printf("\n\n");
	printboard();


	
}

bool checktowin()
{
	if(c1 == c2 && c1 == c3 && c1 != ' ')
		return true;
	if(c1 == c5 && c1 == c9 && c1 != ' ')
		return true;
	if(c1 == c4 && c1 == c7 && c1 != ' ')
		return true;
	if(c2 == c5 && c2 == c8 && c2 != ' ')
		return true;
	if(c3 == c5 && c3 == c7 && c3 != ' ')
		return true;
	if(c3 == c6 && c3 == c9 && c3 != ' ')
		return true;
	if(c4 == c5 && c4 == c6 && c4 != ' ')
		return true;
	if(c7 == c8 && c7 == c9 && c7 != ' ')
		return true;
	return false;
}


int main()
{
	/*
	initially board is empty
	  c  |  c  |  c  
	 ----|-----|-----
	  c  |  c  |  c  
	 ----|-----|-----
	  c  |  c  |  c    
	this is character board -- all characters are variables -- can be either x or o
	*/
	
	printf("\n\nWelcome to TicTacToe! -- Player 1 Will Start\n\n");		
	printboard();
	
	bool checkwin = false;
	while(!checkwin)
	{
		playchance();
		checkwin = checktowin();
		if(!checkwin)
			if(chance == 1)
				chance = 2;
			else
				chance = 1;
	}
	
	printf("\n\nCongratulations!, playe %d has won!\n",chance);
}
