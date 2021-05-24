#include <stdio.h>
#include <stdlib.h>
//ghp_8zMwVoG0nl6SPwf14jIzAu5dwaMdnk33AuIP
#define MAX 10

int count = 0;

struct stack 
{
	char items[MAX];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s) 
{
	s -> top = -1;
}

int isfull(st *s)
{
	if(s -> top == MAX -1)
		return 1;
	else
		return 0;
}
		 
int isempty(st *s) 
{
	if(s -> top == -1)
		return 1;
	else
		return 0;
}

void push(st *s, char newitem)
{
	if(isfull(s))
		printf("STACK FULL");
	else
	{
		(s -> top)++;
		(s -> items[s->top]) = newitem;
		count ++;
	}
}

void pop(st *s)
{
	if(isempty(s))
		printf("STACK EMPTY");
	else
	{
		printf("%c has been popped", s->items[s->top]);
		(s -> top)--;
		count--;
	}
}

void printStack(st *s)
{
	printf("Stack: \n");
	for(int i = 0; i < count; i++)
	{
		printf("%c\n", s -> items[i]);
	}
}

int main()
{

	st *s = (st *) malloc(sizeof(st));
	
	createEmptyStack(s);
	
	push(s, 'a');
	push(s, 'b');
	push(s, 'c');
	push(s, 'd');
	push(s, 'e');
	
	printStack(s);
	pop(s);
	printf("\n");
	printStack(s);
}	
	









