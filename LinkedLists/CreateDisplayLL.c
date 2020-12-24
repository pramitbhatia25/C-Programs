#include <stdio.h>
#include <stdlib.h>

main()
{

	struct node
	{
		int data;
		struct node *next; //defining a pointer variable of node structure
	};

	struct node *head = NULL; //create head node
	
	struct node *t,*p;

	int a;

	t = (struct node*) malloc(sizeof(struct node)); //t is an address variable which is type casted to a variable of struct type ie struct node *)

	printf("Enter number:\n");
	scanf("%d", &t -> data);

	t -> next = NULL;
	
	head = t; // basically we are storing address of 1st node in head so we can refer to head node when required

	do{
		t = (struct node *) malloc(sizeof(struct node));
		printf("Enter number:\n");
		scanf("%d", &t->data);
		t ->next = NULL;
		p = head;
		while(p -> next)
			p = p -> next; 
		p ->next = t;
		printf("Do you want to add another element? 1 for yes, 0 for no");
		scanf("%d",&a);
	}while(a);

	p = head;
	
	while(p!= NULL)
	{
		printf("%d\n", p -> data);
		p = p ->next;
	}
	return 0;
}


