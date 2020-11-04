#include <stdio.h>
#include <stdbool.h>


/* This is a playable TicTacToe Game in C.
   To play, run the code in any C editor and follow the instructions. Enjoy!"*/
   
int main(){

	printf("\t\t\t_______|_______|_______\t\t\t\n");
	printf("\t\t\t       |       |       \t\t\t\n");
	printf("\t\t\t   1   |   2   |   3   \t\t\t\n");
	printf("\t\t\t_______|_______|_______\t\t\t\n");
	printf("\t\t\t       |       |       \t\t\t\n");
	printf("\t\t\t   4   |   5   |   6   \t\t\t\n");
	printf("\t\t\t_______|_______|_______\t\t\t\n");
	printf("\t\t\t       |       |       \t\t\t\n");
	printf("\t\t\t   7   |   8   |   9   \t\t\t\n");
	printf("\t\t\t_______|_______|_______\t\t\t\n");
	printf("\t\t\t       |       |       \t\t\t\n");

	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;
	int seven = 0;
	int eight = 0;
	int nine = 0;

	printf("\n      For Every Turn, Player Should Select The Number Of The Space Chosen \t\t\t\n\n");
	
	int c1; //chance1
	printf("\n      Player Ones Turn: (Enter No In 1 to 9) \t\t\t\n\n");
	scanf("%d", &c1);
	
	if(c1 <1 || c1 >9) printf("Enter Valid No");
	
	switch (c1)
	{
		case 1: 	printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\tPlayer1|   2   |   3   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\t   4   |   5   |   6   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\t   7   |   8   |   9   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				
				one = 1;break;
		case 2: 	printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\t   1   |Player2|   3   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\t   4   |   5   |   6   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				printf("\t\t\t   7   |   8   |   9   \t\t\t\n");
				printf("\t\t\t_______|_______|_______\t\t\t\n");
				printf("\t\t\t       |       |       \t\t\t\n");
				
				two = 1;
		

	}
return 0;

}
