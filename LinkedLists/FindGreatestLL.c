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
	
	head = t;

	do{
		t = (struct node *) malloc(sizeof(struct node));
		printf("Enter number:\n");
		scanf("%d", &t->data);
		t -> next = NULL;
		p = head;
		while(p -> next)
			p = p -> next; 
		p ->next = t;
		printf("Do you want to add another element? 1 for yes, 0 for no");
		scanf("%d",&a);
	}while(a);

	struct node *largest_node(struct node *p) // it returns address of a node thus we write *largest_node
	{
		struct node *t;
		
		while( p -> next)
		{
			if(p->data > &t)
				&t -> data = p -> data;		
		}
		
		return t;
	}
	
	struct node *q;
	q = largest_node(head);
	printf("%d", q->data);


	
	
}


